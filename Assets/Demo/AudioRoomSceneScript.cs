using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using qnrtc;

namespace QNRTCUnityDemo
{
    public partial class AudioRoomSceneScript : MonoBehaviour
    {
        public Text RoomStateText;
        public UserTableView UserTableView;
        public LogPrintView LogPrintView;
        public SendMessageView SendMessageView;
        public MediaRelayView MediaRelayView;
        public DirectLiveView DirectLiveView;
        public TranscodingLiveView TranscodingLiveView;
        public StatisticsPrintView StatisticsPrintView;

        public Button BackButton;
        public Button LeaveRoomButton;
        public Button LogButton;
        public Button MuteLocalButton;
        public Button MuteRemoteButton;
        public Button AudioRouteButton;
        public Button SendMessageButton;
        public Button MediaRelayButton;
        public Button DirectLiveButton;
        public Button TranscodingLiveButton;
        public Button StatisticsButton;

        private bool isLeaveRoomButtonSelected = false;
        private bool isLogButtonSelected = false;
        private bool isMuteLocalButtonSelected = false;
        private bool isMuteRemoteButtonSelected = false;
        private bool isAudioRouteButtonSelected = true;
        private bool isSendMessageButtonSelected = false;
        private bool isMediaRelayButtonSelected = false;
        private bool isDirectLiveButtonSelected = false;
        private bool isTranscodingLiveButtonSelected = false;
        private bool isStatisticsButtonSelected = false;

        private QNRTCClient client;
        private QNConnectionState state;
        private QNMicrophoneAudioTrack microphoneAudioTrack;
        private QNCustomAudioTrack customAudioTrack;

        private AudioDataReader pcmReader;

        private float updateInterval = 2.0f;

        // Start is called before the first frame update
        void Start()
        {
            SendMessageView.OnSendHandler += OnSendMessageViewSendButtonClick;
            MediaRelayView.OnStartHandler += OnMediaRelayViewStartButtonClick;
            MediaRelayView.OnUpdateHandler += OnMediaRelayViewUpdateButtonClick;
            MediaRelayView.OnStopHandler += OnMediaRelayViewStopButtonClick;
            DirectLiveView.OnStartHandler += OnDirectLiveViewStartButtonClick;
            DirectLiveView.OnStopHandler += OnDirectLiveViewStopButtonClick;
            TranscodingLiveView.OnStartTranscodingHandler += OnTranscodingLiveViewStartTranscodingButtonClick;
            TranscodingLiveView.OnStopTranscodingHandler += OnTranscodingLiveViewStopTranscodingButtonClick;
            TranscodingLiveView.OnUpdateLayoutHandler += OnTranscodingLiveViewUpdateLayoutButtonClick;
            TranscodingLiveView.OnRemoveLayoutHandler += OnTranscodingLiveViewRemoveLayoutButtonClick;

            LogRecorder.GetInstance().Record("SDK Version: " + QNRTC.GetVersion());

            QNLogLevel logLevel = QNLogLevel.Info;
            string logDirName = Application.temporaryCachePath + "/QNRTC";
            string logFileName = "webrtc_log";
            QNRTC.SetLogFile(logLevel, logDirName, logFileName);

            LogRecorder.GetInstance().Record("QNRTC SetLogFile: " +
                " Level: " + logLevel +
                " LogDirName: " + logDirName +
                " LogFileName: " + logFileName);

            QNRTCSetting setting = new QNRTCSetting();
            setting.Policy = Config.GetInstance().Policy;
            setting.IsAec3Enabled = Config.GetInstance().IsAEC3Enabled;
            setting.IsAudioRedundantEnabled = Config.GetInstance().IsRedEnabled;

            LogRecorder.GetInstance().Record("QNRTCSetting  Policy: " + setting.Policy + " IsAec3Enabled: " + setting.IsAec3Enabled + " IsAudioRedundantEnabled: " + setting.IsAudioRedundantEnabled);

            QNRTC.Init(setting);

            LogRecorder.GetInstance().Record("QNRTC Init");

            QNRTCClientConfig clientConfig = new QNRTCClientConfig();
            clientConfig.Mode = Config.GetInstance().Mode;
            clientConfig.Role = Config.GetInstance().Role;

            LogRecorder.GetInstance().Record("QNRTCClientConfig  Mode: " + clientConfig.Mode + " Role: " + clientConfig.Role);

            client = QNRTC.GetClient(clientConfig);
            client.AddClientEventListener(this);
            client.AddPublishResultListener(this);
            client.AddMediaRelayListener(this);
            client.AddLiveStreamingListener(this);

            LogRecorder.GetInstance().Record("QNRTCClient Init");

            if (Config.GetInstance().IsCustomAudio)
            {
                string pcmFilePath = Application.streamingAssetsPath + "/48k_s16_ac1.pcm";
                pcmReader = new AudioDataReader(pcmFilePath, 16, 48000, 1);
                pcmReader.AudioDataCallback += OnReaderAudioDataCallBack;
                pcmReader.StartReading();

                QNCustomAudioTrackConfig customAudioTrackConfig = new QNCustomAudioTrackConfig();
                QNAudioQuality audioQuality = new QNAudioQuality();
                audioQuality.SampleRate = 48000;
                audioQuality.BitsPerSample = 16;
                audioQuality.ChannelCount = 1;
                audioQuality.Bitrate = 96;

                customAudioTrackConfig.AudioQuality = audioQuality;
                customAudioTrackConfig.Tag = "Custom";

                customAudioTrack = QNRTC.CreateCustomAudioTrack(customAudioTrackConfig);
                //customAudioTrack.AddAudioFrameListener(this);

                LogRecorder.GetInstance().Record("QNRTC CreateCustomAudioTrack: " +
                    " SampleRate: " + audioQuality.SampleRate +
                    " BitsPerSample: " + audioQuality.BitsPerSample +
                    " ChannelCount: " + audioQuality.ChannelCount +
                    " Bitrate: " + audioQuality.Bitrate +
                    " Tag: " + customAudioTrackConfig.Tag);

                UserTableView.AddTrack(customAudioTrack, true);
            }
            else
            {
                QNMicrophoneAudioTrackConfig microphoneAudioTrackConfig = new QNMicrophoneAudioTrackConfig();
                QNAudioQuality audioQuality = new QNAudioQuality();
                audioQuality.SampleRate = 48000;
                audioQuality.BitsPerSample = 16;
                audioQuality.ChannelCount = 1;
                audioQuality.Bitrate = 96;

                microphoneAudioTrackConfig.AudioQuality = audioQuality;
                microphoneAudioTrackConfig.Tag = "Microphone";

                microphoneAudioTrack = QNRTC.CreateMicrophoneAudioTrack(microphoneAudioTrackConfig);
                //microphoneAudioTrack.AddAudioFrameListener(this);

                LogRecorder.GetInstance().Record("QNRTC CreateMicrophoneAudioTrack: " +
                    " SampleRate: " + audioQuality.SampleRate +
                    " BitsPerSample: " + audioQuality.BitsPerSample +
                    " ChannelCount: " + audioQuality.ChannelCount +
                    " Bitrate: " + audioQuality.Bitrate +
                    " Tag: " + microphoneAudioTrackConfig.Tag);

                UserTableView.AddTrack(microphoneAudioTrack, true);
            }

            client.Join(Config.GetInstance().Token);
            LogRecorder.GetInstance().Record("QNRTCClient JoinRoom: " +
                " appid: " + Config.GetInstance().AppId +
                " roomName: " + Config.GetInstance().RoomName +
                " userId: " + Config.GetInstance().UserId +
                " Token: " + Config.GetInstance().Token);
        }

        void Update()
        {
            updateInterval -= Time.deltaTime;
            if (updateInterval <= 0)
            {
                UpdateStatisticsView();
                updateInterval = 2.0f;
            }
        }

        public void OnBackButtonClick()
        {
            UserTableView.RemoveRemote();

            if (Config.GetInstance().IsCustomAudio)
            {
                pcmReader.StopReading();
            }

            client.Leave();
            LogRecorder.GetInstance().Record("QNRTCClient LeaveRoom");

            QNRTC.DeInit();
            LogRecorder.GetInstance().Record("QNRTC DeInit");

            SceneManager.LoadScene("HomeScene", LoadSceneMode.Single);
        }

        public void OnLeaveRoomButtonClick()
        {
            isLeaveRoomButtonSelected = !isLeaveRoomButtonSelected;
            if (isLeaveRoomButtonSelected)
            {
                UserTableView.RemoveRemote();
                client.Leave();
                LogRecorder.GetInstance().Record("QNRTCClient LeaveRoom");
                Text LeaveRoomButtonText = LeaveRoomButton.transform.Find("Text").GetComponent<Text>();
                LeaveRoomButtonText.text = "加入房间";
            }
            else
            {
                client.Join(Config.GetInstance().Token);
                LogRecorder.GetInstance().Record("QNRTCClient JoinRoom");
            }
        }

        public void OnLogButtonClick()
        {
            isLogButtonSelected = !isLogButtonSelected;
            LogPrintView.gameObject.SetActive(isLogButtonSelected);
        }

        public void OnMuteLocalButtonClick()
        {
            isMuteLocalButtonSelected = !isMuteLocalButtonSelected;
            if (Config.GetInstance().IsCustomAudio)
            {
                customAudioTrack.SetMuted(isMuteLocalButtonSelected);
                LogRecorder.GetInstance().Record("QNCustomAudioTrack SetMuted: " + isMuteLocalButtonSelected);
            }
            else
            {
                microphoneAudioTrack.SetMuted(isMuteLocalButtonSelected);
                LogRecorder.GetInstance().Record("QNMicrophoneAudioTrack SetMuted: " + isMuteLocalButtonSelected);
            }

            Text MuteLocalButtonText = MuteLocalButton.transform.Find("Text").GetComponent<Text>();
            MuteLocalButtonText.text = (true == isMuteLocalButtonSelected) ? "恢复本端" : "静音本端";
        }

        public void OnMuteRemoteButtonClick()
        {
            isMuteRemoteButtonSelected = !isMuteRemoteButtonSelected;
            QNRTC.SetAudioPlayMute(isMuteRemoteButtonSelected);
            LogRecorder.GetInstance().Record("QNRTC SetSpeakerphoneMuted: " + isMuteRemoteButtonSelected);
            Text MuteRemoteButtonText = MuteRemoteButton.transform.Find("Text").GetComponent<Text>();
            MuteRemoteButtonText.text = (true == isMuteRemoteButtonSelected) ? "恢复远端" : "静音远端";
        }

        public void OnAudioRouteButtonClick()
        {
            isAudioRouteButtonSelected = !isAudioRouteButtonSelected;
            QNRTC.SetAudioRouteToSpeakerphone(isAudioRouteButtonSelected);
            LogRecorder.GetInstance().Record("QNRTC SetAudioRouteToSpeakerphone: " + isAudioRouteButtonSelected);
            Text AudioRouteButtonText = AudioRouteButton.transform.Find("Text").GetComponent<Text>();
            AudioRouteButtonText.text = (true == isAudioRouteButtonSelected) ?  "听筒输出" : "扬声器输出";
        }

        public void OnSendMessageButtonClick()
        {
            isSendMessageButtonSelected = !isSendMessageButtonSelected;
            if (isSendMessageButtonSelected)
            {
                List<QNRemoteUser> remoteUsers = client.GetRemoteUserList();
                SendMessageView.UpdateUserList(remoteUsers);
            }
            else
            {
                SendMessageView.ClearUserList();
            }
            SendMessageView.gameObject.SetActive(isSendMessageButtonSelected);
        }

        public void OnMediaRelayButtonClick()
        {
            isMediaRelayButtonSelected = !isMediaRelayButtonSelected;
            MediaRelayView.gameObject.SetActive(isMediaRelayButtonSelected);
        }

        public void OnDirectLiveButtonClick()
        {
            isDirectLiveButtonSelected = !isDirectLiveButtonSelected;
            if (isDirectLiveButtonSelected)
            {
                List<QNLocalTrack> publishedTracks = client.GetPublishedTracks();
                DirectLiveView.UpdatePublishedTracks(publishedTracks);
            }
            else
            {
                DirectLiveView.ClearPublishedTracks();
            }
            DirectLiveView.gameObject.SetActive(isDirectLiveButtonSelected);
        }

        public void OnTranscodingLiveButtonClick()
        {
            isTranscodingLiveButtonSelected = !isTranscodingLiveButtonSelected;
            if (isTranscodingLiveButtonSelected)
            {
                List<QNLocalTrack> publishedTracks = client.GetPublishedTracks();
                List<QNRemoteUser> remoteUsers = client.GetRemoteUserList();
                TranscodingLiveView.UpdateUserInfo(publishedTracks, remoteUsers);
            }
            else
            {
                TranscodingLiveView.ClearUserInfo();
            }
            TranscodingLiveView.gameObject.SetActive(isTranscodingLiveButtonSelected);
        }

        public void OnStatisticsPrintButtonClick()
        {
            isStatisticsButtonSelected = !isStatisticsButtonSelected;
            StatisticsPrintView.gameObject.SetActive(isStatisticsButtonSelected);
        }

        public void OnSendMessageViewSendButtonClick(string userId, string messageId, string message)
        {
            List<string> userList = new List<string>();
            if (!userId.Equals(""))
            {
                userList.Add(userId);
            }
            client.SendMessage(userList, messageId, message);
            LogRecorder.GetInstance().Record("QNRTCClient SendMessage: " + " userId: " + userId + " messageId: " + messageId + " message: " + message);
        }

        public void OnMediaRelayViewStartButtonClick(List<QNMediaRelayInfo> destRoomInfos)
        {
            if (destRoomInfos.Count > 0)
            {
                QNMediaRelayInfo srcRoomInfo = new QNMediaRelayInfo();
                srcRoomInfo.RoomName = Config.GetInstance().RoomName;
                srcRoomInfo.RelayToken = Config.GetInstance().Token;

                QNMediaRelayConfiguration config = new QNMediaRelayConfiguration();
                config.SrcRoomInfo = srcRoomInfo;
                config.DestRoomInfos = destRoomInfos;
                client.StartMediaRelay(config);
                LogRecorder.GetInstance().Record("QNRTCClient StartMediaRelay: ");
                LogRecorder.GetInstance().Record("Src Room Name: " + srcRoomInfo.RoomName + ", Src Room Token: " + srcRoomInfo.RelayToken);
                foreach (QNMediaRelayInfo destRoomInfo in destRoomInfos)
                {
                    LogRecorder.GetInstance().Record("Dest Room Name: " + destRoomInfo.RoomName + ", Dest Room Token: " + destRoomInfo.RelayToken);
                }
            }
        }

        public void OnMediaRelayViewUpdateButtonClick(List<QNMediaRelayInfo> destRoomInfos)
        {
            if (destRoomInfos.Count > 0)
            {
                QNMediaRelayInfo srcRoomInfo = new QNMediaRelayInfo();
                srcRoomInfo.RoomName = Config.GetInstance().RoomName;
                srcRoomInfo.RelayToken = Config.GetInstance().Token;

                QNMediaRelayConfiguration config = new QNMediaRelayConfiguration();
                config.SrcRoomInfo = srcRoomInfo;
                config.DestRoomInfos = destRoomInfos;
                client.UpdateMediaRelay(config);
                LogRecorder.GetInstance().Record("QNRTCClient UpdateMediaRelay: ");
                LogRecorder.GetInstance().Record("Src Room Name: " + srcRoomInfo.RoomName + ", Src Room Token: " + srcRoomInfo.RelayToken);
                foreach (QNMediaRelayInfo destRoomInfo in destRoomInfos)
                {
                    LogRecorder.GetInstance().Record("Dest Room Name: " + destRoomInfo.RoomName + ", Dest Room Token: " + destRoomInfo.RelayToken);
                }
            }
        }

        public void OnMediaRelayViewStopButtonClick()
        {
            client.StopMediaRelay();
            LogRecorder.GetInstance().Record("QNRTCClient StopMediaRelay");
        }

        public void OnDirectLiveViewStartButtonClick(QNDirectLiveStreamingConfig config)
        {
            client.StartDirectLiveStreaming(config);
            LogRecorder.GetInstance().Record("QNRTCClient StartDirectLiveStreaming: ");
            LogRecorder.GetInstance().Record("LocalAudioTrack: " + config.LocalAudioTrack.GetTrackID());
            LogRecorder.GetInstance().Record("StreamId: " + config.StreamId);
            LogRecorder.GetInstance().Record("PublishUrl: " + config.PublishUrl);
        }

        public void OnDirectLiveViewStopButtonClick(QNDirectLiveStreamingConfig config)
        {
            client.StopDirectLiveStreaming(config);
            LogRecorder.GetInstance().Record("QNRTCClient StopDirectLiveStreaming: ");
            LogRecorder.GetInstance().Record("LocalAudioTrack: " + config.LocalAudioTrack.GetTrackID());
            LogRecorder.GetInstance().Record("StreamId: " + config.StreamId);
            LogRecorder.GetInstance().Record("PublishUrl: " + config.PublishUrl);
        }

        public void OnTranscodingLiveViewStartTranscodingButtonClick(QNTranscodingLiveStreamingConfig config)
        {
            client.StartTranscodingLiveStreaming(config);
            LogRecorder.GetInstance().Record("QNRTCClient StartTranscodingLiveStreaming: ");
            LogRecorder.GetInstance().Record("StreamId: " + config.StreamId);
            LogRecorder.GetInstance().Record("PublishUrl: " + config.PublishUrl);
        }

        public void OnTranscodingLiveViewStopTranscodingButtonClick(QNTranscodingLiveStreamingConfig config)
        {
            client.StopTranscodingLiveStreaming(config);
            LogRecorder.GetInstance().Record("QNRTCClient StopTranscodingLiveStreaming: ");
            LogRecorder.GetInstance().Record("StreamId: " + config.StreamId);
        }

        public void OnTranscodingLiveViewUpdateLayoutButtonClick(string streamId, List<QNTranscodingLiveStreamingTrack> layouts)
        {
            client.SetTranscodingLiveStreamingTracks(streamId, layouts);
            LogRecorder.GetInstance().Record("QNRTCClient SetTranscodingLiveStreamingTracks: ");
            LogRecorder.GetInstance().Record("StreamId: " + streamId);
            foreach (QNTranscodingLiveStreamingTrack layout in layouts)
            {
                LogRecorder.GetInstance().Record("TrackId: " + layout.TrackId);
            }
        }

        public void OnTranscodingLiveViewRemoveLayoutButtonClick(string streamId, List<QNTranscodingLiveStreamingTrack> layouts)
        {
            client.RemoveTranscodingLiveStreamingTracks(streamId, layouts);
            LogRecorder.GetInstance().Record("QNRTCClient RemoveTranscodingLiveStreamingTracks: ");
            LogRecorder.GetInstance().Record("StreamId: " + streamId);
            foreach (QNTranscodingLiveStreamingTrack layout in layouts)
            {
                LogRecorder.GetInstance().Record("TrackId: " + layout.TrackId);
            }
        }

        private void UpdateStatisticsView()
        {
            if (null != client && (state == QNConnectionState.Connected || state == QNConnectionState.Reconnected)) {
                StatisticsPrintView.UpdateStatisticsView(client);
            }
        }

        private void OnReaderAudioDataCallBack(byte[] data, uint dataSize, uint bitsPerSample, uint sampleRate, uint channels)
        {
            if (state == QNConnectionState.Connected || state == QNConnectionState.Reconnected)
            {
                customAudioTrack.PushAudioFrame(data, dataSize, bitsPerSample, sampleRate, channels);
            }
        }
    }

    public partial class AudioRoomSceneScript : QNRTCClientEventListener, QNPublishResultListener, QNMediaRelayListener, QNLiveStreamingListener
    {
        public void OnConnectionStateChanged(QNConnectionState state, QNConnectionDisconnectedInfo? info)
        {
            LogRecorder.GetInstance().Record("QNRTCClientEventListener OnConnectionStateChanged: " + state.ToString());
            this.state = state;
            RoomStateText.text = state.ToString();

            if (state == QNConnectionState.Connected || state == QNConnectionState.Reconnected)
            {
                Text LeaveRoomButtonText = LeaveRoomButton.transform.Find("Text").GetComponent<Text>();
                LeaveRoomButtonText.text = "离开房间";
            }

            if (state == QNConnectionState.Connected)
            {
                List<QNLocalTrack> localTracks;
                if (Config.GetInstance().IsCustomAudio)
                {
                    localTracks = new List<QNLocalTrack> { customAudioTrack };
                }
                else
                {
                    localTracks = new List<QNLocalTrack> { microphoneAudioTrack };
                }
                client.Publish(localTracks);
            }
            else if (state == QNConnectionState.Disconnected)
            {
                LogRecorder.GetInstance().Record("QNConnectionDisconnectedInfo: " +
                    " Reason: " + info?.Reason +
                    " ErrorCode: " + info?.ErrorCode +
                    " ErrorMessage: " + info?.ErrorMessage);
            }
        }

        public void OnUserJoined(string remoteUserId, string userData)
        {
            LogRecorder.GetInstance().Record("QNRTCClientEventListener OnUserJoined " + " remoteUserId: " + remoteUserId + " userData: " + userData);
        }

        public void OnUserLeft(string remoteUserId)
        {
            LogRecorder.GetInstance().Record("QNRTCClientEventListener OnUserLeft " + " remoteUserId: " + remoteUserId);
        }

        public void OnUserReconnecting(string remoteUserId)
        {
            LogRecorder.GetInstance().Record("QNRTCClientEventListener OnUserReconnecting " + " remoteUserId: " + remoteUserId);
        }

        public void OnPublished()
        {
            LogRecorder.GetInstance().Record("QNPublishResultListener OnPublished");
        }

        public void OnPublishError(int errorCode, string errorMessage)
        {
            LogRecorder.GetInstance().Record("QNPublishResultListener OnPublishError " + " errorCode: " + errorCode + " errorMessage: " + errorMessage);
        }

        public void OnUserReconnected(string remoteUserId)
        {
            LogRecorder.GetInstance().Record("QNRTCClientEventListener OnUserReconnected " + " remoteUserId: " + remoteUserId);
        }

        public void OnUserPublished(string remoteUserId, List<QNRemoteTrack> trackList)
        {
            LogRecorder.GetInstance().Record("QNRTCClientEventListener OnUserPublished " + " remoteUserId: " + remoteUserId);
            foreach (QNRemoteTrack remoteTrack in trackList)
            {
                LogRecorder.GetInstance().Record("RemoteTrack " + " TrackID: " + remoteTrack.GetTrackID() + " Tag: " + remoteTrack.GetTag());
            }
            client.Subscribe(trackList);
            QNRemoteUser remoteUser = client.GetRemoteUser(remoteUserId);
            LogRecorder.GetInstance().Record("QNRemoteUser: UserId: " + remoteUser.UserId + " UserData: " + remoteUser.UserData);
        }

        public void OnUserUnpublished(string remoteUserId, List<QNRemoteTrack> trackList)
        {
            LogRecorder.GetInstance().Record("QNRTCClientEventListener OnUserUnpublished " + " remoteUserId: " + remoteUserId);
            foreach (QNRemoteTrack remoteTrack in trackList)
            {
                LogRecorder.GetInstance().Record("RemoteTrack " + " TrackID: " + remoteTrack.GetTrackID() + " Tag: " + remoteTrack.GetTag());
                UserTableView.RemoveTrack(remoteTrack);
            }
        }

        public void OnSubscribed(string remoteUserId, List<QNRemoteAudioTrack> remoteAudioTrackList)
        {
            LogRecorder.GetInstance().Record("QNRTCClientEventListener OnSubscribed " + " remoteUserId: " + remoteUserId);
            foreach (QNRemoteAudioTrack remoteAudioTrack in remoteAudioTrackList)
            {
                LogRecorder.GetInstance().Record("RemoteTrack " + " TrackID: " + remoteAudioTrack.GetTrackID() + " Tag: " + remoteAudioTrack.GetTag());
                UserTableView.AddTrack(remoteAudioTrack, false);
            }
        }

        public void OnMessageReceived(QNCustomMessage message)
        {
            LogRecorder.GetInstance().Record("QNRTCClientEventListener OnMessageReceived " +
                " msgId: " + message.msgId +
                " msgSendId: " + message.msgSendId +
                " msgText: " + message.msgText +
                " msgTimestamp: " + message.msgTimestamp);
        }

        public void OnMediaRelayStateChanged(string relayRoom, QNMediaRelayState state)
        {
            LogRecorder.GetInstance().Record("QNRTCClientEventListener OnMediaRelayStateChanged " + " relayRoom: " + relayRoom + " state: " + state);
        }

        public void OnMediaRelayResult(Dictionary<string, QNMediaRelayState> stateMap)
        {
            LogRecorder.GetInstance().Record("QNMediaRelayListener OnMediaRelayResult: ");
            foreach (var item in stateMap)
            {
                LogRecorder.GetInstance().Record("RoomName: " + item.Key + ", state: " + item.Value);
            }
        }

        public void OnMediaRelayError(int errorCode, string errorMessage)
        {
            LogRecorder.GetInstance().Record("QNMediaRelayListener OnMediaRelayError " + " errorCode: " + errorCode + " errorMessage: " + errorMessage);
        }

        public void OnStarted(string streamId)
        {
            LogRecorder.GetInstance().Record("QNLiveStreamingListener OnStarted " + " streamId: " + streamId);
        }

        public void OnStoped(string streamId)
        {
            LogRecorder.GetInstance().Record("QNLiveStreamingListener OnStoped " + " streamId: " + streamId);
        }

        public void OnTranscodingTracksUpdated(string streamId)
        {
            LogRecorder.GetInstance().Record("QNLiveStreamingListener OnTranscodingTracksUpdated " + " streamId: " + streamId);
        }

        public void OnLiveStreamingError(string streamId, QNLiveStreamingErrorInfo errorInfo)
        {
            LogRecorder.GetInstance().Record("QNLiveStreamingListener OnLiveStreamingError " + " streamId: " + streamId + " errorInfo: " + errorInfo);
        }
    }
}



using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using qnrtc;

namespace QNRTCUnityDemo
{
    public class TranscodingLiveView : MonoBehaviour
    {
        public delegate void OnStartTranscodingButtonClickHandler(QNTranscodingLiveStreamingConfig config);
        public delegate void OnStopTranscodingButtonClickHandler(QNTranscodingLiveStreamingConfig config);
        public delegate void OnUpdateLayoutButtonClickHandler(string streamId, List<QNTranscodingLiveStreamingTrack> layouts);
        public delegate void OnRemoveLayoutButtonClickHandler(string streamId, List<QNTranscodingLiveStreamingTrack> layouts);
        public event OnStartTranscodingButtonClickHandler OnStartTranscodingHandler;
        public event OnStopTranscodingButtonClickHandler OnStopTranscodingHandler;
        public event OnUpdateLayoutButtonClickHandler OnUpdateLayoutHandler;
        public event OnRemoveLayoutButtonClickHandler OnRemoveLayoutHandler;

        public InputField StreamIdInputField;
        public InputField PublishUrlInputField;
        public InputField TranscodingWidthInputField;
        public InputField TranscodingHeightInputField;
        public InputField FpsInputField;
        public InputField BitrateInputField;
        public InputField MinBitrateInputField;
        public InputField MaxBitrateInputField;
        public Toggle IsHoldLastFrameToggle;
        public Dropdown StretchModeDropdown;

        public Toggle BackgroundImageToggle;
        public InputField BackgroundUrlInputField;
        public InputField BackgroundXInputField;
        public InputField BackgroundYInputField;
        public InputField BackgroundWidthInputField;
        public InputField BackgroundHeightInputField;

        public Toggle WatermarkImageToggle;
        public InputField WatermarkUrlInputField;
        public InputField WatermarkXInputField;
        public InputField WatermarkYInputField;
        public InputField WatermarkWidthInputField;
        public InputField WatermarkHeightInputField;

        public Button StartTranscodingButton;
        public Button StopTranscodingButton;

        public Dropdown SelectUserDropdown;
        public Dropdown SelectTrackDropdown;
        public Button UpdateLayoutButton;
        public Button RemoveLayoutButton;

        private Dictionary<string, List<string>> userInfoList = new Dictionary<string, List<string>>();

        void Start()
        {
            StreamIdInputField.text = "stream_id_transcoding";
            PublishUrlInputField.text = "rtmp://pili-publish.live.qiniu.pursue.show/pursue-online/Sun";
            TranscodingWidthInputField.text = "720";
            TranscodingHeightInputField.text = "1280";
            FpsInputField.text = "24";
            BitrateInputField.text = "1500";
            MinBitrateInputField.text = "1500";
            MaxBitrateInputField.text = "1500";
            IsHoldLastFrameToggle.isOn = true;
            StretchModeDropdown.value = 0;

            BackgroundImageToggle.isOn = true;
            BackgroundUrlInputField.text = "http://pili-playback.qnsdk.com/ivs_background_1280x720.png";
            BackgroundXInputField.text = "0";
            BackgroundYInputField.text = "0";
            BackgroundWidthInputField.text = "720";
            BackgroundHeightInputField.text = "1280";

            WatermarkImageToggle.isOn = true;
            WatermarkUrlInputField.text = "http://pili-playback.qnsdk.com/qiniu-logo-110-34.png";
            WatermarkXInputField.text = "30";
            WatermarkYInputField.text = "30";
            WatermarkWidthInputField.text = "110";
            WatermarkHeightInputField.text = "34";
        }

        void Update()
        {
            
        }

        void OnDestroy()
        {
            
        }

        public void OnSelectUserDropdownValueChanged(int index)
        {
            List<Dropdown.OptionData> options = new List<Dropdown.OptionData>();
            string selectedUserId = SelectUserDropdown.options[index].text;
            Debug.Log("selectedUserId: " + selectedUserId + " index: " + index);
            foreach (var userInfo in userInfoList)
            {
                Debug.Log("userInfo.Key: " + userInfo.Key);
                if (userInfo.Key.Equals(selectedUserId))
                {
                    foreach (string trackId in userInfo.Value)
                    {
                        Debug.Log("trackId: " + trackId);
                        Dropdown.OptionData option = new Dropdown.OptionData(trackId);
                        options.Add(option);
                    }
                    break;
                }
            }

            if (0 == options.Count)
            {
                Dropdown.OptionData option = new Dropdown.OptionData("-");
                options.Add(option);
            }

            SelectTrackDropdown.options = options;
        }

        public void OnStartTranscodingButtonClick()
        {
            QNTranscodingLiveStreamingConfig config = new QNTranscodingLiveStreamingConfig();
            config.StreamId = StreamIdInputField.text;
            config.PublishUrl = PublishUrlInputField.text;
            config.Width = Int32.Parse(TranscodingWidthInputField.text);
            config.Height = Int32.Parse(TranscodingHeightInputField.text);
            config.Fps = Int32.Parse(FpsInputField.text);
            config.Bitrate = Int32.Parse(BitrateInputField.text);
            config.MinBitrate = Int32.Parse(MinBitrateInputField.text);
            config.MaxBitrate = Int32.Parse(MaxBitrateInputField.text);
            config.IsHoldLastFrame = IsHoldLastFrameToggle.isOn;
            config.StretchMode = (QNStretchMode)StretchModeDropdown.value;

            if (BackgroundImageToggle.isOn)
            {
                config.MergeBackground.LayerUrl = BackgroundUrlInputField.text;
                config.MergeBackground.X = Int32.Parse(BackgroundXInputField.text);
                config.MergeBackground.Y = Int32.Parse(BackgroundYInputField.text);
                config.MergeBackground.LayerWidth = Int32.Parse(BackgroundWidthInputField.text);
                config.MergeBackground.LayerHeight = Int32.Parse(BackgroundHeightInputField.text);
            }

            if (WatermarkImageToggle.isOn)
            {
                config.MergeWatermark = new List<QNTranscodingLiveStreamingImage>();
                QNTranscodingLiveStreamingImage watermark = new QNTranscodingLiveStreamingImage();
                watermark.LayerUrl = WatermarkUrlInputField.text;
                watermark.X = Int32.Parse(WatermarkXInputField.text);
                watermark.Y = Int32.Parse(WatermarkYInputField.text);
                watermark.LayerWidth = Int32.Parse(WatermarkWidthInputField.text);
                watermark.LayerHeight = Int32.Parse(WatermarkHeightInputField.text);

                config.MergeWatermark.Add(watermark);
            }

            OnStartTranscodingHandler(config);
        }

        public void OnStopTranscodingButtonClick()
        {
            QNTranscodingLiveStreamingConfig config = new QNTranscodingLiveStreamingConfig();
            config.StreamId = StreamIdInputField.text;

            OnStopTranscodingHandler(config);
        }

        public void OnUpdateLayoutButtonClick()
        {
            string selectedTrackId = SelectTrackDropdown.options[SelectTrackDropdown.value].text;
            if (selectedTrackId.Equals("-"))
            {
                return;
            }

            List<QNTranscodingLiveStreamingTrack> layouts = new List<QNTranscodingLiveStreamingTrack>();
            QNTranscodingLiveStreamingTrack layout = new QNTranscodingLiveStreamingTrack();
            layout.TrackId = selectedTrackId;

            layouts.Add(layout);
            OnUpdateLayoutHandler(StreamIdInputField.text, layouts);
        }

        public void OnRemoveLayoutButtonClick()
        {
            string selectedTrackId = SelectTrackDropdown.options[SelectTrackDropdown.value].text;
            if (selectedTrackId.Equals("-"))
            {
                return;
            }

            List<QNTranscodingLiveStreamingTrack> layouts = new List<QNTranscodingLiveStreamingTrack>();
            QNTranscodingLiveStreamingTrack layout = new QNTranscodingLiveStreamingTrack();
            layout.TrackId = selectedTrackId;

            layouts.Add(layout);
            OnRemoveLayoutHandler(StreamIdInputField.text, layouts);
        }

        public void UpdateUserInfo(List<QNLocalTrack> localTracks, List<QNRemoteUser> remoteUsers)
        {
            userInfoList.Clear();
            List<Dropdown.OptionData> options = new List<Dropdown.OptionData>();
            if (localTracks.Count > 0)
            {
                List<string> localTrackIdList = new List<string>();
                foreach (QNLocalTrack localTrack in localTracks)
                {
                    string trackId = localTrack.GetTrackID();
                    Debug.Log("published trackId: " + trackId);
                    if (!trackId.Equals(""))
                    {
                        localTrackIdList.Add(trackId);
                    }
                }
                Debug.Log("userInfoList.Add: " + localTrackIdList.Count);
                userInfoList.Add(Config.GetInstance().UserId, localTrackIdList);
            }

            if (remoteUsers.Count > 0)
            {
                foreach (QNRemoteUser remoteUser in remoteUsers)
                {
                    Debug.Log("remoteUserId: " + remoteUser.UserId);
                    List<string> remoteTrackIdList = new List<string>();
                    foreach (QNRemoteTrack remoteTrack in remoteUser.RemoteAudioTrackList)
                    {
                        string trackId = remoteTrack.GetTrackID();
                        Debug.Log("remoteTrackId: " + trackId);
                        if (!trackId.Equals(""))
                        {
                            remoteTrackIdList.Add(trackId);
                        }
                    }
                    userInfoList.Add(remoteUser.UserId, remoteTrackIdList);
                }
            }

            foreach (var userInfo in userInfoList)
            {
                Debug.Log("Key: " + userInfo.Key);
                Dropdown.OptionData option = new Dropdown.OptionData(userInfo.Key);
                options.Add(option);
            }

            if (0 == options.Count)
            {
                Dropdown.OptionData option = new Dropdown.OptionData("-");
                options.Add(option);
            }

            SelectUserDropdown.options = options;
            OnSelectUserDropdownValueChanged(0);
        }

        public void ClearUserInfo()
        {
            userInfoList.Clear();
            Dropdown.OptionData option = new Dropdown.OptionData("-");

            SelectUserDropdown.options = new List<Dropdown.OptionData>();
            SelectUserDropdown.options.Add(option);

            SelectTrackDropdown.options = new List<Dropdown.OptionData>();
            SelectTrackDropdown.options.Add(option);
        }
    }
}
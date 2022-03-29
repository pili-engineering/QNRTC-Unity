using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using AOT;

namespace qnrtc
{
    public sealed class QNRTCClientImpl : QNRTCClient
    {
        #region Inner
        public IntPtr nativeInstance = IntPtr.Zero;
        public List<QNRemoteTrack> remoteTracks = new List<QNRemoteTrack>();

        private static QNRTCClientImpl sInstance = null;
        private List<QNRTCClientEventListener> clientEventListeners = new List<QNRTCClientEventListener>();
        private List<QNRTCClientRoleEventListener> clientRoleEventListeners = new List<QNRTCClientRoleEventListener>();
        private List<QNMediaRelayListener> mediaRelayListeners = new List<QNMediaRelayListener>();
        private List<QNPublishResultListener> publishResultListeners = new List<QNPublishResultListener>();
        private List<QNLiveStreamingListener> liveStreamingListeners = new List<QNLiveStreamingListener>();
        private List<QNRemoteAudioMixedFrameListener> remoteAudioMixedFrameListeners = new List<QNRemoteAudioMixedFrameListener>();
        private List<QNNetworkQualityListener> networkQualityListeners = new List<QNNetworkQualityListener>();

        private QNRTCClientImpl() { }

        public static QNRTCClientImpl GetShareInstance()
        {
            return sInstance;
        }

        public static QNRTCClientImpl InitShareInstance(IntPtr nativeInstance)
        {
            sInstance = new QNRTCClientImpl();
            sInstance.nativeInstance = nativeInstance;
            return sInstance;
        }

        public static void DeInitShareInstance()
        {
            sInstance.nativeInstance = IntPtr.Zero;
            sInstance.remoteTracks.RemoveAll(item => true);
            sInstance.clientEventListeners.RemoveAll(item => true);
            sInstance.clientRoleEventListeners.RemoveAll(item => true);
            sInstance.mediaRelayListeners.RemoveAll(item => true);
            sInstance.publishResultListeners.RemoveAll(item => true);
            sInstance.liveStreamingListeners.RemoveAll(item => true);
            sInstance.remoteAudioMixedFrameListeners.RemoveAll(item => true);
            sInstance.networkQualityListeners.RemoveAll(item => true);
            sInstance = null;
        }
        #endregion

        #region Implement
        public override void AddClientEventListener(QNRTCClientEventListener listener)
        {
            clientEventListeners.Add(listener);
        }

        public override void RemoveClientEventListener(QNRTCClientEventListener listener)
        {
            if (clientEventListeners.Contains(listener))
            {
                clientEventListeners.Remove(listener);
            }
        }

        public override void Join(string token, string userData = "")
        {
            if (IntPtr.Zero == nativeInstance) return;
            QNRTCClientNative.QNRTCClientJoin(nativeInstance, token, userData);
        }

        public override void Leave()
        {
            if (IntPtr.Zero == nativeInstance) return;
            QNRTCClientNative.QNRTCClientLeave(nativeInstance);

            foreach (QNRemoteTrack remoteTrack in remoteTracks)
            {
                QNRemoteTrackImpl remoteTrackImpl = remoteTrack as QNRemoteTrackImpl;
                if (null != remoteTrackImpl)
                {
                    remoteTrackImpl.nativeInstance = IntPtr.Zero;
                }
            }
            remoteTracks.RemoveAll(item => true);
        }

        public override void AddRemoteAudioMixedFrameListener(QNRemoteAudioMixedFrameListener listener)
        {
            remoteAudioMixedFrameListeners.Add(listener);
        }

        public override void RemoveRemoteAudioMixedFrameListener(QNRemoteAudioMixedFrameListener listener)
        {
            if (remoteAudioMixedFrameListeners.Contains(listener))
            {
                remoteAudioMixedFrameListeners.Remove(listener);
            }
        }

        public override void SetClientRole(QNClientRole clientRole)
        {
            if (nativeInstance == IntPtr.Zero) return;
            QNRTCClientNative.QNRTCClientSetClientRole(
                nativeInstance,
                (int)clientRole,
                OnClientRoleResult,
                OnClientRoleError);
        }
        
        public override void AddClientRoleEventListener(QNRTCClientRoleEventListener listener)
        {
            clientRoleEventListeners.Add(listener);
        }

        public override void RemoveClientRoleEventListener(QNRTCClientRoleEventListener listener)
        {
            if (clientRoleEventListeners.Contains(listener))
            {
                clientRoleEventListeners.Remove(listener);
            }
        }

        public override void StartMediaRelay(QNMediaRelayConfiguration configuration)
        {
            if (IntPtr.Zero == nativeInstance) return;

            QNMediaRelayInfo srcRoomInfo = configuration.SrcRoomInfo;
            List<QNMediaRelayInfo> destRoomInfos = configuration.DestRoomInfos;

            QNMediaRelayConfigurationPInvoke configurationPInvoke = new QNMediaRelayConfigurationPInvoke();
            configurationPInvoke.DestRoomInfos = new QNMediaRelayInfoPInvoke[QNRTCPInvoke.MediaRelayCountCapacity];

            QNMediaRelayInfoPInvoke srcRoomInfoPInvoke = new QNMediaRelayInfoPInvoke();
            srcRoomInfoPInvoke.RoomName = srcRoomInfo.RoomName;
            srcRoomInfoPInvoke.RelayToken = srcRoomInfo.RelayToken;
            configurationPInvoke.SrcRoomInfo = srcRoomInfoPInvoke;

            for (int i = 0; i < destRoomInfos.Count; i++)
            {
                QNMediaRelayInfo destRoomInfo = destRoomInfos[i];
                QNMediaRelayInfoPInvoke destRoomInfoPInvoke = new QNMediaRelayInfoPInvoke();
                destRoomInfoPInvoke.RoomName = destRoomInfo.RoomName;
                destRoomInfoPInvoke.RelayToken = destRoomInfo.RelayToken;

                configurationPInvoke.DestRoomInfos[i] = destRoomInfoPInvoke;
                configurationPInvoke.DestRoomCount++;
            }

            QNRTCClientNative.QNRTCClientStartMediaRelay(nativeInstance, ref configurationPInvoke, OnMediaRelayResult, OnMediaRelayError);
        }

        public override void UpdateMediaRelay(QNMediaRelayConfiguration configuration)
        {
            if (IntPtr.Zero == nativeInstance) return;

            QNMediaRelayInfo srcRoomInfo = configuration.SrcRoomInfo;
            List<QNMediaRelayInfo> destRoomInfos = configuration.DestRoomInfos;

            QNMediaRelayConfigurationPInvoke configurationPInvoke = new QNMediaRelayConfigurationPInvoke();
            configurationPInvoke.DestRoomInfos = new QNMediaRelayInfoPInvoke[QNRTCPInvoke.MediaRelayCountCapacity];

            QNMediaRelayInfoPInvoke srcRoomInfoPInvoke = new QNMediaRelayInfoPInvoke();
            srcRoomInfoPInvoke.RoomName = srcRoomInfo.RoomName;
            srcRoomInfoPInvoke.RelayToken = srcRoomInfo.RelayToken;
            configurationPInvoke.SrcRoomInfo = srcRoomInfoPInvoke;

            for (int i = 0; i < destRoomInfos.Count; i++)
            {
                QNMediaRelayInfo destRoomInfo = destRoomInfos[i];
                QNMediaRelayInfoPInvoke destRoomInfoPInvoke = new QNMediaRelayInfoPInvoke();
                destRoomInfoPInvoke.RoomName = destRoomInfo.RoomName;
                destRoomInfoPInvoke.RelayToken = destRoomInfo.RelayToken;

                configurationPInvoke.DestRoomInfos[i] = destRoomInfoPInvoke;
                configurationPInvoke.DestRoomCount++;
            }

            QNRTCClientNative.QNRTCClientUpdateMediaRelay(nativeInstance, ref configurationPInvoke, OnMediaRelayResult, OnMediaRelayError);
        }

        public override void StopMediaRelay()
        {
            if (IntPtr.Zero == nativeInstance) return;
            QNRTCClientNative.QNRTCClientStopMediaRelay(nativeInstance, OnMediaRelayResult, OnMediaRelayError);
        }

        public override void AddMediaRelayListener(QNMediaRelayListener listener)
        {
            mediaRelayListeners.Add(listener);
        }

        public override void RemoveMediaRelayListener(QNMediaRelayListener listener)
        {
            if (mediaRelayListeners.Contains(listener))
            {
                mediaRelayListeners.Remove(listener);
            }
        }

        public override void Publish(List<QNLocalTrack> trackList)
        {
            if (IntPtr.Zero == nativeInstance) return;
            if (0 == trackList.Count) return;

            QNLocalTrackListPInvoke publishTrackListPInvoke = new QNLocalTrackListPInvoke();
            publishTrackListPInvoke.TrackList = new IntPtr[QNRTCPInvoke.LocalTrackCountCapacity];

            for (int i = 0; i < trackList.Count; i++)
            {
                QNLocalTrackImpl localTrackImpl = trackList[i] as QNLocalTrackImpl;
                if (null == localTrackImpl || IntPtr.Zero == localTrackImpl.nativeInstance) return;
                publishTrackListPInvoke.TrackList[i] = localTrackImpl.nativeInstance;
                Console.WriteLine("trackPtr: " + publishTrackListPInvoke.TrackList[i]);
                publishTrackListPInvoke.Count++;
            }

            if (publishTrackListPInvoke.Count > 0)
            {
                QNRTCClientNative.QNRTCClientPublish(nativeInstance, ref publishTrackListPInvoke, OnPublished, OnPublishError);
            }
        }

        public override void Unpublish(List<QNLocalTrack> trackList)
        {
            if (IntPtr.Zero == nativeInstance) return;
            if (0 == trackList.Count) return;

            QNLocalTrackListPInvoke unpublishTrackListPInvoke = new QNLocalTrackListPInvoke();
            unpublishTrackListPInvoke.TrackList = new IntPtr[QNRTCPInvoke.LocalTrackCountCapacity];

            for (int i = 0; i < trackList.Count; i++)
            {
                QNLocalTrackImpl localTrackImpl = trackList[i] as QNLocalTrackImpl;
                if (null == localTrackImpl || IntPtr.Zero == localTrackImpl.nativeInstance) return;
                unpublishTrackListPInvoke.TrackList[i] = localTrackImpl.nativeInstance;
                Console.WriteLine("trackPtr: " + unpublishTrackListPInvoke.TrackList[i]);
                unpublishTrackListPInvoke.Count++;
            }

            if (unpublishTrackListPInvoke.Count  > 0)
            {
                QNRTCClientNative.QNRTCClientUnPublish(nativeInstance, ref unpublishTrackListPInvoke);
            }
        }

        public override void AddPublishResultListener(QNPublishResultListener listener)
        {
            publishResultListeners.Add(listener);
        }

        public override void RemovePublishResultListener(QNPublishResultListener listener)
        {
            if (publishResultListeners.Contains(listener))
            {
                publishResultListeners.Remove(listener);
            }
        }

        public override void Subscribe(List<QNRemoteTrack> trackList)
        {
            if (IntPtr.Zero == nativeInstance) return;
            if (0 == trackList.Count) return;

            QNRemoteTrackListPInvoke subscribeTrackListPInvoke = new QNRemoteTrackListPInvoke();
            subscribeTrackListPInvoke.TrackList = new IntPtr[QNRTCPInvoke.RemoteTrackCountCapacity];

            for (int i = 0; i < trackList.Count; i++)
            {
                QNRemoteTrackImpl remoteTrackImpl = trackList[i] as QNRemoteTrackImpl;
                if (null == remoteTrackImpl && IntPtr.Zero == remoteTrackImpl.nativeInstance) return;
                subscribeTrackListPInvoke.TrackList[i] = remoteTrackImpl.nativeInstance;
                Console.WriteLine("trackPtr: " + subscribeTrackListPInvoke.TrackList[i]);
                subscribeTrackListPInvoke.Count++;
            }

            if (subscribeTrackListPInvoke.Count > 0)
            {
                QNRTCClientNative.QNRTCClientSubscribe(nativeInstance, ref subscribeTrackListPInvoke);
            }
        }

        public override void Unsubscribe(List<QNRemoteTrack> trackList)
        {
            if (IntPtr.Zero == nativeInstance) return;
            if (0 == trackList.Count) return;

            QNRemoteTrackListPInvoke unsubscribeTrackListPInvoke = new QNRemoteTrackListPInvoke();
            unsubscribeTrackListPInvoke.TrackList = new IntPtr[QNRTCPInvoke.RemoteTrackCountCapacity];

            for (int i = 0; i < trackList.Count; i++)
            {
                QNRemoteTrackImpl remoteTrackImpl = trackList[i] as QNRemoteTrackImpl;
                if (null == remoteTrackImpl && IntPtr.Zero == remoteTrackImpl.nativeInstance) return;
                unsubscribeTrackListPInvoke.TrackList[i] = remoteTrackImpl.nativeInstance;
                Console.WriteLine("trackPtr: " + unsubscribeTrackListPInvoke.TrackList[i]);
                unsubscribeTrackListPInvoke.Count++;
            }

            if (unsubscribeTrackListPInvoke.Count > 0)
            {
                QNRTCClientNative.QNRTCClientUnSubscribe(nativeInstance, ref unsubscribeTrackListPInvoke);
            }
        }

        public override void SendMessage(List<string> userList, string messageId, string message)
        {
            if (IntPtr.Zero == nativeInstance) return;

            Console.WriteLine("SendMessage: userCount " + userList.Count + ", messageId " + messageId + ", meesage " + message);

            QNSendMessagePInvoke sendMessagePInvoke = new QNSendMessagePInvoke();
            sendMessagePInvoke.UserList = new QNSendMessageUserIdPInvoke[QNRTCPInvoke.UserListCountCapacity];

            for (int i = 0; i < userList.Count; i++)
            {
                string userId = userList[i];
                sendMessagePInvoke.UserList[i].UserId = userId;
                sendMessagePInvoke.UserCount++;
            }

            sendMessagePInvoke.MessageId = messageId;
            sendMessagePInvoke.Message = messageId;

            QNRTCClientNative.QNRTCClientSendMessage(nativeInstance, ref sendMessagePInvoke);
        }

        public override void StartDirectLiveStreaming(QNDirectLiveStreamingConfig config)
        {
            if (IntPtr.Zero == nativeInstance) return;

            QNLocalAudioTrackImpl localAudioTrackImpl = config.LocalAudioTrack as QNLocalAudioTrackImpl;
            Console.WriteLine("StartDirectLiveStreaming: localAudioTrackImpl " + localAudioTrackImpl.nativeInstance + ", streamId " + config.StreamId + ", publishUrl " + config.PublishUrl);
            if (null == localAudioTrackImpl || IntPtr.Zero == localAudioTrackImpl.nativeInstance) return;

            QNDirectLiveStreamingConfigPInvoke configPInvoke = new QNDirectLiveStreamingConfigPInvoke();
            configPInvoke.LocalAudioTrack = localAudioTrackImpl.nativeInstance;
            configPInvoke.StreamId = config.StreamId;
            configPInvoke.PublishUrl = config.PublishUrl;

            QNRTCClientNative.QNRTCClientStartDirectLiveStreaming(nativeInstance, ref configPInvoke);
        }

        public override void StopDirectLiveStreaming(QNDirectLiveStreamingConfig config)
        {
            if (IntPtr.Zero == nativeInstance) return;

            QNLocalAudioTrackImpl localAudioTrackImpl = config.LocalAudioTrack as QNLocalAudioTrackImpl;
            Console.WriteLine("StopDirectLiveStreaming: localAudioTrackImpl " + localAudioTrackImpl.nativeInstance + ", streamId " + config.StreamId + ", publishUrl " + config.PublishUrl);
            if (null == localAudioTrackImpl || IntPtr.Zero == localAudioTrackImpl.nativeInstance) return;

            QNDirectLiveStreamingConfigPInvoke configPInvoke = new QNDirectLiveStreamingConfigPInvoke();
            configPInvoke.LocalAudioTrack = localAudioTrackImpl.nativeInstance;
            configPInvoke.StreamId = config.StreamId;
            configPInvoke.PublishUrl = config.PublishUrl;

            QNRTCClientNative.QNRTCClientStopDirectLiveStreaming(nativeInstance, ref configPInvoke);
        }

        public override void StartTranscodingLiveStreaming(QNTranscodingLiveStreamingConfig config)
        {
            if (IntPtr.Zero == nativeInstance) return;

            QNTranscodingLiveStreamingConfigPInvoke configPInvoke = new QNTranscodingLiveStreamingConfigPInvoke();
            configPInvoke.MergeWatermark = new QNTranscodingLiveStreamingImagePInvoke[QNRTCPInvoke.WatermarkCountCapacity];

            configPInvoke.StreamId = config.StreamId;
            configPInvoke.PublishUrl = config.PublishUrl;

            QNTranscodingLiveStreamingImagePInvoke backgroundPInvoke = new QNTranscodingLiveStreamingImagePInvoke();
            backgroundPInvoke.LayerUrl = config.MergeBackground.LayerUrl;
            backgroundPInvoke.X = config.MergeBackground.X;
            backgroundPInvoke.Y = config.MergeBackground.Y;
            backgroundPInvoke.LayerWidth = config.MergeBackground.LayerWidth;
            backgroundPInvoke.LayerHeight = config.MergeBackground.LayerHeight;

            configPInvoke.MergeBackground = backgroundPInvoke;

            if (null != config.MergeWatermark)
            {
                for (int i = 0; i < config.MergeWatermark.Count; i++)
                {
                    QNTranscodingLiveStreamingImage watermark = config.MergeWatermark[i];
                    QNTranscodingLiveStreamingImagePInvoke watermarkPInvoke = new QNTranscodingLiveStreamingImagePInvoke();
                    watermarkPInvoke.LayerUrl = watermark.LayerUrl;
                    watermarkPInvoke.X = watermark.X;
                    watermarkPInvoke.Y = watermark.Y;
                    watermarkPInvoke.LayerWidth = watermark.LayerWidth;
                    watermarkPInvoke.LayerHeight = watermark.LayerHeight;

                    configPInvoke.MergeWatermark[i] = watermarkPInvoke;
                    configPInvoke.WatermarkCount++;
                }
            }

            configPInvoke.Width = config.Width;
            configPInvoke.Height = config.Height;
            configPInvoke.Fps = config.Fps;
            configPInvoke.Bitrate = config.Bitrate;
            configPInvoke.MinBitrate = config.MinBitrate;
            configPInvoke.MaxBitrate = config.MaxBitrate;
            configPInvoke.IsHoldLastFrame = config.IsHoldLastFrame;
            configPInvoke.StretchMode = (int)config.StretchMode;

            QNRTCClientNative.QNRTCClientStartTranscodingLiveStreaming(nativeInstance, ref configPInvoke);
        }

        public override void StopTranscodingLiveStreaming(QNTranscodingLiveStreamingConfig config)
        {
            if (IntPtr.Zero == nativeInstance) return;

            QNTranscodingLiveStreamingConfigPInvoke configPInvoke = new QNTranscodingLiveStreamingConfigPInvoke();
            configPInvoke.MergeWatermark = new QNTranscodingLiveStreamingImagePInvoke[QNRTCPInvoke.WatermarkCountCapacity];

            configPInvoke.StreamId = config.StreamId;
            configPInvoke.PublishUrl = config.PublishUrl;

            QNTranscodingLiveStreamingImagePInvoke backgroundPInvoke = new QNTranscodingLiveStreamingImagePInvoke();
            backgroundPInvoke.LayerUrl = config.MergeBackground.LayerUrl;
            backgroundPInvoke.X = config.MergeBackground.X;
            backgroundPInvoke.Y = config.MergeBackground.Y;
            backgroundPInvoke.LayerWidth = config.MergeBackground.LayerWidth;
            backgroundPInvoke.LayerHeight = config.MergeBackground.LayerHeight;

            configPInvoke.MergeBackground = backgroundPInvoke;

            if (null != config.MergeWatermark)
            {
                for (int i = 0; i < config.MergeWatermark.Count; i++)
                {
                    QNTranscodingLiveStreamingImage watermark = config.MergeWatermark[i];
                    QNTranscodingLiveStreamingImagePInvoke watermarkPInvoke = new QNTranscodingLiveStreamingImagePInvoke();
                    watermarkPInvoke.LayerUrl = watermark.LayerUrl;
                    watermarkPInvoke.X = watermark.X;
                    watermarkPInvoke.Y = watermark.Y;
                    watermarkPInvoke.LayerWidth = watermark.LayerWidth;
                    watermarkPInvoke.LayerHeight = watermark.LayerHeight;

                    configPInvoke.MergeWatermark[i] = watermarkPInvoke;
                    configPInvoke.WatermarkCount++;
                }
            }

            configPInvoke.Width = config.Width;
            configPInvoke.Height = config.Height;
            configPInvoke.Fps = config.Fps;
            configPInvoke.Bitrate = config.Bitrate;
            configPInvoke.MinBitrate = config.MinBitrate;
            configPInvoke.MaxBitrate = config.MaxBitrate;
            configPInvoke.IsHoldLastFrame = config.IsHoldLastFrame;
            configPInvoke.StretchMode = (int)config.StretchMode;

            QNRTCClientNative.QNRTCClientStopTranscodingLiveStreaming(nativeInstance, ref configPInvoke);
        }

        public override void SetTranscodingLiveStreamingTracks(string streamId, List<QNTranscodingLiveStreamingTrack> transcodingTrackList)
        {
            if (IntPtr.Zero == nativeInstance) return;
            if (null == transcodingTrackList || 0 == transcodingTrackList.Count) return;

            QNTranscodingLiveStreamingTrackListPInvoke transcodingTrackListPInvoke = new QNTranscodingLiveStreamingTrackListPInvoke();
            transcodingTrackListPInvoke.TranscodingTrackList = new QNTranscodingLiveStreamingTrackPInvoke[QNRTCPInvoke.TranscodingTrackCountCapacity];

            for (int i = 0; i < transcodingTrackList.Count; i++)
            {
                QNTranscodingLiveStreamingTrack transcodingTrack = transcodingTrackList[i];
                QNTranscodingLiveStreamingTrackPInvoke transcodingTrackPInvoke = new QNTranscodingLiveStreamingTrackPInvoke();
                transcodingTrackPInvoke.TrackId = transcodingTrack.TrackId;
                transcodingTrackListPInvoke.TranscodingTrackList[i] = transcodingTrackPInvoke;
                transcodingTrackListPInvoke.Count++;
            }

            QNRTCClientNative.QNRTCClientSetTranscodingLiveStreamingTracks(nativeInstance, streamId, ref transcodingTrackListPInvoke);
        }

        public override void RemoveTranscodingLiveStreamingTracks(string streamId, List<QNTranscodingLiveStreamingTrack> transcodingTrackList)
        {
            if (IntPtr.Zero == nativeInstance) return;
            if (null == transcodingTrackList || 0 == transcodingTrackList.Count) return;

            QNTranscodingLiveStreamingTrackListPInvoke transcodingTrackListPInvoke = new QNTranscodingLiveStreamingTrackListPInvoke();
            transcodingTrackListPInvoke.TranscodingTrackList = new QNTranscodingLiveStreamingTrackPInvoke[QNRTCPInvoke.TranscodingTrackCountCapacity];

            for (int i = 0; i < transcodingTrackList.Count; i++)
            {
                QNTranscodingLiveStreamingTrack transcodingTrack = transcodingTrackList[i];
                QNTranscodingLiveStreamingTrackPInvoke transcodingTrackPInvoke = new QNTranscodingLiveStreamingTrackPInvoke();
                transcodingTrackPInvoke.TrackId = transcodingTrack.TrackId;
                transcodingTrackListPInvoke.TranscodingTrackList[i] = transcodingTrackPInvoke;
                transcodingTrackListPInvoke.Count++;
            }

            QNRTCClientNative.QNRTCClientRemoveTranscodingLiveStreamingTracks(nativeInstance, streamId, ref transcodingTrackListPInvoke);
        }

        public override void AddLiveStreamingListener(QNLiveStreamingListener listener)
        {
            liveStreamingListeners.Add(listener);
        }

        public override void RemoveLiveStreamingListener(QNLiveStreamingListener listener)
        {
            if (liveStreamingListeners.Contains(listener))
            {
                liveStreamingListeners.Remove(listener);
            }
        }

        public override List<QNLocalTrack> GetPublishedTracks()
        {
            if (IntPtr.Zero == nativeInstance) return new List<QNLocalTrack> { };

            QNLocalTrackListPInvoke publishedTrackListPInvoke = new QNLocalTrackListPInvoke();
            Console.WriteLine("QNPublishedTrackListPInvoke:  Track Count " + publishedTrackListPInvoke.Count);

            QNRTCClientNative.QNRTCClientGetPublishedTracks(nativeInstance, ref publishedTrackListPInvoke);

            Console.WriteLine("QNPublishedTrackListPInvoke:  Track Count " + publishedTrackListPInvoke.Count);
            
            List<QNLocalTrack> publishedTrackList = new List<QNLocalTrack>();
            for (int i = 0; i < publishedTrackListPInvoke.Count; i++)
            {
                IntPtr publishedTrackPtr = publishedTrackListPInvoke.TrackList[i];
                Console.WriteLine("publishedTrack: " + publishedTrackPtr);

                foreach (QNLocalTrackImpl cacheLocalTrack in QNRTCImpl.LocalTrackList)
                {
                    if (publishedTrackPtr == cacheLocalTrack.nativeInstance)
                    {
                        publishedTrackList.Add(cacheLocalTrack);
                        break;
                    }
                }
            }

            return publishedTrackList;
        }

        public override QNRemoteUser GetRemoteUser(string userId)
        {
            if (IntPtr.Zero == nativeInstance) return new QNRemoteUser();

            QNRemoteUserPInvoke remoteUserPInvoke = new QNRemoteUserPInvoke();
            Console.WriteLine("QNRTCRemoteUserPInvoke:  UserId " + remoteUserPInvoke.UserId + ", UserData " + remoteUserPInvoke.UserData + ", AudioTrackCount " + remoteUserPInvoke.RemoteAudioTrackCount);

            QNRTCClientNative.QNRTCClientGetRemoteUser(nativeInstance, userId, ref remoteUserPInvoke);
            Console.WriteLine("QNRTCRemoteUserPInvoke:  UserId " + remoteUserPInvoke.UserId + ", UserData " + remoteUserPInvoke.UserData + ", AudioTrackCount " + remoteUserPInvoke.RemoteAudioTrackCount);

            List<QNRemoteAudioTrack> audioTrackList = new List<QNRemoteAudioTrack>();
            for (int i = 0; i < remoteUserPInvoke.RemoteAudioTrackCount; i++)
            {
                IntPtr remoteAudioTrackPtr = remoteUserPInvoke.RemoteAudioTrackList[i];
                Console.WriteLine("audioTrackPtr: " + remoteAudioTrackPtr);

                QNRTCClientImpl shareClientImpl = QNRTCClientImpl.GetShareInstance();
                foreach (QNRemoteTrackImpl cacheRemoteTrackImpl in shareClientImpl.remoteTracks)
                {
                    if (cacheRemoteTrackImpl.nativeInstance == remoteAudioTrackPtr)
                    {
                        QNRemoteAudioTrack audioTrack = cacheRemoteTrackImpl as QNRemoteAudioTrack;
                        if (null != audioTrack) audioTrackList.Add(audioTrack);
                        break;
                    }
                }
            }

            QNRemoteUser remoteUser = new QNRemoteUser();
            remoteUser.UserId = remoteUserPInvoke.UserId.Clone() as string;
            remoteUser.UserData = remoteUserPInvoke.UserData.Clone() as string;
            remoteUser.RemoteAudioTrackList = audioTrackList;
            Console.WriteLine("remoteUser.UserId " + remoteUser.UserId + ", remoteUser.UserData " + remoteUser.UserData);

            return remoteUser;
        }

        public override List<QNRemoteUser> GetRemoteUserList()
        {
            if (IntPtr.Zero == nativeInstance) return new List<QNRemoteUser>();

            QNRemoteUserListPInvoke remoteUserListPInvoke = new QNRemoteUserListPInvoke();
            QNRTCClientNative.QNRTCClientGetRemoteUserList(nativeInstance, ref remoteUserListPInvoke);

            List<QNRemoteUser> remoteUserList = new List<QNRemoteUser>();
            for (int i = 0; i < remoteUserListPInvoke.RemoteUserCount; i++)
            {
                QNRemoteUserPInvoke remoteUserPInvoke = remoteUserListPInvoke.RemoteUserList[i];
                Console.WriteLine("QNRTCRemoteUserPInvoke:  UserId " + remoteUserPInvoke.UserId + ", UserData " + remoteUserPInvoke.UserData + ", AudioTrackCount " + remoteUserPInvoke.RemoteAudioTrackCount);

                List<QNRemoteAudioTrack> audioTrackList = new List<QNRemoteAudioTrack>();
                for (int j = 0; j < remoteUserPInvoke.RemoteAudioTrackCount; j++)
                {
                    IntPtr remoteAudioTrackPtr = remoteUserPInvoke.RemoteAudioTrackList[i];
                    Console.WriteLine("audioTrackPtr: " + remoteAudioTrackPtr);

                    QNRTCClientImpl shareClientImpl = QNRTCClientImpl.GetShareInstance();
                    foreach (QNRemoteTrackImpl cacheRemoteTrackImpl in shareClientImpl.remoteTracks)
                    {
                        if (cacheRemoteTrackImpl.nativeInstance == remoteAudioTrackPtr)
                        {
                            QNRemoteAudioTrack audioTrack = cacheRemoteTrackImpl as QNRemoteAudioTrack;
                            if (null != audioTrack) audioTrackList.Add(audioTrack);
                            break;
                        }
                    }
                }

                QNRemoteUser remoteUser = new QNRemoteUser();
                remoteUser.UserId = remoteUserPInvoke.UserId.Clone() as string;
                remoteUser.UserData = remoteUserPInvoke.UserData.Clone() as string;
                remoteUser.RemoteAudioTrackList = audioTrackList;

                Console.WriteLine("QNRemoteUser UserId: " + remoteUser.UserId);
                Console.WriteLine("QNRemoteUser UserData: " + remoteUser.UserData);
                Console.WriteLine("QNRemoteUser RemoteAudioTrackList Count: " + remoteUser.RemoteAudioTrackList.Count);

                remoteUserList.Add(remoteUser);
            }
            
            return remoteUserList;
        }

        public override Dictionary<string, QNLocalAudioTrackStats> GetLocalAudioTrackStats()
        {
            if (IntPtr.Zero == nativeInstance) return new Dictionary<string, QNLocalAudioTrackStats>();

            QNLocalAudioTrackStatsListPInvoke localAudioTrackStatsListPInvoke = new QNLocalAudioTrackStatsListPInvoke();
            QNRTCClientNative.QNRTCClientGetLocalAudioTrackStats(nativeInstance, ref localAudioTrackStatsListPInvoke);

            Dictionary<string, QNLocalAudioTrackStats> localAudioTrackStatsDic = new Dictionary<string, QNLocalAudioTrackStats>();
            for (int i = 0; i < localAudioTrackStatsListPInvoke.Count; i++)
            {
                QNLocalAudioTrackStatsPInvoke localAudioTrackStatsPInvoke = localAudioTrackStatsListPInvoke.LocalAudioTrackStatsList[i];
                string trackId = localAudioTrackStatsPInvoke.TrackId.Clone() as string;

                QNLocalAudioTrackStats localAudioTrackStats = new QNLocalAudioTrackStats();
                localAudioTrackStats.UplinkBitrate = localAudioTrackStatsPInvoke.UplinkBitrate;
                localAudioTrackStats.UplinkRtt = localAudioTrackStatsPInvoke.UplinkRtt;
                localAudioTrackStats.UplinkLostrate = localAudioTrackStatsPInvoke.UplinkLostrate;
                
                localAudioTrackStatsDic.Add(trackId, localAudioTrackStats);
            }

            return localAudioTrackStatsDic;
        }

        public override Dictionary<string, QNRemoteAudioTrackStats> GetRemoteAudioTrackStats()
        {
            if (IntPtr.Zero == nativeInstance) return new Dictionary<string, QNRemoteAudioTrackStats>();

            QNRemoteAudioTrackStatsListPInvoke remoteAudioTrackStatsListPInvoke = new QNRemoteAudioTrackStatsListPInvoke();
            QNRTCClientNative.QNRTCClientGetRemoteAudioTrackStats(nativeInstance, ref remoteAudioTrackStatsListPInvoke);

            Dictionary<string, QNRemoteAudioTrackStats> remoteAudioTrackStatsDic = new Dictionary<string, QNRemoteAudioTrackStats>();
            for (int i = 0; i < remoteAudioTrackStatsListPInvoke.Count; i++)
            {
                QNRemoteAudioTrackStatsPInvoke remoteAudioTrackStatsPInvoke = remoteAudioTrackStatsListPInvoke.RemoteAudioTrackStatsList[i];
                string trackId = remoteAudioTrackStatsPInvoke.TrackId.Clone() as string;

                QNRemoteAudioTrackStats remoteAudioTrackStats = new QNRemoteAudioTrackStats();
                remoteAudioTrackStats.DownlinkBitrate = remoteAudioTrackStatsPInvoke.DownlinkBitrate;
                remoteAudioTrackStats.DownlinkLostrate = remoteAudioTrackStatsPInvoke.DownlinkLostrate;
                remoteAudioTrackStats.UplinkRtt = remoteAudioTrackStatsPInvoke.UplinkRtt;
                remoteAudioTrackStats.UplinkLostrate = remoteAudioTrackStatsPInvoke.UplinkLostrate;

                remoteAudioTrackStatsDic.Add(trackId, remoteAudioTrackStats);
            }

            return remoteAudioTrackStatsDic;
        }

        public override Dictionary<string, QNNetworkQuality> GetUserNetworkQuality()
        {
            if (IntPtr.Zero == nativeInstance) return new Dictionary<string, QNNetworkQuality>();

            QNNetworkQualityListPInvoke qualityListPInvoke = new QNNetworkQualityListPInvoke();
            QNRTCClientNative.QNRTCClientGetUserNetworkQuality(nativeInstance, ref qualityListPInvoke);

            Dictionary<string, QNNetworkQuality> qualityList = new Dictionary<string, QNNetworkQuality>();
            for (int i = 0; i < qualityListPInvoke.Count; i++)
            {
                QNNetworkQualityPInvoke qualityPInvoke = qualityListPInvoke.QualityList[i];
                string trackId = qualityPInvoke.UserId.Clone() as string;

                QNNetworkQuality quality = new QNNetworkQuality();
                quality.UplinkNetworkGrade = (QNNetworkGrade)qualityPInvoke.UplinkNetworkGrade;
                quality.DownlinkNetworkGrade = (QNNetworkGrade)qualityPInvoke.DownlinkNetworkGrade;

                qualityList.Add(trackId, quality);
            }

            return qualityList;
        }

        public override void AddNetworkQualityListener(QNNetworkQualityListener listener)
        {
            networkQualityListeners.Add(listener);
        }

        public override void RemoveNetworkQualityListener(QNNetworkQualityListener listener)
        {
            if (networkQualityListeners.Contains(listener))
            {
                networkQualityListeners.Remove(listener);
            }
        }
        #endregion

        #region Callback
        [MonoPInvokeCallback(typeof(QNRTCClientOnConnectionStateChanged))]
        public static void OnConnectionStateChanged(int state, IntPtr infoPtr)
        {
            if (IntPtr.Zero == infoPtr)
            {
                if (null != QNRTCEventQueue.EventGameObject && null != QNRTCEventQueue.EventQueueObject)
                {
                    QNRTCEventQueue.EventQueueObject.Enqueue(() =>
                    {
                        List<QNRTCClientEventListener> listeners = new List<QNRTCClientEventListener>(sInstance.clientEventListeners);
                        foreach (QNRTCClientEventListener listener in listeners)
                        {
                            listener.OnConnectionStateChanged((QNConnectionState)state, null);
                        }
                    });
                }
            }
            else
            {
                QNConnectionDisconnectedInfoPInvoke infoPInvoke = Marshal.PtrToStructure<QNConnectionDisconnectedInfoPInvoke>(infoPtr);
                QNConnectionDisconnectedInfo info = new QNConnectionDisconnectedInfo();
                info.Reason = (QNDisconnectReason)infoPInvoke.Reason;
                info.ErrorCode = (int)infoPInvoke.ErrorCode;
                info.ErrorMessage = infoPInvoke.ErrorMessage.Clone() as string;

                if (null != QNRTCEventQueue.EventGameObject && null != QNRTCEventQueue.EventQueueObject)
                {
                    QNRTCEventQueue.EventQueueObject.Enqueue(() =>
                    {
                        List<QNRTCClientEventListener> listeners = new List<QNRTCClientEventListener>(sInstance.clientEventListeners);
                        foreach (QNRTCClientEventListener listener in listeners)
                        {
                            listener.OnConnectionStateChanged((QNConnectionState)state, info);
                        }
                    });
                }
            }            
        }

        [MonoPInvokeCallback(typeof(QNRTCClientOnUserJoined))]
        public static void OnUserJoined(string remoteUserId, string userData)
        {
            string currentRemoteUserId = remoteUserId.Clone() as string;
            string currentUserData = userData.Clone() as string;
            if (null != QNRTCEventQueue.EventGameObject && null != QNRTCEventQueue.EventQueueObject)
            {
                QNRTCEventQueue.EventQueueObject.Enqueue(() =>
                {
                    List<QNRTCClientEventListener> listeners = new List<QNRTCClientEventListener>(sInstance.clientEventListeners);
                    foreach (QNRTCClientEventListener listener in listeners)
                    {
                        listener.OnUserJoined(currentRemoteUserId, currentUserData);
                    }
                });
            }
        }

        [MonoPInvokeCallback(typeof(QNRTCClientOnUserLeft))]
        public static void OnUserLeft(string remoteUserId)
        {
            string currentRemoteUserId = remoteUserId.Clone() as string;
            if (null != QNRTCEventQueue.EventGameObject && null != QNRTCEventQueue.EventQueueObject)
            {
                QNRTCEventQueue.EventQueueObject.Enqueue(() =>
                {
                    List<QNRTCClientEventListener> listeners = new List<QNRTCClientEventListener>(sInstance.clientEventListeners);
                    foreach (QNRTCClientEventListener listener in listeners)
                    {
                        listener.OnUserLeft(currentRemoteUserId);
                    }
                });
            }
        }

        [MonoPInvokeCallback(typeof(QNRTCClientOnUserReconnecting))]
        public static void OnUserReconnecting(string remoteUserId)
        {
            string currentRemoteUserId = remoteUserId.Clone() as string;
            if (null != QNRTCEventQueue.EventGameObject && null != QNRTCEventQueue.EventQueueObject)
            {
                QNRTCEventQueue.EventQueueObject.Enqueue(() =>
                {
                    List<QNRTCClientEventListener> listeners = new List<QNRTCClientEventListener>(sInstance.clientEventListeners);
                    foreach (QNRTCClientEventListener listener in listeners)
                    {
                        listener.OnUserReconnecting(currentRemoteUserId);
                    }
                });
            }
        }

        [MonoPInvokeCallback(typeof(QNRTCClientOnUserReconnected))]
        public static void OnUserReconnected(string remoteUserId)
        {
            string currentRemoteUserId = remoteUserId.Clone() as string;
            if (null != QNRTCEventQueue.EventGameObject && null != QNRTCEventQueue.EventQueueObject)
            {
                QNRTCEventQueue.EventQueueObject.Enqueue(() =>
                {
                    List<QNRTCClientEventListener> listeners = new List<QNRTCClientEventListener>(sInstance.clientEventListeners);
                    foreach (QNRTCClientEventListener listener in listeners)
                    {
                        listener.OnUserReconnected(currentRemoteUserId);
                    }
                });
            }
        }

        [MonoPInvokeCallback(typeof(QNRTCClientOnUserPublished))]
        public static void OnUserPublished(string remoteUserId, ref QNRemoteTrackListPInvoke remoteTrackListPInvoke)
        {
            Console.WriteLine("Impl OnUserPublished trackCount: " + remoteTrackListPInvoke.Count);
            string currentRemoteUserId = remoteUserId.Clone() as string;
            QNRTCClientImpl shareClientImpl = QNRTCClientImpl.GetShareInstance();
            List<QNRemoteTrack> remoteTrackList = new List<QNRemoteTrack>();
            for (int i = 0; i < remoteTrackListPInvoke.Count; i++)
            {
                Console.WriteLine("Impl OnUserPublished remoteTrackPtr: " + remoteTrackListPInvoke.TrackList[i]);
                QNRemoteAudioTrackImpl remoteAudioTrackImpl = new QNRemoteAudioTrackImpl(remoteTrackListPInvoke.TrackList[i]);
                QNRTCTrackNative.QNRTCTrackSetAudioFrameListenerEnabled(remoteAudioTrackImpl.nativeInstance, true, false, QNRemoteAudioTrackImpl.OnAudioFrame);
                QNRTCTrackNative.QNRTCTrackSetTrackInfoChangedListenerEnabled(remoteAudioTrackImpl.nativeInstance, true, QNRemoteTrackImpl.OnMuteStateChanged);
                shareClientImpl.remoteTracks.Add(remoteAudioTrackImpl);
                remoteTrackList.Add(remoteAudioTrackImpl);
            }

            if (null != QNRTCEventQueue.EventGameObject && null != QNRTCEventQueue.EventQueueObject)
            {
                QNRTCEventQueue.EventQueueObject.Enqueue(() =>
                {
                    List<QNRTCClientEventListener> listeners = new List<QNRTCClientEventListener>(sInstance.clientEventListeners);
                    foreach (QNRTCClientEventListener listener in listeners)
                    {
                        listener.OnUserPublished(currentRemoteUserId, remoteTrackList);
                    }
                });
            }
        }

        [MonoPInvokeCallback(typeof(QNRTCClientOnUserUnpublished))]
        public static void OnUserUnpublished(string remoteUserId, ref QNRemoteTrackListPInvoke remoteTrackListPInvoke)
        {
            Console.WriteLine("Impl OnUserUnpublished trackCount: " + remoteTrackListPInvoke.Count);
            string currentRemoteUserId = remoteUserId.Clone() as string;
            QNRTCClientImpl shareClientImpl = QNRTCClientImpl.GetShareInstance();
            List<QNRemoteTrack> remoteTrackList = new List<QNRemoteTrack>();
            for (int i = 0; i < remoteTrackListPInvoke.Count; i++)
            {
                foreach (QNRemoteTrack remoteTrack in shareClientImpl.remoteTracks)
                {
                    Console.WriteLine("Impl OnUserUnpublished remoteTrackPtr in local list: " + remoteTrackListPInvoke.TrackList[i]);
                    QNRemoteAudioTrackImpl remoteAudioTrackImpl = remoteTrack as QNRemoteAudioTrackImpl;
                    Console.WriteLine("Impl OnUserUnpublished remoteTrackImpl in callback: " + remoteAudioTrackImpl.nativeInstance);
                    if (null != remoteAudioTrackImpl && remoteAudioTrackImpl.nativeInstance == remoteTrackListPInvoke.TrackList[i])
                    {
                        QNRTCTrackNative.QNRTCTrackSetAudioFrameListenerEnabled(remoteAudioTrackImpl.nativeInstance, false, false, QNRemoteAudioTrackImpl.OnAudioFrame);
                        QNRTCTrackNative.QNRTCTrackSetTrackInfoChangedListenerEnabled(remoteAudioTrackImpl.nativeInstance, false, QNRemoteTrackImpl.OnMuteStateChanged);
                        remoteAudioTrackImpl.nativeInstance = IntPtr.Zero;
                        remoteTrackList.Add(remoteAudioTrackImpl);
                        break;
                    }
                }
            }

            if (null != QNRTCEventQueue.EventGameObject && null != QNRTCEventQueue.EventQueueObject)
            {
                QNRTCEventQueue.EventQueueObject.Enqueue(() =>
                {
                    List<QNRTCClientEventListener> listeners = new List<QNRTCClientEventListener>(sInstance.clientEventListeners);
                    foreach (QNRTCClientEventListener listener in listeners)
                    {
                        listener.OnUserUnpublished(currentRemoteUserId, remoteTrackList);
                    }
                });
            }
        }

        [MonoPInvokeCallback(typeof(QNRTCClientOnSubscribed))]
        public static void OnSubscribed(string remoteUserId, ref QNRemoteTrackListPInvoke remoteAudioTrackListPInvoke)
        {
            Console.WriteLine("Impl OnSubscribed remoteAudioTrackCount: " + remoteAudioTrackListPInvoke.Count);
            string currentRemoteUserId = remoteUserId.Clone() as string;
            QNRTCClientImpl shareClientImpl = QNRTCClientImpl.GetShareInstance();
            List<QNRemoteAudioTrack> remoteAudioTrackList = new List<QNRemoteAudioTrack>();
            for (int i = 0; i < remoteAudioTrackListPInvoke.Count; i++)
            {
                foreach (QNRemoteTrack remoteTrack in shareClientImpl.remoteTracks)
                {
                    Console.WriteLine("Impl OnSubscribed remoteTrackPtr in local list: " + remoteAudioTrackListPInvoke.TrackList[i]);
                    QNRemoteTrackImpl remoteTrackImpl = remoteTrack as QNRemoteTrackImpl;
                    Console.WriteLine("Impl OnSubscribed remoteTrackImpl in callback: " + remoteTrackImpl.nativeInstance);
                    if (null != remoteTrackImpl && remoteTrackImpl.nativeInstance == remoteAudioTrackListPInvoke.TrackList[i])
                    {
                        QNRemoteAudioTrackImpl remoteAudioTrackImpl = remoteTrackImpl as QNRemoteAudioTrackImpl;
                        if (null != remoteAudioTrackImpl)
                        {
                            remoteAudioTrackList.Add(remoteAudioTrackImpl);
                            break;
                        }
                    }
                }
            }

            if (null != QNRTCEventQueue.EventGameObject && null != QNRTCEventQueue.EventQueueObject)
            {
                QNRTCEventQueue.EventQueueObject.Enqueue(() =>
                {
                    List<QNRTCClientEventListener> listeners = new List<QNRTCClientEventListener>(sInstance.clientEventListeners);
                    foreach (QNRTCClientEventListener listener in listeners)
                    {
                        listener.OnSubscribed(currentRemoteUserId, remoteAudioTrackList);
                    }
                });
            }
        }

        [MonoPInvokeCallback(typeof(QNRTCClientOnMessageReceived))]
        public static void OnMessageReceived(ref QNCustomMessagePInvoke messagePInvoke)
        {
            QNCustomMessage message = new QNCustomMessage();
            message.msgId = messagePInvoke.MsgId.Clone() as string;
            message.msgSendId = messagePInvoke.MsgSendId.Clone() as string;
            message.msgText = messagePInvoke.MsgText.Clone() as string;
            message.msgTimestamp = messagePInvoke.MsgTimestamp;

            if (null != QNRTCEventQueue.EventGameObject && null != QNRTCEventQueue.EventQueueObject)
            {
                QNRTCEventQueue.EventQueueObject.Enqueue(() =>
                {
                    List<QNRTCClientEventListener> listeners = new List<QNRTCClientEventListener>(sInstance.clientEventListeners);
                    foreach (QNRTCClientEventListener listener in listeners)
                    {
                        listener.OnMessageReceived(message);
                    }
                });
            }
        }

        [MonoPInvokeCallback(typeof(QNRTCClientOnMediaRelayStateChanged))]
        public static void OnMediaRelayStateChanged(string relayRoom, int state)
        {
            string currentRelayRoom = relayRoom.Clone() as string;
            if (null != QNRTCEventQueue.EventGameObject && null != QNRTCEventQueue.EventQueueObject)
            {
                QNRTCEventQueue.EventQueueObject.Enqueue(() =>
                {
                    List<QNRTCClientEventListener> listeners = new List<QNRTCClientEventListener>(sInstance.clientEventListeners);
                    foreach (QNRTCClientEventListener listener in listeners)
                    {
                        listener.OnMediaRelayStateChanged(currentRelayRoom, (QNMediaRelayState)state);
                    }
                });
            }
        }

        [MonoPInvokeCallback(typeof(QNRTCClientOnClientRoleResult))]
        public static void OnClientRoleResult(int newRole)
        {
            if (null != QNRTCEventQueue.EventGameObject && null != QNRTCEventQueue.EventQueueObject)
            {
                QNRTCEventQueue.EventQueueObject.Enqueue(() =>
                {
                    List<QNRTCClientRoleEventListener> listeners = new List<QNRTCClientRoleEventListener>(sInstance.clientRoleEventListeners);
                    foreach (QNRTCClientRoleEventListener listener in listeners)
                    {
                        listener.OnClientRoleResult((QNClientRole)newRole);
                    }
                });
            }
        }

        [MonoPInvokeCallback(typeof(QNRTCClientOnClientRoleError))]
        public static void OnClientRoleError(int errorCode, string errorMessage)
        {
            string currentErrorMessage = errorMessage.Clone() as string;
            if (null != QNRTCEventQueue.EventGameObject && null != QNRTCEventQueue.EventQueueObject)
            {
                QNRTCEventQueue.EventQueueObject.Enqueue(() =>
                {
                    List<QNRTCClientRoleEventListener> listeners = new List<QNRTCClientRoleEventListener>(sInstance.clientRoleEventListeners);
                    foreach (QNRTCClientRoleEventListener listener in listeners)
                    {
                        listener.OnClientRoleError(errorCode, currentErrorMessage);
                    }
                });
            }
        }

        [MonoPInvokeCallback(typeof(QNRTCClientOnMediaRelayResult))]
        public static void OnMediaRelayResult(ref QNMediaRelayResultListPInvoke resultListPInvoke)
        {
            Dictionary<string, QNMediaRelayState> result = new Dictionary<string, QNMediaRelayState>();
            for (int i = 0; i < resultListPInvoke.Count; i++)
            {
                QNMediaRelayResultPInvoke resultPInvoke = resultListPInvoke.MediaInfoResultList[i];
                string roomName = resultPInvoke.RoomName.Clone() as string;
                result.Add(roomName, (QNMediaRelayState)resultPInvoke.State);
            }

            if (null != QNRTCEventQueue.EventGameObject && null != QNRTCEventQueue.EventQueueObject)
            {
                QNRTCEventQueue.EventQueueObject.Enqueue(() =>
                {
                    List<QNMediaRelayListener> listeners = new List<QNMediaRelayListener>(sInstance.mediaRelayListeners);
                    foreach (QNMediaRelayListener listener in listeners)
                    {
                        listener.OnMediaRelayResult(result);
                    }
                });
            }
        }

        [MonoPInvokeCallback(typeof(QNRTCClientOnMediaRelayError))]
        public static void OnMediaRelayError(int errorCode, string errorMessage)
        {
            string currentErrorMessage = errorMessage.Clone() as string;
            if (null != QNRTCEventQueue.EventGameObject && null != QNRTCEventQueue.EventQueueObject)
            {
                QNRTCEventQueue.EventQueueObject.Enqueue(() =>
                {
                    List<QNMediaRelayListener> listeners = new List<QNMediaRelayListener>(sInstance.mediaRelayListeners);
                    foreach (QNMediaRelayListener listener in listeners)
                    {
                        listener.OnMediaRelayError(errorCode, currentErrorMessage);
                    }
                });
            }
        }

        [MonoPInvokeCallback(typeof(QNRTCClientOnPublished))]
        public static void OnPublished()
        {
            if (null != QNRTCEventQueue.EventGameObject && null != QNRTCEventQueue.EventQueueObject)
            {
                QNRTCEventQueue.EventQueueObject.Enqueue(() =>
                {
                    List<QNPublishResultListener> listeners = new List<QNPublishResultListener>(sInstance.publishResultListeners);
                    foreach (QNPublishResultListener listener in listeners)
                    {
                        listener.OnPublished();
                    }
                });
            }
        }

        [MonoPInvokeCallback(typeof(QNRTCClientOnPublishError))]
        public static void OnPublishError(int errorCode, string errorMessage)
        {
            string currentErrorMessage = errorMessage.Clone() as string;
            if (null != QNRTCEventQueue.EventGameObject && null != QNRTCEventQueue.EventQueueObject)
            {
                QNRTCEventQueue.EventQueueObject.Enqueue(() =>
                {
                    List<QNPublishResultListener> listeners = new List<QNPublishResultListener>(sInstance.publishResultListeners);
                    foreach (QNPublishResultListener listener in listeners)
                    {
                        listener.OnPublishError(errorCode, currentErrorMessage);
                    }
                });
            }
        }

        [MonoPInvokeCallback(typeof(QNLiveStreamingOnStarted))]
        public static void OnLiveStreamingStarted(string streamId)
        {
            string currentStreamId = streamId.Clone() as string;
            if (null != QNRTCEventQueue.EventGameObject && null != QNRTCEventQueue.EventQueueObject)
            {
                QNRTCEventQueue.EventQueueObject.Enqueue(() =>
                {
                    List<QNLiveStreamingListener> listeners = new List<QNLiveStreamingListener>(sInstance.liveStreamingListeners);
                    foreach (QNLiveStreamingListener listener in listeners)
                    {
                        listener.OnStarted(currentStreamId);
                    }
                });
            }
        }

        [MonoPInvokeCallback(typeof(QNLiveStreamingOnStopped))]
        public static void OnLiveStreamingStopped(string streamId)
        {
            string currentStreamId = streamId.Clone() as string;
            if (null != QNRTCEventQueue.EventGameObject && null != QNRTCEventQueue.EventQueueObject)
            {
                QNRTCEventQueue.EventQueueObject.Enqueue(() =>
                {
                    List<QNLiveStreamingListener> listeners = new List<QNLiveStreamingListener>(sInstance.liveStreamingListeners);
                    foreach (QNLiveStreamingListener listener in listeners)
                    {
                        listener.OnStoped(currentStreamId);
                    }
                });
            }
        }

        [MonoPInvokeCallback(typeof(QNLiveStreamingOnTranscodingTracksUpdated))]
        public static void OnLiveStreamingTranscodingTracksUpdated(string streamId)
        {
            string currentStreamId = streamId.Clone() as string;
            if (null != QNRTCEventQueue.EventGameObject && null != QNRTCEventQueue.EventQueueObject)
            {
                QNRTCEventQueue.EventQueueObject.Enqueue(() =>
                {
                    List<QNLiveStreamingListener> listeners = new List<QNLiveStreamingListener>(sInstance.liveStreamingListeners);
                    foreach (QNLiveStreamingListener listener in listeners)
                    {
                        listener.OnTranscodingTracksUpdated(currentStreamId);
                    }
                });
            }
        }

        [MonoPInvokeCallback(typeof(QNLiveStreamingOnError))]
        public static void OnLiveStreamingOnError(string streamId, ref QNLiveStreamingErrorInfoPInvoke info_p_invoke)
        {
            string currentStreamId = streamId.Clone() as string;
            QNLiveStreamingErrorInfo info = new QNLiveStreamingErrorInfo();
            info.Type = (QNLiveStreamingErrorType)info_p_invoke.Type;
            info.Code = info_p_invoke.Code;
            info.Message = info_p_invoke.Message.Clone() as string;

            if (null != QNRTCEventQueue.EventGameObject && null != QNRTCEventQueue.EventQueueObject)
            {
                QNRTCEventQueue.EventQueueObject.Enqueue(() =>
                {
                    List<QNLiveStreamingListener> listeners = new List<QNLiveStreamingListener>(sInstance.liveStreamingListeners);
                    foreach (QNLiveStreamingListener listener in listeners)
                    {
                        listener.OnLiveStreamingError(currentStreamId, info);
                    }
                });
            }
        }

        [MonoPInvokeCallback(typeof(QNRTCClientOnRemoteAudioMixedFrame))]
        public static void OnRemoteAudioMixedFrame(IntPtr dataPtr, uint dataSize, uint bitsPerSample, uint sampleRate, uint channels)
        {
            byte[] data = new byte[dataSize];
            Marshal.Copy(dataPtr, data, 0, (int)dataSize);

            List<QNRemoteAudioMixedFrameListener> listeners = new List<QNRemoteAudioMixedFrameListener>(sInstance.remoteAudioMixedFrameListeners);
            foreach (QNRemoteAudioMixedFrameListener listener in listeners)
            {
                listener.OnRemoteAudioMixedFrame(data, dataSize, bitsPerSample, sampleRate, channels);
            }
        }

        [MonoPInvokeCallback(typeof(QNRTCClientOnNetworkQualityNotified))]
        public static void OnNetworkQualityNotified(IntPtr qualityPtr)
        {
            QNNetworkQualityPInvoke qualityPInvoke = Marshal.PtrToStructure<QNNetworkQualityPInvoke>(qualityPtr);
            QNNetworkQuality quality = new QNNetworkQuality();
            quality.UplinkNetworkGrade = (QNNetworkGrade)qualityPInvoke.UplinkNetworkGrade;
            quality.DownlinkNetworkGrade = (QNNetworkGrade)qualityPInvoke.DownlinkNetworkGrade;

            if (null != QNRTCEventQueue.EventGameObject && null != QNRTCEventQueue.EventQueueObject)
            {
                QNRTCEventQueue.EventQueueObject.Enqueue(() =>
                {
                    List<QNNetworkQualityListener> listeners = new List<QNNetworkQualityListener>(sInstance.networkQualityListeners);
                    foreach (QNNetworkQualityListener listener in listeners)
                    {
                        listener.OnNetworkQualityNotified(quality);
                    }
                });
            }
        }
        #endregion
    }
}
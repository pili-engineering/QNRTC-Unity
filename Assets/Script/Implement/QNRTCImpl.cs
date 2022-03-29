using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using AOT;

namespace qnrtc
{
    public abstract class QNRTCImpl
    {
        private static List<QNRTCEventListener> eventListeners = new List<QNRTCEventListener>();

        public static List<QNLocalTrack> LocalTrackList = new List<QNLocalTrack>();

        #region Implement
        public static string GetVersion()
        {
            string version = Marshal.PtrToStringAnsi(QNRTCNative.QNRTCGetVersion());
            return version.Clone() as string;
        }

        public static int SetLogFile(QNLogLevel level, string dirName, string fileName)
        {
            return QNRTCNative.QNRTCSetLogFile((int)level, dirName, fileName);
        }

        public static void Init(QNRTCSetting setting)
        {
            QNRTCSettingPInvoke settingPInvoke = new QNRTCSettingPInvoke();
            settingPInvoke.Policy = (int)setting.Policy;
            settingPInvoke.IsAec3Enabled = setting.IsAec3Enabled;
            settingPInvoke.IsAudioRedundantEnabled = setting.IsAudioRedundantEnabled;

            QNRTCEventQueue.CreateEventQueueObject();
            QNRTCNative.QNRTCInit(ref settingPInvoke, OnAudioRouteChanged);
        }

        public static void DeInit()
        {
            QNRTCEventQueue.DestroyEventQueueObject();
            eventListeners.RemoveAll(item => true);

            DestroyClient();

            for (int i = 0; i < LocalTrackList.Count; i++)
            {
                DestroyLocalTrack(LocalTrackList[i]);
            }

            QNRTCNative.QNRTCDeInit();
        }

        public static QNRTCClient GetClient()
        {
            QNRTCClientImpl shareClientImpl = QNRTCClientImpl.GetShareInstance();
            if (null == shareClientImpl)
            {
                IntPtr nativeInstance = QNRTCNative.QNRTCCreateClient(
                    QNRTCClientImpl.OnConnectionStateChanged,
                    QNRTCClientImpl.OnUserJoined,
                    QNRTCClientImpl.OnUserLeft,
                    QNRTCClientImpl.OnUserReconnecting,
                    QNRTCClientImpl.OnUserReconnected,
                    QNRTCClientImpl.OnUserPublished,
                    QNRTCClientImpl.OnUserUnpublished,
                    QNRTCClientImpl.OnSubscribed,
                    QNRTCClientImpl.OnMessageReceived,
                    QNRTCClientImpl.OnMediaRelayStateChanged);
                if (IntPtr.Zero == nativeInstance) return null;

                QNRTCClientNative.QNRTCClientSetLiveStreamingListener(
                    nativeInstance,
                    QNRTCClientImpl.OnLiveStreamingStarted,
                    QNRTCClientImpl.OnLiveStreamingStopped,
                    QNRTCClientImpl.OnLiveStreamingTranscodingTracksUpdated,
                    QNRTCClientImpl.OnLiveStreamingOnError);

                QNRTCClientNative.QNRTCClientSetRemoteAudioMixedFrameListener(
                    nativeInstance,
                    QNRTCClientImpl.OnRemoteAudioMixedFrame);

                QNRTCClientNative.QNRTCClientSetNetworkQualityListener(
                    nativeInstance,
                    QNRTCClientImpl.OnNetworkQualityNotified);

                QNRTCClientNative.QNRTCClientSetAutoSubscribe(nativeInstance, false);

                return QNRTCClientImpl.InitShareInstance(nativeInstance);
            }
            else
            {
                return shareClientImpl;
            }
        }

        public static QNRTCClient GetClient(QNRTCClientConfig config)
        {
            QNRTCClientImpl shareClientImpl = QNRTCClientImpl.GetShareInstance();
            if (null == shareClientImpl)
            {
                QNRTCClientConfigPInvoke clientConfigPInvoke = new QNRTCClientConfigPInvoke();
                clientConfigPInvoke.Mode = (int)config.Mode;
                clientConfigPInvoke.Role = (int)config.Role;

                IntPtr nativeInstance = QNRTCNative.QNRTCCreateClientWithConfig(
                    ref clientConfigPInvoke,
                    QNRTCClientImpl.OnConnectionStateChanged,
                    QNRTCClientImpl.OnUserJoined,
                    QNRTCClientImpl.OnUserLeft,
                    QNRTCClientImpl.OnUserReconnecting,
                    QNRTCClientImpl.OnUserReconnected,
                    QNRTCClientImpl.OnUserPublished,
                    QNRTCClientImpl.OnUserUnpublished,
                    QNRTCClientImpl.OnSubscribed,
                    QNRTCClientImpl.OnMessageReceived,
                    QNRTCClientImpl.OnMediaRelayStateChanged);
                if (IntPtr.Zero == nativeInstance) return null;

                QNRTCClientNative.QNRTCClientSetLiveStreamingListener(
                    nativeInstance,
                    QNRTCClientImpl.OnLiveStreamingStarted,
                    QNRTCClientImpl.OnLiveStreamingStopped,
                    QNRTCClientImpl.OnLiveStreamingTranscodingTracksUpdated,
                    QNRTCClientImpl.OnLiveStreamingOnError);

                QNRTCClientNative.QNRTCClientSetRemoteAudioMixedFrameListener(
                    nativeInstance,
                    QNRTCClientImpl.OnRemoteAudioMixedFrame);

                QNRTCClientNative.QNRTCClientSetNetworkQualityListener(
                    nativeInstance,
                    QNRTCClientImpl.OnNetworkQualityNotified);

                QNRTCClientNative.QNRTCClientSetAutoSubscribe(nativeInstance, false);

                return QNRTCClientImpl.InitShareInstance(nativeInstance);
            }
            else
            {
                return shareClientImpl;
            }
        }

        public static void DestroyClient()
        {
            QNRTCClientImpl shareClientImpl = QNRTCClientImpl.GetShareInstance();
            if (shareClientImpl != null)
            {
                if (shareClientImpl.nativeInstance != IntPtr.Zero)
                {
                    QNRTCNative.QNRTCDestroyClient(shareClientImpl.nativeInstance);
                }
                QNRTCClientImpl.DeInitShareInstance();
            }
        }

        public static QNMicrophoneAudioTrack CreateMicrophoneAudioTrack(QNMicrophoneAudioTrackConfig config)
        {
            QNMicrophoneAudioTrackConfigPInvoke microphoneAudioTrackConfigPInvoke = new QNMicrophoneAudioTrackConfigPInvoke();
            microphoneAudioTrackConfigPInvoke.AudioQuality.SampleRate = config.AudioQuality.SampleRate;
            microphoneAudioTrackConfigPInvoke.AudioQuality.ChannelCount = config.AudioQuality.ChannelCount;
            microphoneAudioTrackConfigPInvoke.AudioQuality.BitsPerSample = config.AudioQuality.BitsPerSample;
            microphoneAudioTrackConfigPInvoke.AudioQuality.Bitrate = config.AudioQuality.Bitrate;
            microphoneAudioTrackConfigPInvoke.Tag = config.Tag;

            IntPtr nativeInstance = QNRTCNative.QNRTCCreateMicrophoneAudioTrack(ref microphoneAudioTrackConfigPInvoke);
            if (IntPtr.Zero == nativeInstance) return null;

            QNMicrophoneAudioTrackImpl microphoneAudioTrackImpl = new QNMicrophoneAudioTrackImpl(nativeInstance);
            QNRTCTrackNative.QNRTCTrackSetAudioFrameListenerEnabled(microphoneAudioTrackImpl.nativeInstance, true, true, QNLocalAudioTrackImpl.OnAudioFrame);
            LocalTrackList.Add(microphoneAudioTrackImpl);
            return microphoneAudioTrackImpl;
        }

        public static QNCustomAudioTrack CreateCustomAudioTrack(QNCustomAudioTrackConfig config)
        {
            QNCustomAudioTrackConfigPInvoke customAudioTrackConfigPInvoke = new QNCustomAudioTrackConfigPInvoke();
            customAudioTrackConfigPInvoke.AudioQuality.SampleRate = config.AudioQuality.SampleRate;
            customAudioTrackConfigPInvoke.AudioQuality.ChannelCount = config.AudioQuality.ChannelCount;
            customAudioTrackConfigPInvoke.AudioQuality.BitsPerSample = config.AudioQuality.BitsPerSample;
            customAudioTrackConfigPInvoke.AudioQuality.Bitrate = config.AudioQuality.Bitrate;
            customAudioTrackConfigPInvoke.Tag = config.Tag;

            IntPtr nativeInstance = QNRTCNative.QNRTCCreateCustomAudioTrack(ref customAudioTrackConfigPInvoke);
            if (IntPtr.Zero == nativeInstance) return null;

            QNCustomAudioTrackImpl customAudioTrackImpl = new QNCustomAudioTrackImpl(nativeInstance);
            QNRTCTrackNative.QNRTCTrackSetAudioFrameListenerEnabled(customAudioTrackImpl.nativeInstance, true, true, QNLocalAudioTrackImpl.OnAudioFrame);
            LocalTrackList.Add(customAudioTrackImpl);
            return customAudioTrackImpl;
        }

        public static void DestroyLocalTrack(QNLocalTrack localTrack)
        {
            if (null == localTrack) return;

            QNLocalTrackImpl localTrackImpl = localTrack as QNLocalTrackImpl;
            if (null == localTrackImpl || IntPtr.Zero == localTrackImpl.nativeInstance) return;

            QNRTCTrackNative.QNRTCTrackSetAudioFrameListenerEnabled(localTrackImpl.nativeInstance, false, true, QNLocalAudioTrackImpl.OnAudioFrame);
            QNRTCNative.QNRTCDestroyLocalTrack(localTrackImpl.nativeInstance);
            localTrackImpl.nativeInstance = IntPtr.Zero;

            if (LocalTrackList.Contains(localTrack))
            {
                LocalTrackList.Remove(localTrack);
            }
        }

        public static void SetAudioRouteToSpeakerphone(bool audioRouteToSpeakphone)
        {
            QNRTCNative.QNRTCSetAudioRouteToSpeakerphone(audioRouteToSpeakphone);
        }

        public static void SetAudioPlayMute(bool muted)
        {
            QNRTCNative.QNRTCSetAudioPlayMute(muted);
        }

        public static bool IsAudioPlayMute()
        {
            return QNRTCNative.QNRTCIsAudioPlayMute();
        }

        public static void AddEventListener(QNRTCEventListener listener)
        {
            eventListeners.Add(listener);
        }

        public static void RemoveEventListener(QNRTCEventListener listener)
        {
            if (eventListeners.Contains(listener))
            {
                eventListeners.Remove(listener);
            }
        }
        #endregion

        #region Callback
        [MonoPInvokeCallback(typeof(QNRTCOnAudioRouteChanged))]
        public static void OnAudioRouteChanged(int device)
        {
            if (null != QNRTCEventQueue.EventGameObject && null != QNRTCEventQueue.EventQueueObject)
            {
                QNRTCEventQueue.EventQueueObject.Enqueue(() =>
                {
                    List<QNRTCEventListener> listeners = new List<QNRTCEventListener>(eventListeners);
                    foreach (QNRTCEventListener listener in listeners)
                    {
                        listener.OnAudioRouteChanged((QNAudioDevice)device);
                    }
                });
            }
        }
        #endregion
    }
}
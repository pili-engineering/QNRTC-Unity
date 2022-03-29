using System.Runtime.InteropServices;
using System;

namespace qnrtc
{
    public class QNRTCClientNative
    {
        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern void QNRTCClientSetClientRole(IntPtr instance, int clientRole, QNRTCClientOnClientRoleResult onClientRoleResult, QNRTCClientOnClientRoleError onClientRoleError);

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern void QNRTCClientSetAutoSubscribe(IntPtr instance, bool autoSubscribe);

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern void QNRTCClientJoin(IntPtr instance, string token, string userData);

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern void QNRTCClientLeave(IntPtr instance);

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern void QNRTCClientPublish(IntPtr instance, ref QNLocalTrackListPInvoke publishTrackListPInvoke, QNRTCClientOnPublished onPublished, QNRTCClientOnPublishError onPublishError);

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern void QNRTCClientUnPublish(IntPtr instance, ref QNLocalTrackListPInvoke unpublishTrackListPInvoke);

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern void QNRTCClientSubscribe(IntPtr instance, ref QNRemoteTrackListPInvoke subscribeTrackListPInvoke);

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern void QNRTCClientUnSubscribe(IntPtr instance, ref QNRemoteTrackListPInvoke unsubscribeTrackListPInvoke);

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern void QNRTCClientSendMessage(IntPtr instance, ref QNSendMessagePInvoke sendMessagePInvoke);

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern void QNRTCClientSetLiveStreamingListener(IntPtr instance, QNLiveStreamingOnStarted onStarted, QNLiveStreamingOnStopped onStopped, QNLiveStreamingOnTranscodingTracksUpdated onTranscodingTracksUpdated,QNLiveStreamingOnError onError);
       
        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern void QNRTCClientStartDirectLiveStreaming(IntPtr instance, ref QNDirectLiveStreamingConfigPInvoke configPInvoke);

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern void QNRTCClientStopDirectLiveStreaming(IntPtr instance, ref QNDirectLiveStreamingConfigPInvoke configPInvoke);

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern void QNRTCClientStartTranscodingLiveStreaming(IntPtr instance, ref QNTranscodingLiveStreamingConfigPInvoke configPInvoke);

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern void QNRTCClientStopTranscodingLiveStreaming(IntPtr instance, ref QNTranscodingLiveStreamingConfigPInvoke configPInvoke);

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern void QNRTCClientSetTranscodingLiveStreamingTracks(IntPtr instance, string streamId, ref QNTranscodingLiveStreamingTrackListPInvoke transcodingTrackListPInvoke);

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern void QNRTCClientRemoveTranscodingLiveStreamingTracks(IntPtr instance, string streamId, ref QNTranscodingLiveStreamingTrackListPInvoke transcodingTrackListPInvoke);
        
        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern void QNRTCClientSetRemoteAudioMixedFrameListener(IntPtr instance, QNRTCClientOnRemoteAudioMixedFrame onRemoteAudioMixedFrame);

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern void QNRTCClientGetPublishedTracks(IntPtr instance, ref QNLocalTrackListPInvoke publishedTrackListPInvoke);

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern void QNRTCClientGetRemoteUser(IntPtr instance, string userId, ref QNRemoteUserPInvoke remoteUserPInvoke);

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern void QNRTCClientGetRemoteUserList(IntPtr instance, ref QNRemoteUserListPInvoke remoteUserListPInvoke);

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern void QNRTCClientGetLocalAudioTrackStats(IntPtr instance, ref QNLocalAudioTrackStatsListPInvoke localAudioTrackStatsListPInvoke);

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern void QNRTCClientGetRemoteAudioTrackStats(IntPtr instance, ref QNRemoteAudioTrackStatsListPInvoke remoteAudioTrackStatsListPInvoke);

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern void QNRTCClientSetNetworkQualityListener(IntPtr instance, QNRTCClientOnNetworkQualityNotified onNetworkQualityNotified);

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern void QNRTCClientGetUserNetworkQuality(IntPtr instance, ref QNNetworkQualityListPInvoke qualityListPInvoke);

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern void QNRTCClientStartMediaRelay(IntPtr instance, ref QNMediaRelayConfigurationPInvoke configurationPInvoke, QNRTCClientOnMediaRelayResult onMediaRelayResult, QNRTCClientOnMediaRelayError onMediaRelayError);

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern void QNRTCClientUpdateMediaRelay(IntPtr instance, ref QNMediaRelayConfigurationPInvoke configurationPInvoke, QNRTCClientOnMediaRelayResult onMediaRelayResult, QNRTCClientOnMediaRelayError onMediaRelayError);

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern void QNRTCClientStopMediaRelay(IntPtr instance, QNRTCClientOnMediaRelayResult onMediaRelayResult, QNRTCClientOnMediaRelayError onMediaRelayError);
    } 
}
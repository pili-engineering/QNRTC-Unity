using System.Runtime.InteropServices;
using System;
using AOT;

namespace qnrtc
{
    public class QNRTCNative
    {
        [DllImport(QNRTCPInvoke.MyLibName, SetLastError = true, CharSet = CharSet.Ansi)]
        public static extern IntPtr QNRTCGetVersion();

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern int QNRTCSetLogFile(int level, string dirName, string fileName);

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern void QNRTCInit(ref QNRTCSettingPInvoke settingPInvoke, QNRTCOnAudioRouteChanged onAudioRouteChanged);

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern void QNRTCDeInit();

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern IntPtr QNRTCCreateClient(
            QNRTCClientOnConnectionStateChanged onConnectionStateChanged,
            QNRTCClientOnUserJoined onUserJoined,
            QNRTCClientOnUserLeft onUserLeft,
            QNRTCClientOnUserReconnecting onUserReconnecting,
            QNRTCClientOnUserReconnected onUserReconnected,
            QNRTCClientOnUserPublished onUserPublished,
            QNRTCClientOnUserUnpublished onUserUnpublished,
            QNRTCClientOnSubscribed onSubscribed,
            QNRTCClientOnMessageReceived onMessageReceived,
            QNRTCClientOnMediaRelayStateChanged onMediaRelayStateChanged
        );

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern IntPtr QNRTCCreateClientWithConfig(
            ref QNRTCClientConfigPInvoke clientConfigPInvoke,
            QNRTCClientOnConnectionStateChanged onConnectionStateChanged,
            QNRTCClientOnUserJoined onUserJoined,
            QNRTCClientOnUserLeft onUserLeft,
            QNRTCClientOnUserReconnecting onUserReconnecting,
            QNRTCClientOnUserReconnected onUserReconnected,
            QNRTCClientOnUserPublished onUserPublished,
            QNRTCClientOnUserUnpublished onUserUnpublished,
            QNRTCClientOnSubscribed onSubscribed,
            QNRTCClientOnMessageReceived onMessageReceived,
            QNRTCClientOnMediaRelayStateChanged onMediaRelayStateChanged
        );

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern void QNRTCDestroyClient(IntPtr instance);

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern IntPtr QNRTCCreateMicrophoneAudioTrack(ref QNMicrophoneAudioTrackConfigPInvoke microphoneAudioTrackConfigPInvoke);

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern IntPtr QNRTCCreateCustomAudioTrack(ref QNCustomAudioTrackConfigPInvoke customAudioTrackConfigPInvoke);

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern void QNRTCDestroyLocalTrack(IntPtr instance);

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern void QNRTCSetAudioRouteToSpeakerphone(bool audioRouteToSpeakerphone);

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern void QNRTCSetAudioPlayMute(bool muted);

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern bool QNRTCIsAudioPlayMute();
    }
}
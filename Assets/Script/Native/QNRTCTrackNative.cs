using System.Runtime.InteropServices;
using System;

namespace qnrtc
{
    public class QNRTCTrackNative
    {
        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern IntPtr QNRTCTrackGetTrackID(IntPtr instance);

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern IntPtr QNRTCTrackGetUserID(IntPtr instance);

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern IntPtr QNRTCTrackGetTag(IntPtr instance);

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern bool QNRTCTrackIsMuted(IntPtr instance);

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern void QNRTCTrackSetMuted(IntPtr instance, bool muted);

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern void QNRTCTrackSetAudioFrameListenerEnabled(IntPtr instance, bool isEnabled, bool isLocal, QNRTCTrackOnAudioFrame onAudioFrame);

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern void QNRTCTrackSetVolume(IntPtr instance, bool isLocal, double volume);

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern float QNRTCTrackGetVolumeLevel(IntPtr instance, bool isLocal); 

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern int QNRTCTrackPushAudioFrame(IntPtr instance, IntPtr dataPtr, uint dataSize, uint bitsPerSample, uint sampleRate, uint channels);

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern void QNRTCTrackSetTrackInfoChangedListenerEnabled(IntPtr instance, bool isEnabled, QNRTCTrackOnMuteStateChanged onMuteStateChanged);

        [DllImport(QNRTCPInvoke.MyLibName, CharSet = CharSet.Ansi)]
        public static extern bool QNRTCTrackIsSubscribed(IntPtr instance);
    }
}
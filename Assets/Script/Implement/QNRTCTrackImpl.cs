using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using AOT;

namespace qnrtc {
    public class QNTrackImpl : QNTrack
    {
        public IntPtr nativeInstance = IntPtr.Zero;

        public QNTrackImpl(IntPtr nativeInstance)
        {
            this.nativeInstance = nativeInstance;
        }

        public string GetTrackID()
        {
            if (IntPtr.Zero == nativeInstance) return "";
            string trackId = Marshal.PtrToStringAnsi(QNRTCTrackNative.QNRTCTrackGetTrackID(nativeInstance));
            return trackId.Clone() as string;
        }

        public string GetUserID()
        {
            if (IntPtr.Zero == nativeInstance) return "";
            string userId = Marshal.PtrToStringAnsi(QNRTCTrackNative.QNRTCTrackGetUserID(nativeInstance));
            return userId.Clone() as string;
        }

        public string GetTag()
        {
            if (IntPtr.Zero == nativeInstance) return "";
            string tag = Marshal.PtrToStringAnsi(QNRTCTrackNative.QNRTCTrackGetTag(nativeInstance));
            return tag.Clone() as string;
        }

        public bool IsMuted()
        {
            if (IntPtr.Zero == nativeInstance) return false;
            return QNRTCTrackNative.QNRTCTrackIsMuted(nativeInstance);
        }
    }

    public class QNLocalTrackImpl : QNTrackImpl, QNLocalTrack
    {
        public QNLocalTrackImpl(IntPtr nativeInstance) : base(nativeInstance) { }

        public void SetMuted(bool muted) {
            if (IntPtr.Zero == nativeInstance) return;
            QNRTCTrackNative.QNRTCTrackSetMuted(nativeInstance, muted);
        }
    }

    public class QNLocalAudioTrackImpl : QNLocalTrackImpl, QNLocalAudioTrack
    {
        private List<QNAudioFrameListener> audioFrameListeners = new List<QNAudioFrameListener>();

        public QNLocalAudioTrackImpl(IntPtr nativeInstance) : base(nativeInstance) { }

        public void AddAudioFrameListener(QNAudioFrameListener listener) {
            audioFrameListeners.Add(listener);
        }

        public void RemoveAudioFrameListener(QNAudioFrameListener listener)
        {
            if (audioFrameListeners.Contains(listener))
            {
                audioFrameListeners.Remove(listener);
            }
        }

        public void SetVolume(double volume) {
            if (IntPtr.Zero == nativeInstance) return;
            QNRTCTrackNative.QNRTCTrackSetVolume(nativeInstance, true, volume);
        }

        public float GetVolumeLevel() {
            if (IntPtr.Zero == nativeInstance) return 0;
            return QNRTCTrackNative.QNRTCTrackGetVolumeLevel(nativeInstance, true);
        }

        [MonoPInvokeCallback(typeof(QNRTCTrackOnAudioFrame))]
        public static void OnAudioFrame(string userId, string trackId, IntPtr dataPtr, uint dataSize, uint bitsPerSample, uint sampleRate, uint channels)
        {
            string currentUserId = userId.Clone() as string;
            string currentTrackId = trackId.Clone() as string;
            byte[] data = new byte[dataSize];
            Marshal.Copy(dataPtr, data, 0, (int)dataSize);

            foreach (QNLocalTrackImpl localTrackImpl in QNRTCImpl.LocalTrackList)
            {
                QNLocalAudioTrackImpl localAudioTrackImpl = localTrackImpl as QNLocalAudioTrackImpl;
                if (null != localAudioTrackImpl)
                {
                    List<QNAudioFrameListener> listeners = new List<QNAudioFrameListener>(localAudioTrackImpl.audioFrameListeners);
                    foreach (QNAudioFrameListener listener in listeners)
                    {
                        listener.OnAudioFrame(currentUserId, currentTrackId, data, dataSize, bitsPerSample, sampleRate, channels);
                    }
                }
            }
        }
    }

    public class QNMicrophoneAudioTrackImpl : QNLocalAudioTrackImpl, QNMicrophoneAudioTrack
    {
        public QNMicrophoneAudioTrackImpl(IntPtr nativeInstance) : base(nativeInstance) { }
    }

    public class QNCustomAudioTrackImpl : QNLocalAudioTrackImpl, QNCustomAudioTrack
    {
        public QNCustomAudioTrackImpl(IntPtr nativeInstance) : base(nativeInstance) { }
        public int PushAudioFrame(byte[] data, uint dataSize, uint bitsPerSample, uint sampleRate, uint channels) {
            if (IntPtr.Zero == nativeInstance) return 0;

            IntPtr dataPtr = Marshal.AllocHGlobal((int)dataSize);
            Marshal.Copy(data, 0, dataPtr, (int)dataSize);

            int result = QNRTCTrackNative.QNRTCTrackPushAudioFrame(nativeInstance, dataPtr, dataSize, bitsPerSample, sampleRate, channels);

            Marshal.FreeHGlobal(dataPtr);
            return result;
        }
    }

    public class QNRemoteTrackImpl : QNTrackImpl, QNRemoteTrack
    {
        private List<QNTrackInfoChangedListener> trackInfoChangedListeners = new List<QNTrackInfoChangedListener>();

        public QNRemoteTrackImpl(IntPtr nativeInstance) : base(nativeInstance) { }

        public void AddTrackInfoChangedListener(QNTrackInfoChangedListener listener)
        {
            trackInfoChangedListeners.Add(listener);
        }

        public void RemoveTrackInfoChangedListener(QNTrackInfoChangedListener listener)
        {
            if (trackInfoChangedListeners.Contains(listener))
            {
                trackInfoChangedListeners.Remove(listener);
            }
        }

        public bool IsSubscribed()
        {
            if (IntPtr.Zero == nativeInstance) return false;
            return QNRTCTrackNative.QNRTCTrackIsSubscribed(nativeInstance);
        }

        [MonoPInvokeCallback(typeof(QNRTCTrackOnMuteStateChanged))]
        public static void OnMuteStateChanged(string userId, string trackId, bool muted)
        {
            Console.WriteLine("Impl OnMuteStateChanged userId: " + userId + ", trackId: " + trackId + ", muted " + muted);
            string currentUserId = userId.Clone() as string;
            string currentTrackId = trackId.Clone() as string;
            foreach (QNRemoteTrackImpl remoteTrackImpl in QNRTCClientImpl.GetShareInstance().remoteTracks)
            {
                string trackID = remoteTrackImpl.GetTrackID();
                if (trackID.Equals(currentTrackId))
                {
                    if (null != QNRTCEventQueue.EventGameObject && null != QNRTCEventQueue.EventQueueObject)
                    {
                        QNRTCEventQueue.EventQueueObject.Enqueue(() =>
                        {
                            List<QNTrackInfoChangedListener> listeners = new List<QNTrackInfoChangedListener>(remoteTrackImpl.trackInfoChangedListeners);
                            foreach (QNTrackInfoChangedListener listener in listeners)
                            {
                                listener.OnMuteStateChanged(currentUserId, currentTrackId, muted);
                            }
                        });
                    }
                }
            }
        }
    }

    public class QNRemoteAudioTrackImpl : QNRemoteTrackImpl, QNRemoteAudioTrack
    {
        private List<QNAudioFrameListener> audioFrameListeners = new List<QNAudioFrameListener>();

        public QNRemoteAudioTrackImpl(IntPtr nativeInstance) : base(nativeInstance) { }

        public void AddAudioFrameListener(QNAudioFrameListener listener)
        {
            audioFrameListeners.Add(listener);
        }

        public void RemoveAudioFrameListener(QNAudioFrameListener listener)
        {
            if (audioFrameListeners.Contains(listener))
            {
                audioFrameListeners.Remove(listener);
            }
        }

        public void SetVolume(double volume) {
            if (IntPtr.Zero == nativeInstance) return;
            QNRTCTrackNative.QNRTCTrackSetVolume(nativeInstance, false, volume);
        }

        public float GetVolumeLevel() {
            if (IntPtr.Zero == nativeInstance) return 0;
            return QNRTCTrackNative.QNRTCTrackGetVolumeLevel(nativeInstance, false);
        }

        [MonoPInvokeCallback(typeof(QNRTCTrackOnAudioFrame))]
        public static void OnAudioFrame(string userId, string trackId, IntPtr dataPtr, uint dataSize, uint bitsPerSample, uint sampleRate, uint channels)
        {
            string currentUserId = userId.Clone() as string;
            string currentTrackId = trackId.Clone() as string;
            byte[] data = new byte[dataSize];
            Marshal.Copy(dataPtr, data, 0, (int)dataSize);

            foreach (QNRemoteTrackImpl remoteTrackImpl in QNRTCClientImpl.GetShareInstance().remoteTracks)
            {
                string trackID = remoteTrackImpl.GetTrackID();
                if (trackID.Equals(currentTrackId))
                {
                    QNRemoteAudioTrackImpl remoteAudioTrackImpl = remoteTrackImpl as QNRemoteAudioTrackImpl;
                    if (null != remoteAudioTrackImpl)
                    {
                        List<QNAudioFrameListener> listeners = new List<QNAudioFrameListener>(remoteAudioTrackImpl.audioFrameListeners);
                        foreach (QNAudioFrameListener listener in listeners)
                        {
                            listener.OnAudioFrame(currentUserId, currentTrackId, data, dataSize, bitsPerSample, sampleRate, channels);
                        }
                    }
                }
            }
        }
    }
}
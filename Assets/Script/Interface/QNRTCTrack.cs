namespace qnrtc {
    public interface QNTrack
    {
        /// <summary>
        /// 获取 TrackId
        /// </summary>
        /// <returns> Track ID </returns>
        string GetTrackID();

        /// <summary>
        /// 获取 UserId
        /// </summary>
        /// <returns> User ID </returns>
        string GetUserID();

        /// <summary>
        /// 获取 Tag
        /// </summary>
        /// <returns> Tag </returns>
        string GetTag();

        /// <summary>
        /// 是否是静默状态
        /// </summary>
        /// <returns> true：静默状态  false：非静默状态 </returns>
        bool IsMuted();
    }

    public interface QNLocalTrack : QNTrack
    {
        /// <summary>
        /// 设置静默状态
        /// </summary>
        /// <param name="muted"> true：静默状态  false：非静默状态 </param>
        void SetMuted(bool muted);
    }

    public interface QNLocalAudioTrack : QNLocalTrack
    {
        /// <summary>
        /// 设置采集音频音量（不改变系统设备的音量）
        /// </summary>
        /// <param name="volume"> 音量大小，[1.0-10.0], 默认为 1.0 </param>
        void SetVolume(double volume);

        /// <summary>
        /// 获取音频采集的音量
        /// </summary>
        /// <returns> 音量值 </returns>
        float GetVolumeLevel();

        /// <summary>
        /// 设置本地音频 Track 原始数据监听
        /// </summary>
        /// <param name="listener"> QNAudioFrameListener 实例 </param>
        void AddAudioFrameListener(QNAudioFrameListener listener);

        /// <summary>
        /// 移除本地音频 Track 原始数据监听
        /// </summary>
        /// <param name="listener"> QNAudioFrameListener 实例 </param>
        void RemoveAudioFrameListener(QNAudioFrameListener listener);
    }

    public interface QNMicrophoneAudioTrack : QNLocalAudioTrack {}

    public interface QNCustomAudioTrack : QNLocalAudioTrack
    {
         int PushAudioFrame(byte[] data, uint dataSize, uint bitsPerSample, uint sampleRate, uint channels);
    }

    public interface QNRemoteTrack : QNTrack
    {
        /// <summary>
        /// 是否已订阅
        /// </summary>
        /// <returns> true：已订阅  false：未订阅 </returns>
        bool IsSubscribed();

        /// <summary>
        /// 设置远端 Track 状态改变监听
        /// </summary>
        /// <param name="listener"> QNTrackInfoChangedListener 实例 </param>
        void AddTrackInfoChangedListener(QNTrackInfoChangedListener listener);

        /// <summary>
        /// 移除远端 Track 状态改变监听
        /// </summary>
        /// <param name="listener"> QNTrackInfoChangedListener 实例 </param>
        void RemoveTrackInfoChangedListener(QNTrackInfoChangedListener listener);
    }

    public interface QNRemoteAudioTrack : QNRemoteTrack
    {
        /// <summary>
        /// 设置远端音频音量（不改变系统设备的音量）
        /// </summary>
        /// <param name="volume"> 音量大小，[1.0-10.0], 默认为 1.0 </param>
        void SetVolume(double volume);

        /// <summary>
        /// 获取音频播放的音量
        /// </summary>
        /// <returns> 音量值 </returns>
        float GetVolumeLevel();

        /// <summary>
        /// 设置远端音频 Track 状态改变监听
        /// </summary>
        /// <param name="listener"> QNAudioFrameListener 实例 </param>
        void AddAudioFrameListener(QNAudioFrameListener listener);

        /// <summary>
        /// 移除远端音频 Track 状态改变监听
        /// </summary>
        /// <param name="listener"> QNAudioFrameListener 实例 </param>
        void RemoveAudioFrameListener(QNAudioFrameListener listener);
    }
}
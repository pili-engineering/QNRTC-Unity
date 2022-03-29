using System.Collections.Generic;

namespace qnrtc {
    public interface QNRTCEventListener
    {
        void OnAudioRouteChanged(QNAudioDevice device);
    }

    public interface QNRTCClientEventListener
    {
        /// <summary>
        /// 房间连接状态变化时通知
        /// </summary>
        /// <param name="state"> 连接状态 </param>
        /// <param name="info"> 断开连接时状态信息，参考 QNRTCCommonDef </param>
        void OnConnectionStateChanged(QNConnectionState state, QNConnectionDisconnectedInfo? info);

        /// <summary>
        /// 远端用户加入房间时通知
        /// </summary>
        /// <param name="remoteUserId"> 远端用户 id </param>
        /// <param name="userData"> 远端用户自定义消息 </param>
        void OnUserJoined(string remoteUserId, string userData);

        /// <summary>
        /// 远端用户离开房间时通知
        /// </summary>
        /// <param name="remoteUserId"> 远端用户 id </param>
        void OnUserLeft(string remoteUserId);

        /// <summary>
        /// 远端用户重连时通知
        /// </summary>
        /// <param name="remoteUserId"> 远端用户 id </param>
        void OnUserReconnecting(string remoteUserId);

        /// <summary>
        /// 远端用户重连成功时通知
        /// </summary>
        /// <param name="remoteUserId"> 远端用户 id </param>
        void OnUserReconnected(string remoteUserId);

        /// <summary>
        /// 远端用户发布新 track 时通知
        /// </summary>
        /// <param name="remoteUserId"> 远端用户 id </param>
        /// <param name="trackList"> 远端用户新发布的 tracks </param>
        void OnUserPublished(string remoteUserId, List<QNRemoteTrack> trackList);

        /// <summary>
        /// 远端用户取消发布 track 时通知
        /// 注意：此方法回调的 QNRemoteTrack 已失效，无法继续使用
        /// </summary>
        /// <param name="remoteUserId"> 远端用户 id </param>
        /// <param name="trackList"> 远端用户取消发布的 tracks </param>
        void OnUserUnpublished(string remoteUserId, List<QNRemoteTrack> trackList);

        /// <summary>
        /// 订阅 track 成功时通知
        /// </summary>
        /// <param name="remoteUserId"> 订阅的 track 所属的远端用户 </param>
        /// <param name="remoteAudioTrackList"> 订阅的音频 tracks </param>
        void OnSubscribed(string remoteUserId, List<QNRemoteAudioTrack> remoteAudioTrackList);

        /// <summary>
        /// 接收到新的自定义消息时通知
        /// </summary>
        /// <param name="message"> 自定义消息，参考 QNRTCCommonDef </param>
        void OnMessageReceived(QNCustomMessage message);

        /// <summary>
        /// 跨发媒体转发状态变更，非主动调用触发，由目标房间状态变化引起此通知
        /// 目前仅当目标房间关闭时，会触发此通知
        /// </summary>
        /// <param name="relayRoom"> 发生状态变化的房间 </param>
        /// <param name="state"> 新状态，当前仅可能为 RelayRoomClosed </param>
        void OnMediaRelayStateChanged(string relayRoom, QNMediaRelayState state);
    }

    public interface QNRTCClientRoleEventListener
    {
        /// <summary>
        /// 设置角色成功回调
        /// </summary>
        /// <param name="newRole"> 新角色类型 </param>
        void OnClientRoleResult(QNClientRole newRole);

        /// <summary>
        /// 设置角色失败回调
        /// </summary>
        /// <param name="errorCode"> 错误码，参考 QNRTCErrorCode </param>
        /// <param name="errorMessage"> 错误描述 </param>
        void OnClientRoleError(int errorCode, string errorMessage);
    }

    public interface QNMediaRelayListener
    {
        /// <summary>
        /// 跨房媒体转发操作成功
        /// 注意：此接口回调的是全量的跨房状态，包含所有跨房目标。具体每个目标房间是否转发成功，需要参考回调参数中目标房间对应的 QNMediaRelayState
        /// </summary>
        /// <param name="stateMap"> 具体目标房间状态， key 为房间名， value 为状态 </param>
        void OnMediaRelayResult(Dictionary<string, QNMediaRelayState> stateMap);

        /// <summary>
        /// 跨房媒体转发操作失败
        /// </summary>
        /// <param name="errorCode"> 错误码，参考 QNRTCErrorCode </param>
        /// <param name="errorMessage"> 错误描述 </param>
        void OnMediaRelayError(int errorCode, string errorMessage);
    }

    public interface QNRemoteAudioMixedFrameListener
    {
        /// <summary>
        /// 远端各用户音频数据混音后的回调
        /// </summary>
        /// <param name="data"> 音频 PCM 数据 </param>
        /// <param name="dataSize"> 数据长度 </param>
        /// <param name="bitsPerSample"> 位宽，即每个采样点占用位数 </param>
        /// <param name="sampleRate"> 采样率 </param>
        /// <param name="channels"> 声道数 </param>
        void OnRemoteAudioMixedFrame(byte[] data, uint dataSize, uint bitsPerSample, uint sampleRate, uint channels);
    }

    public interface QNPublishResultListener
    {
        /// <summary>
        /// 发布成功后触发此回调
        /// </summary>
        void OnPublished();

        /// <summary>
        /// 发布失败后触发此回调
        /// </summary>
        /// <param name="errorCode"> 错误码，参考 QNRTCErrorCode </param>
        /// <param name="errorMessage"> 错误信息 </param>
        void OnPublishError(int errorCode, string errorMessage);
    }

    public interface QNLiveStreamingListener
    {
        /// <summary>
        /// 转推任务成功创建时触发此回调
        /// </summary>
        /// <param name="streamId"> 转推成功的 Stream Id </param>
        void OnStarted(string streamId);

        /// <summary>
        /// 转推任务成功停止时触发此回调
        /// </summary>
        /// <param name="streamId"> 停止转推的 Stream Id </param>
        void OnStoped(string streamId);

        /// <summary>
        /// 转推任务配置更新时触发此回调
        /// </summary>
        /// <param name="streamId"> 配置更新的 Stream Id </param>
        void OnTranscodingTracksUpdated(string streamId);

        /// <summary>
        /// 转推任务出错时触发此回调
        /// </summary>
        /// <param name="streamId"> 出现错误的 Stream Id </param>
        /// <param name="errorInfo"> 错误信息 </param>
        void OnLiveStreamingError(string streamId, QNLiveStreamingErrorInfo errorInfo);
    }

    public interface QNNetworkQualityListener
    {
        /// <summary>
        /// 本端网络状态回调
        /// </summary>
        /// <param name="quality"> 网络状态信息 </param>
        void OnNetworkQualityNotified(QNNetworkQuality quality);
    }

    public interface QNAudioFrameListener
    {
        /// <summary>
        /// 音频数据回调
        /// </summary>
        /// <param name="userId"> 此音频数据所属的用户，本地音频 Track 该字段为空字符串 </param>
        /// <param name="trackId"> 此音频 track id，本地音频 Track 该字段为空字符串 </param>
        /// <param name="data"> 音频数据 </param>
        /// <param name="dataSize"> 数据长度 </param>
        /// <param name="bitsPerSample"> 位宽，即每个采样点占用位数 </param>
        /// <param name="sampleRate"> 采样率 </param>
        /// <param name="channels"> 声道数 </param>
        void OnAudioFrame(string userId, string trackId, byte[] data, uint dataSize, uint bitsPerSample, uint sampleRate, uint channels);
    }

    public interface QNTrackInfoChangedListener
    {
        /// <summary>
        /// Track 静默状态改变回调
        /// </summary>
        /// <param name="userId"> 当前的 User ID </param>
        /// <param name="trackId" 当前的 Track ID ></param>
        /// <param name="muted"> 当前的静默状态 </param>
        void OnMuteStateChanged(string userId, string trackId, bool muted);
    }
}
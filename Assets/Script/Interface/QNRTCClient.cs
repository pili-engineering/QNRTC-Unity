using System.Collections.Generic;

namespace qnrtc
{
    public abstract class QNRTCClient
    {
        /// <summary>
        /// 设置 QNRTCClient 事件监听
        /// </summary>
        /// <param name="listener"> QNRTCClientEventListener 实例 </param>
        public abstract void AddClientEventListener(QNRTCClientEventListener listener);

        /// <summary>
        /// 移除 QNRTCClient 事件监听
        /// </summary>
        /// <param name="listener"> QNRTCClientEventListener 实例 </param>
        public abstract void RemoveClientEventListener(QNRTCClientEventListener listener);

        /// <summary>
        /// 加入房间
        /// </summary>
        /// <param name="token"> 房间 Token </param>
        /// <param name="userData"> 用户信息 </param>
        public abstract void Join(string token, string userData = "");

        /// <summary>
        /// 离开房间
        /// </summary>
        public abstract void Leave();

        /// <summary>
        /// 设置 QNRTCClient 远端音频 Track 混音后的原始数据回调
        /// </summary>
        /// <param name="listener"> QNRemoteAudioMixedFrameListener 实例 </param>
        public abstract void AddRemoteAudioMixedFrameListener(QNRemoteAudioMixedFrameListener listener);

        /// <summary>
        /// 移除 QNRTCClient 远端音频 Track 混音后的原始数据回调
        /// </summary>
        /// <param name="listener"> QNRemoteAudioMixedFrameListener 实例 </param>
        public abstract void RemoveRemoteAudioMixedFrameListener(QNRemoteAudioMixedFrameListener listener);

        /// <summary>
        /// 设置直播场景下的用户角色，注意：该方法仅适用于直播场景（ QNClientMode 为 Live ）。
        /// </summary>
        /// <param name="clientRole"> 直播场景里的用户角色 </param>
        public abstract void SetClientRole(QNClientRole clientRole);

        /// <summary>
        /// 设置 QNRTCClient 房间角色相关事件监听
        /// </summary>
        /// <param name="listener"> QNRTCClientRoleEventListener 实例 </param>
        public abstract void AddClientRoleEventListener(QNRTCClientRoleEventListener listener);

        /// <summary>
        /// 移除 QNRTCClient 房间角色相关事件监听
        /// </summary>
        /// <param name="listener"> QNRTCClientEventListener 实例 </param>
        public abstract void RemoveClientRoleEventListener(QNRTCClientRoleEventListener listener);

        /// <summary>
        /// 开启跨房媒体转发
        /// 如果已经开启，则调用失败。
        /// 当所有目标房间跨房媒体转发都失败，则本次跨房媒体转发请求视为失败，使用跨房媒体转发功能需要再次调用此方法。
        /// 当有任意一个目标或多个目标房间媒体转发成功，则本次跨房媒体转发请求视为成功，具体每个房间的状态参考回调结果。
        /// 注意：该方法仅适用于互动直播场景中角色类型为主播的用户。
        /// </summary>
        /// <param name="configuration"> 跨房媒体转发配置 </param>
        public abstract void StartMediaRelay(QNMediaRelayConfiguration configuration);

        /// <summary>
        /// 更新跨房媒体转发
        /// 成功开启跨房媒体转发后，如果您希望将流转发到多个目标房间，或退出当前正在转发的房间，可以调用该方法。
        /// 此方法为全量更新，正在跨房媒体转发中却未被包含在参数 configuration 中的房间，将停止媒体转发。
        /// 注意：调用此方法前必须确保已经成功开启跨房媒体转发，否则将调用失败；该方法仅适用互动直播场景中角色类型为主播的用户。
        /// </summary>
        /// <param name="configuration"> 跨房媒体转发配置 </param>
        public abstract void UpdateMediaRelay(QNMediaRelayConfiguration configuration);

        /// <summary>
        /// 停止跨房媒体转发
        /// 如果未开启，则调用失败。
        /// 注意：一旦停止，会停止在所有目标房间中的媒体转发；该方法仅适用互动直播场景中角色类型为主播的用户。
        /// </summary>
        public abstract void StopMediaRelay();

        /// <summary>
        /// 设置 QNRTCClient 跨房媒体转发监听
        /// </summary>
        /// <param name="listener"> QNMediaRelayListener 实例 </param>
        public abstract void AddMediaRelayListener(QNMediaRelayListener listener);

        /// <summary>
        /// 移除 QNRTCClient 跨房媒体转发监听
        /// </summary>
        /// <param name="listener"> QNMediaRelayListener 实例 </param>
        public abstract void RemoveMediaRelayListener(QNMediaRelayListener listener);
                      
        /// <summary>
        /// 发布本地媒体流
        /// </summary>
        /// <param name="trackList"> 需要发布的本地 Track 列表 </param>
        public abstract void Publish(List<QNLocalTrack> trackList);

        /// <summary>
        /// 取消发布本地媒体流
        /// </summary>
        /// <param name="trackList"> 需要取消发布的本地 Track 列表 </param>
        public abstract void Unpublish(List<QNLocalTrack> trackList);

        /// <summary>
        /// 设置 QNRTCClient 发布结果监听
        /// </summary>
        /// <param name="listener"> QNPublishResultListener 实例 </param>
        public abstract void AddPublishResultListener(QNPublishResultListener listener);

        /// <summary>
        /// 移除 QNRTCClient 发布结果监听
        /// </summary>
        /// <param name="listener"> QNPublishResultListener 实例 </param>
        public abstract void RemovePublishResultListener(QNPublishResultListener listener);

        /// <summary>
        /// 订阅远端用户发布的媒体流，成功时会触发 QNRTCClientEventListener.nSubscribed 回调
        /// </summary>
        /// <param name="trackList"> 需要订阅的远端 Track 列表 </param>
        public abstract void Subscribe(List<QNRemoteTrack> trackList);

        /// <summary>
        /// 取消订阅远端用户发布的媒体流
        /// </summary>
        /// <param name="trackList"> 需要取消订阅的远端 Track 列表 </param>
        public abstract void Unsubscribe(List<QNRemoteTrack> trackList);

        /// <summary>
        /// 发送自定义消息
        /// </summary>
        /// <param name="userList"> 指定发送的用户列表，空 List 表示发给房间内所有用户 </param>
        /// <param name="messageId"> 消息 id </param>
        /// <param name="message"> 消息内容 </param>
        public abstract void SendMessage(List<string> userList, string messageId, string message);

        /// <summary>
        /// 开启单人 CDN 直播流转推，转推结果通过 QNLiveStreamingListener 通知
        /// </summary>
        /// <param name="config"> 单人转推配置 </param>
        public abstract void StartDirectLiveStreaming(QNDirectLiveStreamingConfig config);

        /// <summary>
        /// 停止单人 CDN 直播流转推，转推结果通过 QNLiveStreamingListener 通知
        /// </summary>
        /// <param name="config"> 单人转推配置 </param>
        public abstract void StopDirectLiveStreaming(QNDirectLiveStreamingConfig config);

        /// <summary>
        /// 开启 CDN 合流转推，转推结果通过 QNLiveStreamingListener 通知
        /// </summary>
        /// <param name="config"> 合流转推配置 </param>
        public abstract void StartTranscodingLiveStreaming(QNTranscodingLiveStreamingConfig config);

        /// <summary>
        /// 停止 CDN 合流转推，转推结果通过 QNLiveStreamingListener 通知
        /// </summary>
        /// <param name="config"> 合流转推配置 </param>
        public abstract void StopTranscodingLiveStreaming(QNTranscodingLiveStreamingConfig config);

        /// <summary>
        /// 添加合流的 Tracks，结果通过 QNLiveStreamingListener 通知
        /// </summary>
        /// <param name="streamId"> 合流任务 ID </param>
        /// <param name="transcodingTrackList"> 增加的 Track 合流配置信息 </param>
        public abstract void SetTranscodingLiveStreamingTracks(string streamId, List<QNTranscodingLiveStreamingTrack> transcodingTrackList);

        /// <summary>
        /// 删除合流中的 Tracks，结果通过 QNLiveStreamingListener 通知
        /// </summary>
        /// <param name="streamId"> 合流任务 ID </param>
        /// <param name="transcodingTrackList"> 增加的 Track 合流配置信息 </param>
        public abstract void RemoveTranscodingLiveStreamingTracks(string streamId, List<QNTranscodingLiveStreamingTrack> transcodingTrackList);

        /// <summary>
        /// 设置 QNRTCClient CDN 转推监听
        /// </summary>
        /// <param name="listener"> QNLiveStreamingListener 实例 </param>
        public abstract void AddLiveStreamingListener(QNLiveStreamingListener listener);

        /// <summary>
        /// 移除 QNRTCClient CDN 转推监听
        /// </summary>
        /// <param name="listener"> QNLiveStreamingListener 实例 </param>
        public abstract void RemoveLiveStreamingListener(QNLiveStreamingListener listener);
        
        /// <summary>
        /// 获取本地发布的所有 Tracks
        /// </summary>
        /// <returns> 本地发布的 Tracks 信息 </returns>
        public abstract List<QNLocalTrack> GetPublishedTracks();

        /// <summary>
        /// 获取指定远端用户的信息
        /// </summary>
        /// <param name="userId"> 远端用户 ID </param>
        /// <returns> 指定远端用户的信息 </returns>
        public abstract QNRemoteUser GetRemoteUser(string userId);

        /// <summary>
        /// 获取远端所有用户的信息
        /// </summary>
        /// <returns> 所有远端用户的信息 </returns>
        public abstract List<QNRemoteUser> GetRemoteUserList();

        /// <summary>
        /// 获取本地音频 Track 质量统计信息
        /// </summary>
        /// <returns> 本地音频 Track 质量统计信息，key：Track ID  value：QNLocalAudioTrackStats 结构 </returns>
        public abstract Dictionary<string, QNLocalAudioTrackStats> GetLocalAudioTrackStats();

        /// <summary>
        /// 获取远端音频 Track 质量统计信息
        /// </summary>
        /// <returns> 元旦音频 Track 质量统计信息，key：Track ID  value：QNRemoteAudioTrackStats 结构 </returns>
        public abstract Dictionary<string, QNRemoteAudioTrackStats> GetRemoteAudioTrackStats();

        /// <summary>
        /// 获取当前订阅的远端用户网络质量
        /// </summary>
        /// <returns> 当前订阅的远端用户网络质量 key：User ID  value：QNNetworkQuality 结构 </returns>
        public abstract Dictionary<string, QNNetworkQuality> GetUserNetworkQuality();

        /// <summary>
        /// 设置 QNRTCClient 网络质量监听
        /// </summary>
        /// <param name="listener"> QNNetworkQualityListener 实例 </param>
        public abstract void AddNetworkQualityListener(QNNetworkQualityListener listener);

        /// <summary>
        /// 移除 QNRTCClient 网络质量监听
        /// </summary>
        /// <param name="listener"> QNNetworkQualityListener 实例 </param>
        public abstract void RemoveNetworkQualityListener(QNNetworkQualityListener listener);
    } 
}
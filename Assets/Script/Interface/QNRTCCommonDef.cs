using System.Collections.Generic;

namespace qnrtc
{
    #region Enum
    // SDK 日志等级
    public enum QNLogLevel
    {
        None,
        Verbose,
        Info,
        Warning,
        Error
    }

    // 媒体传输协议配置 
    public enum QNTransportPolicy
    {
        ForceUDP,      // 媒体传输强制使用 UDP
        ForceTCP,      // 媒体传输强制使用 TCP
        PreferUDP      // 媒体传输有限使用 UDP，如果使用 UDP 失败，尝试使用 TCP
    }

    // 音频播放设备类型
    public enum QNAudioDevice
    {
        Speakerphone,    // 扬声器
        Earpiece,           // 听筒
        WiredHeadset,    // 有线耳机
        Bluetooth,          // 蓝牙
        None                 // 未知
    };

    // 使用场景
    public enum QNClientMode
    {
        Rtc,        // 通信场景
        Live        // 直播场景
    }

    // 用户角色
    public enum QNClientRole
    {
        Broadcaster,     // 主播
        Audience           // 观众
    }

    // 房间状态
    public enum QNConnectionState
    {
        Disconnected,       // 已断开
        Connecting,          // 正在连接
        Connected,           // 已连接
        Reconnecting,       // 正在重连
        Reconnected         // 已重连
    }

    // 跨房转推状态
    public enum QNMediaRelayState
    {
        RelaySuccess = 0,         // 跨房转发成功  
        RelayStopped,              // 跨房转发停止
        InvalidToken,                // 无效 Token
        RelayNoRoom,              // 房间不存在
        RelayRoomClosed,         // 房间已关闭
        RelayPlayerExisted,      // 用户已存在
        RelayUnknown = 0XFF,   // 未知状态
    }

    // 画面渲染窗口填充方式
    public enum QNStretchMode
    {
        Invalid = -1,    // 无效值 
        Fill,               // 在保持长宽比的前提下，缩放使其充满容器 
        Fit,               // 在保持长宽比的前提下，缩放视使其在容器内完整显示，边缘部分填充黑边 
        ScaleToFit     // 缩放使其填充满容器，可能导致拉伸变形 
    }

    // 网络质量等级
    public enum QNNetworkGrade
    {
        Invalid = -1,      // 无效值
        Excellent = 1,    // 极好
        Good,               // 好
        Fair,                // 一般
        Poor                // 差
    }

    // 断开连接原因
    public enum QNDisconnectReason
    {
        Leave,             // 主动退出
        KickOut,          // 被服务器踢出房间
        RoomClosed,    // 房间被关闭
        RoomFull,        // 房间人数已满
        RoomError      // 异常断开
    }

    // CDN 转推错误类型
    public enum QNLiveStreamingErrorType
    {
        Start,          // 错误发生在 Start
        Stop,           // 错误发生在 Stop
        Update        // 错误发生在 Update
    }
    #endregion

    #region Struct
    // 初始化配置
    public struct QNRTCSetting
    {
        public QNTransportPolicy Policy;         // 媒体传输协议
        public bool IsAec3Enabled;                 // aec3 回声消除
        public bool IsAudioRedundantEnabled;  // 音频冗余包
    }

    // QNRTCClient 配置
    public struct QNRTCClientConfig
    {
        public QNClientMode Mode;            // 使用场景
        public QNClientRole Role;               // 用户角色
    };

    // 麦克风 Track 配置
    public struct QNMicrophoneAudioTrackConfig
    {
        public QNAudioQuality AudioQuality;     // 音频参数配置
        public string Tag;                               // 自定义标签
    }

    // 自定义音频 Track 配置
    public struct QNCustomAudioTrackConfig
    {
        public QNAudioQuality AudioQuality;      // 音频参数配置
        public string Tag;                                // 自定义标签
    }

    // 音频参数配置
    public struct QNAudioQuality
    {
        public int SampleRate;          // 采样率，单位 hz
        public int ChannelCount;        // 通道数
        public int BitsPerSample;       // 位深，单位 bit
        public int Bitrate;                 // 码率，单位 kbps
    }

    // 断开连接时状态信息
    public struct QNConnectionDisconnectedInfo
    {
        public QNDisconnectReason Reason;     // 断开原因
        public int ErrorCode;                         // 错误码
        public string ErrorMessage;                // 错误信息
    }

    // 自定义消息接收回调信息 
    public struct QNCustomMessage
    {
        public string msgId;                // 消息唯一 ID 
        public string msgSendId;         // 消息发送者的 user ID 
        public string msgText;           // 消息内容 
        public int msgTimestamp;       // 消息时间戳 
    }

    // 远端用户信息
    public struct QNRemoteUser
    {
        public string UserId;                                                                // 用户 ID
        public string UserData;                                                            // 用户信息
        public List<QNRemoteAudioTrack> RemoteAudioTrackList;              // 远端用户已发布的音频 Track
    }

    // CDN 转推错误信息
    public struct QNLiveStreamingErrorInfo
    {
        public QNLiveStreamingErrorType Type;        // 错误类型，标识错误发生在哪个环节的处理
        public int Code;                                         // 错误码，参考 QNRTCCommonDef.cs
        public string Message;                               // 错误信息
    }

    // 单路转推配置信息
    public struct QNDirectLiveStreamingConfig
    {
        public QNLocalAudioTrack LocalAudioTrack;            // 单路转推的音频 Track
        public string StreamId;                                        // 单路转推任务 ID，由客户端设置，不可为空 
        public string PublishUrl;                                      // rtmp 转推地址 
    }

    // 自定义合流配置信息
    public struct QNTranscodingLiveStreamingConfig
    {
        public string StreamId;                                                                  // 合流任务 ID，保证房间内唯一 
        public string PublishUrl;                                                                // 自定义合流推流地址 
        public QNTranscodingLiveStreamingImage MergeBackground;                // 合流背景 
        public List<QNTranscodingLiveStreamingImage> MergeWatermark;         // 合流水印配置列表
        public int Width;                                                                           // 合流画布宽，单位像素
        public int Height;                                                                          // 合流画布高，单位像素
        public int Fps;                                                                              // 合流帧率 ，单位 fps
        public int Bitrate;                                                                        // 合流码率，单位 bps 
        public int MinBitrate;                                                                   // 最小码率，单位 bps
        public int MaxBitrate;                                                                  // 最大码率，单位 bps
        public bool IsHoldLastFrame;                                                         // 合流停止时是否保持最后一帧画面 
        public QNStretchMode StretchMode;                                              // 合流画面填充模式 
    }

    // 合流背景、水印配置参数
    public struct QNTranscodingLiveStreamingImage
    {
        public string LayerUrl;     // http网络图片地址 
        public int X;                   // 在合流画面中的x坐标 
        public int Y;                   // 在合流画面中的y坐标 
        public int LayerWidth;      // 该图片占宽 
        public int LayerHeight;     // 该图片占高 
    }

    // 旁路直播合流配置信息（纯音频暂时只有 trackId 字段）
    public struct QNTranscodingLiveStreamingTrack
    {
        public string TrackId;       // Track ID
    }

    // 网络上下行质量
    public struct QNNetworkQuality
    {
        public QNNetworkGrade UplinkNetworkGrade;           // 上行网络质量
        public QNNetworkGrade DownlinkNetworkGrade;       // 下行网络质量
    }

    // 跨房媒体转发配置信息
    public struct QNMediaRelayConfiguration
    {
        public QNMediaRelayInfo SrcRoomInfo;                    // 当前房间信息
        public List<QNMediaRelayInfo> DestRoomInfos;         // 目标房间信息列表
    }

    // 跨房媒体转发信息
    public struct QNMediaRelayInfo
    {
        public string RoomName;             // 房间名
        public string RelayToken;           // 房间 Token
    }

    // 本地音频 Track 统计信息
    public struct QNLocalAudioTrackStats
    {
        public int UplinkBitrate;          // 上行音频码率，单位 bps
        public int UplinkRtt;               // 上行网络 rtt
        public int UplinkLostrate;        // 上行网络丢包率
    }

    // 远端音频 Track统计信息
    public struct QNRemoteAudioTrackStats
    {
        public int DownlinkBitrate;       // 下行音频码率，单位 bps
        public int DownlinkLostrate;     // 下行网络丢包率
        public int UplinkRtt;               // 上行网络 rtt
        public int UplinkLostrate;        // 上行网络丢包率
    }
    #endregion
}
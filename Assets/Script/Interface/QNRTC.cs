using System;

namespace qnrtc
{
    public abstract class QNRTC
    {
        /// <summary>
        /// 获取 SDK 版本号
        /// </summary>
        /// <returns> SDK 版本号 </returns>
        public static string GetVersion() { return QNRTCImpl.GetVersion(); }

        /// <summary>
        /// 设置 SDK 日志级别
        /// </summary>
        /// <param name="level"> 日志级别，参考 QNRTCCommonRef </param>
        /// <param name="dirName"> 日志存放目录 </param>
        /// <param name="fileName"> 日志文件名 </param>
        /// <returns> 0： 成功  非0：失败 </returns>
        public static int SetLogFile(QNLogLevel level, string dirName, string fileName) { return QNRTCImpl.SetLogFile(level, dirName, fileName); }

        /// <summary>
        /// 初始化 QNRTC
        /// </summary>
        /// <param name="setting"> 配置参数，参考 QNRTCCommonRef </param>
        public static void Init(QNRTCSetting setting) { QNRTCImpl.Init(setting); }

        /// <summary>
        /// 反初始化 QNRTC
        /// </summary>
        public static void DeInit() { QNRTCImpl.DeInit(); }

        /// <summary>
        /// 初始化 QNRTCClient 实例
        /// </summary>
        /// <returns> QNRTCClient 实例 </returns>
        public static QNRTCClient GetClient() { return QNRTCImpl.GetClient(); }

        /// <summary>
        /// 使用自定义配置初始化 QNRTCClient 实例
        /// </summary>
        /// <param name="config"> client 配置参数，参考 QNRTCCommonRef </param>
        /// <returns> QNRTCClient 实例 </returns>
        public static QNRTCClient GetClient(QNRTCClientConfig config) { return QNRTCImpl.GetClient(config); }

        /// <summary>
        /// 创建 QNMicrophoneAudioTrack 实例
        /// 注意：麦克风 Track 和自定义音频 Track 不能同时使用，重复创建音频 Track 会失败
        /// </summary>
        /// <param name="config"> QNMicrophoneAudioTrack 配置，参考 QNRTCCommonRef</param>
        /// <returns> QNMicrophoneAudioTrack 实例</returns>
        public static QNMicrophoneAudioTrack CreateMicrophoneAudioTrack(QNMicrophoneAudioTrackConfig config) { return QNRTCImpl.CreateMicrophoneAudioTrack(config); }

        /// <summary>
        /// 创建 QNCustomAudioTrack 实例
        /// 注意：麦克风 Track 和自定义音频 Track 不能同时使用，重复创建音频 Track 会失败
        /// </summary>
        /// <param name="config"> QNCustomAudioTrack 配置 </param>
        /// <returns> QNCustomAudioTrack 实例 </returns>
        public static QNCustomAudioTrack CreateCustomAudioTrack(QNCustomAudioTrackConfig config) { return QNRTCImpl.CreateCustomAudioTrack(config); }

        /// <summary>
        /// 释放 QNLocalTrack 实例
        /// </summary>
        /// <param name="localTrack"> QNLocalTrack 实例 </param>
        public static void DestroyLocalTrack(QNLocalTrack localTrack) { QNRTCImpl.DestroyLocalTrack(localTrack); }

        /// <summary>
        /// 设置是否将音频路由切换到扬声器
        /// </summary>
        /// <param name="audioRouteToSpeakphone"> 是否将音频路由切换到扬声器 </param>
        public static void SetAudioRouteToSpeakerphone(bool audioRouteToSpeakphone) { QNRTCImpl.SetAudioRouteToSpeakerphone(audioRouteToSpeakphone); }

        /// <summary>
        /// 设置音频播放静音
        /// </summary>
        /// <param name="muted"> 是否将音频播放设置为静音 </param>
        public static void SetAudioPlayMute(bool muted) { QNRTCImpl.SetAudioPlayMute(muted); }

        /// <summary>
        /// 音频播放是否为静音
        /// </summary>
        /// <returns> 是否为静音 </returns>
        public static bool IsAudioPlayMute() { return QNRTCImpl.IsAudioPlayMute(); }

        /// <summary>
        /// 设置 QNRTC 事件监听
        /// </summary>
        /// <param name="listener"> QNRTCEventListener 实例 </param>
        public static void AddEventListener(QNRTCEventListener listener) { QNRTCImpl.AddEventListener(listener); }

        /// <summary>
        /// 移除 QNRTC 事件监听
        /// </summary>
        /// <param name="listener"> QNRTCEventListener 实例 </param>
        public static void RemoveEventListener(QNRTCEventListener listener) { QNRTCImpl.RemoveEventListener(listener); }
    }
}
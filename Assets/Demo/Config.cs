using UnityEngine;
using UnityEditor;
using qnrtc;

namespace QNRTCUnityDemo
{
    public class Config
    {
        private static Config shareInstance = null;

        public string Token;

        public string AppId;

        public string RoomName;

        public string UserId;

        public QNTransportPolicy Policy;

        public QNLogLevel LogLevel;

        public bool IsAEC3Enabled;

        public bool IsRedEnabled;

        public QNClientMode Mode;

        public QNClientRole Role;

        public bool IsCustomAudio;

        public static Config GetInstance()
        {
            if (null == shareInstance)
            {
                shareInstance = new Config();
            }
            return shareInstance;
        }
    }

    [SerializeField]
    public struct QNTokenInfo
    {
        public string appId;
        public string roomName;
        public string userId;
        public string expireAt;
        public string permission;
    }
}

using System;
using System.Runtime.InteropServices;

namespace qnrtc
{
    [StructLayout(LayoutKind.Sequential)]
    public struct QNRTCSettingPInvoke
    {
        public int Policy;

        [MarshalAs(UnmanagedType.U1)]
        public bool IsAec3Enabled;

        [MarshalAs(UnmanagedType.U1)]
        public bool IsAudioRedundantEnabled;
    }

    [StructLayout(LayoutKind.Sequential)]
    public struct QNRTCClientConfigPInvoke
    {
        public int Mode;

        public int Role;
    }

    [StructLayout(LayoutKind.Sequential)]
    public struct QNAudioQualityPInvoke
    {
        public int SampleRate;

        public int ChannelCount;

        public int BitsPerSample;

        public int Bitrate;
    }

    [StructLayout(LayoutKind.Sequential)]
    public struct QNMicrophoneAudioTrackConfigPInvoke
    {
        public QNAudioQualityPInvoke AudioQuality;

        [MarshalAs(UnmanagedType.ByValTStr, SizeConst = QNRTCPInvoke.TagStringLength)]
        public string Tag;
    }

    [StructLayout(LayoutKind.Sequential)]
    public struct QNCustomAudioTrackConfigPInvoke
    {
        public QNAudioQualityPInvoke AudioQuality;

        [MarshalAs(UnmanagedType.ByValTStr, SizeConst = QNRTCPInvoke.TagStringLength)]
        public string Tag;
    }

    [StructLayout(LayoutKind.Sequential)]
    public struct QNConnectionDisconnectedInfoPInvoke
    {
        public int Reason;

        public int ErrorCode;

        [MarshalAs(UnmanagedType.ByValTStr, SizeConst = QNRTCPInvoke.ErrorMessageStringLength)]
        public string ErrorMessage;
    }

    [StructLayout(LayoutKind.Sequential)]
    public struct QNMediaRelayConfigurationPInvoke
    {
        public QNMediaRelayInfoPInvoke SrcRoomInfo;

        public int DestRoomCount;

        [MarshalAs(UnmanagedType.ByValArray, SizeConst = QNRTCPInvoke.MediaRelayCountCapacity, ArraySubType = UnmanagedType.Struct)]
        public QNMediaRelayInfoPInvoke[] DestRoomInfos;
    }

    [StructLayout(LayoutKind.Sequential)]
    public struct QNMediaRelayInfoPInvoke
    {
        [MarshalAs(UnmanagedType.ByValTStr, SizeConst = QNRTCPInvoke.RoomNameStringLength)]
        public string RoomName;

        [MarshalAs(UnmanagedType.ByValTStr, SizeConst = QNRTCPInvoke.RoomTokenStringLength)]
        public string RelayToken;       
    }

    [StructLayout(LayoutKind.Sequential)]
    public struct QNMediaRelayResultPInvoke
    {
        [MarshalAs(UnmanagedType.ByValTStr, SizeConst = QNRTCPInvoke.RoomNameStringLength)]
        public string RoomName;

        public int State;
    }

    [StructLayout(LayoutKind.Sequential)]
    public struct QNMediaRelayResultListPInvoke
    {
        public int Count;

        [MarshalAs(UnmanagedType.ByValArray, SizeConst = QNRTCPInvoke.MediaRelayCountCapacity, ArraySubType = UnmanagedType.Struct)]
        public QNMediaRelayResultPInvoke[] MediaInfoResultList;
    };

    [StructLayout(LayoutKind.Sequential)]
    public struct QNLocalTrackListPInvoke
    {
        public int Count;

        [MarshalAs(UnmanagedType.ByValArray, SizeConst = QNRTCPInvoke.LocalTrackCountCapacity)]
        public IntPtr[] TrackList;
    }

    [StructLayout(LayoutKind.Sequential)]
    public struct QNRemoteTrackListPInvoke
    {
        public int Count;

        [MarshalAs(UnmanagedType.ByValArray, SizeConst = QNRTCPInvoke.RemoteTrackCountCapacity)]
        public IntPtr[] TrackList;
    }

    [StructLayout(LayoutKind.Sequential)]
    public struct QNRemoteUserPInvoke
    {
        [MarshalAs(UnmanagedType.ByValTStr, SizeConst = QNRTCPInvoke.UserIdStringLength)]
        public string UserId;

        [MarshalAs(UnmanagedType.ByValTStr, SizeConst = QNRTCPInvoke.UserDataStringLength)]
        public string UserData;

        public int RemoteAudioTrackCount;

        [MarshalAs(UnmanagedType.ByValArray, SizeConst = QNRTCPInvoke.RemoteAudioTrackCountCapacity)]
        public IntPtr[] RemoteAudioTrackList;
    }

    [StructLayout(LayoutKind.Sequential)]
    public struct QNRemoteUserListPInvoke
    {
        public int RemoteUserCount;

        [MarshalAs(UnmanagedType.ByValArray, SizeConst = QNRTCPInvoke.UserListCountCapacity, ArraySubType = UnmanagedType.Struct)]
        public QNRemoteUserPInvoke[] RemoteUserList;
    }

    [StructLayout(LayoutKind.Sequential)]
    public struct QNLocalAudioTrackStatsPInvoke
    {
        [MarshalAs(UnmanagedType.ByValTStr, SizeConst = QNRTCPInvoke.TrackIdStringLength)]
        public string TrackId;

        public int UplinkBitrate;

        public int UplinkRtt;

        public int UplinkLostrate;
    }

    [StructLayout(LayoutKind.Sequential)]
    public struct QNLocalAudioTrackStatsListPInvoke
    {
        public int Count;

        [MarshalAs(UnmanagedType.ByValArray, SizeConst = QNRTCPInvoke.LocalAudioTrackCountCapacity, ArraySubType = UnmanagedType.Struct)]
        public QNLocalAudioTrackStatsPInvoke[] LocalAudioTrackStatsList;
    }

    [StructLayout(LayoutKind.Sequential)]
    public struct QNRemoteAudioTrackStatsPInvoke
    {
        [MarshalAs(UnmanagedType.ByValTStr, SizeConst = QNRTCPInvoke.TrackIdStringLength)]
        public string TrackId;

        public int DownlinkBitrate;

        public int DownlinkLostrate;

        public int UplinkRtt;

        public int UplinkLostrate;
    }

    [StructLayout(LayoutKind.Sequential)]
    public struct QNRemoteAudioTrackStatsListPInvoke
    {
        public int Count;

        [MarshalAs(UnmanagedType.ByValArray, SizeConst = QNRTCPInvoke.RemoteAudioTrackCountCapacity, ArraySubType = UnmanagedType.Struct)]
        public QNRemoteAudioTrackStatsPInvoke[] RemoteAudioTrackStatsList;
    }

    [StructLayout(LayoutKind.Sequential)]
    public struct QNNetworkQualityPInvoke
    {
        [MarshalAs(UnmanagedType.ByValTStr, SizeConst = QNRTCPInvoke.UserIdStringLength)]
        public string UserId;

        public int UplinkNetworkGrade;

        public int DownlinkNetworkGrade;
    }

    [StructLayout(LayoutKind.Sequential)]
    public struct QNNetworkQualityListPInvoke
    {
        public int Count;

        [MarshalAs(UnmanagedType.ByValArray, SizeConst = QNRTCPInvoke.UserListCountCapacity, ArraySubType = UnmanagedType.Struct)]
        public QNNetworkQualityPInvoke[] QualityList;
    }

    [StructLayout(LayoutKind.Sequential)]
    public struct QNSendMessageUserIdPInvoke
    {
        [MarshalAs(UnmanagedType.ByValTStr, SizeConst = QNRTCPInvoke.UserIdStringLength)]
        public string UserId;
    }

    [StructLayout(LayoutKind.Sequential)]
    public struct QNSendMessagePInvoke
    {
        [MarshalAs(UnmanagedType.ByValArray, SizeConst = QNRTCPInvoke.UserListCountCapacity, ArraySubType = UnmanagedType.Struct)]
        public QNSendMessageUserIdPInvoke[] UserList;

        public int UserCount;

        [MarshalAs(UnmanagedType.ByValTStr, SizeConst = QNRTCPInvoke.MsgIdStringLength)]
        public string MessageId;

        [MarshalAs(UnmanagedType.ByValTStr, SizeConst = QNRTCPInvoke.MsgTextStringLength)]
        public string Message;
    }

    [StructLayout(LayoutKind.Sequential)]
    public struct QNCustomMessagePInvoke
    {
        [MarshalAs(UnmanagedType.ByValTStr, SizeConst = QNRTCPInvoke.MsgIdStringLength)]
        public string MsgId;

        [MarshalAs(UnmanagedType.ByValTStr, SizeConst = QNRTCPInvoke.MsgSendidStringLength)]
        public string MsgSendId;

        [MarshalAs(UnmanagedType.ByValTStr, SizeConst = QNRTCPInvoke.MsgTextStringLength)]
        public string MsgText;

        public int MsgTimestamp;
    }

    [StructLayout(LayoutKind.Sequential)]
    public struct QNDirectLiveStreamingConfigPInvoke
    {
        public IntPtr LocalAudioTrack;

        [MarshalAs(UnmanagedType.ByValTStr, SizeConst = QNRTCPInvoke.StreamIdStringLength)]
        public string StreamId;

        [MarshalAs(UnmanagedType.ByValTStr, SizeConst = QNRTCPInvoke.PublishUrlStringLength)]
        public string PublishUrl;
    }

    [StructLayout(LayoutKind.Sequential)]
    public struct QNTranscodingLiveStreamingConfigPInvoke
    {
        [MarshalAs(UnmanagedType.ByValTStr, SizeConst = QNRTCPInvoke.StreamIdStringLength)]
        public string StreamId;

        [MarshalAs(UnmanagedType.ByValTStr, SizeConst = QNRTCPInvoke.PublishUrlStringLength)]
        public string PublishUrl;

        public QNTranscodingLiveStreamingImagePInvoke MergeBackground;

        [MarshalAs(UnmanagedType.ByValArray, SizeConst = QNRTCPInvoke.WatermarkCountCapacity, ArraySubType = UnmanagedType.Struct)]
        public QNTranscodingLiveStreamingImagePInvoke[] MergeWatermark;

        public int WatermarkCount;

        public int Width;

        public int Height;

        public int Fps;

        public int Bitrate;

        public int MinBitrate;

        public int MaxBitrate;

        [MarshalAs(UnmanagedType.U1)]
        public bool IsHoldLastFrame;

        public int StretchMode;
    }

    [StructLayout(LayoutKind.Sequential)]
    public struct QNTranscodingLiveStreamingImagePInvoke
    {
        [MarshalAs(UnmanagedType.ByValTStr, SizeConst = QNRTCPInvoke.LayerUrlStringLength)]
        public string LayerUrl;

        public int X;

        public int Y;

        public int LayerWidth;

        public int LayerHeight;
    }

    [StructLayout(LayoutKind.Sequential)]
    public struct QNTranscodingLiveStreamingTrackPInvoke
    {
        [MarshalAs(UnmanagedType.ByValTStr, SizeConst = QNRTCPInvoke.TrackIdStringLength)]
        public string TrackId;
    }

    [StructLayout(LayoutKind.Sequential)]
    public struct QNTranscodingLiveStreamingTrackListPInvoke
    {
        public int Count;

        [MarshalAs(UnmanagedType.ByValArray, SizeConst = QNRTCPInvoke.TranscodingTrackCountCapacity, ArraySubType = UnmanagedType.Struct)]
        public QNTranscodingLiveStreamingTrackPInvoke[] TranscodingTrackList;
    }

    [StructLayout(LayoutKind.Sequential)]
    public struct QNLiveStreamingErrorInfoPInvoke
    {
        public int Type;

        public int Code;

        [MarshalAs(UnmanagedType.ByValTStr, SizeConst = QNRTCPInvoke.MsgTextStringLength)]
        public string Message;
    }

    public class QNRTCPInvoke
    {
        #region DllImport
#if UNITY_IOS && !UNITY_EDITOR
        public const string MyLibName = "__Internal";
#else
        public const string MyLibName = "qnrtc-c-wrapper";
#endif
        #endregion

        public const int LocalTrackCountCapacity = 5;
        public const int RemoteTrackCountCapacity = 60;
        public const int LocalAudioTrackCountCapacity = 2;
        public const int RemoteAudioTrackCountCapacity = 2;
        public const int UserListCountCapacity = 30;
        public const int MediaRelayCountCapacity = 20;
        public const int WatermarkCountCapacity = 5;
        public const int TranscodingTrackCountCapacity = 20;

        public const int TagStringLength = 100;
        public const int ErrorMessageStringLength = 1000;
        public const int RoomNameStringLength = 100;
        public const int RoomTokenStringLength = 1000;
        public const int MsgIdStringLength = 100;
        public const int MsgSendidStringLength = 100;
        public const int MsgTextStringLength = 1000;
        public const int UserIdStringLength = 100;
        public const int UserDataStringLength = 100;
        public const int TrackIdStringLength = 100;
        public const int StreamIdStringLength = 100;
        public const int PublishUrlStringLength = 1000;
        public const int LayerUrlStringLength = 1000;
    }
}

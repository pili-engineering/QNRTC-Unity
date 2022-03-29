using System;
namespace qnrtc
{
    #region QNRTC
    public delegate void QNRTCOnAudioRouteChanged(int device);
    #endregion

    #region QNRTCClient
    public delegate void QNRTCClientOnConnectionStateChanged(int state, IntPtr infoPtr);

    public delegate void QNRTCClientOnUserJoined(string remoteUserId, string userData);

    public delegate void QNRTCClientOnUserLeft(string remoteUserId);

    public delegate void QNRTCClientOnUserReconnecting(string remoteUserId);

    public delegate void QNRTCClientOnUserReconnected(string remoteUserId);

    public delegate void QNRTCClientOnUserPublished(string remoteUserId, ref QNRemoteTrackListPInvoke remoteTrackListPInvoke);

    public delegate void QNRTCClientOnUserUnpublished(string remoteUserId, ref QNRemoteTrackListPInvoke remoteTrackListPInvoke);

    public delegate void QNRTCClientOnSubscribed(string remoteUserId, ref QNRemoteTrackListPInvoke remoteAudioTrackListPInvoke);

    public delegate void QNRTCClientOnMessageReceived(ref QNCustomMessagePInvoke messagePInvoke);

    public delegate void QNRTCClientOnMediaRelayStateChanged(string relayRoom, int state);

    public delegate void QNRTCClientOnClientRoleResult(int newRole);

    public delegate void QNRTCClientOnClientRoleError(int errorCode, string errorMessage);

    public delegate void QNRTCClientOnPublished();

    public delegate void QNRTCClientOnPublishError(int errorCode, string errorMessage);

    public delegate void QNLiveStreamingOnStarted(string streamId);

    public delegate void QNLiveStreamingOnStopped(string streamId);

    public delegate void QNLiveStreamingOnTranscodingTracksUpdated(string streamId);

    public delegate void QNLiveStreamingOnError(string streamId, ref QNLiveStreamingErrorInfoPInvoke info_p_invoke);

    public delegate void QNRTCClientOnRemoteAudioMixedFrame(IntPtr dataPtr, uint dataSize, uint bitsPerSample, uint sampleRate, uint channels);

    public delegate void QNRTCClientOnNetworkQualityNotified(IntPtr qualityPtr);

    public delegate void QNRTCClientOnMediaRelayResult(ref QNMediaRelayResultListPInvoke resultListPInvoke);

    public delegate void QNRTCClientOnMediaRelayError(int errorCode, string errorMessage);
    #endregion

    #region QNTrack
    public delegate void QNRTCTrackOnAudioFrame(string userId, string trackId, IntPtr dataPtr, uint dataSize, uint bitsPerSample, uint sampleRate, uint channels);

    public delegate void QNRTCTrackOnMuteStateChanged(string userId, string trackId, bool muted);
    #endregion
}

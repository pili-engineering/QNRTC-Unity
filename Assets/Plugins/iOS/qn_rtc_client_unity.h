#ifndef QN_RTC_CLIENT_UNITY_H
#define QN_RTC_CLIENT_UNITY_H

#include <stdint.h>
#include "QNRTCKit/core/qn_rtc_client_interface.h"
#include "qn_rtc_event_unity.h"
#include "qn_rtc_p_invoke_unity.h"

#define QNRTC_UNITY_EXTERN extern "C"

using namespace qiniu;

QNRTC_UNITY_EXTERN void QNRTCClientSetClientRole(
    void* instance, 
    int client_role, 
    QNRTCClientOnClientRoleResult on_client_role_result,
    QNRTCClientOnClientRoleError on_client_role_error
);

QNRTC_UNITY_EXTERN void QNRTCClientSetAutoSubscribe(void* instance, bool auto_subscribe);

QNRTC_UNITY_EXTERN void QNRTCClientJoin(void* instance, const char* token, const char* user_data);

QNRTC_UNITY_EXTERN void QNRTCClientLeave(void* instance);

QNRTC_UNITY_EXTERN void QNRTCClientPublish(
    void* instance,
    QNLocalTrackListPInvoke* publish_track_list_p_invoke,
    QNRTCClientOnPublished on_published,
    QNRTCClientOnPublishError on_publish_error
);

QNRTC_UNITY_EXTERN void QNRTCClientUnPublish(void* instance, QNLocalTrackListPInvoke* unpublish_track_list_p_invoke);

QNRTC_UNITY_EXTERN void QNRTCClientSubscribe(void* instance, QNRemoteTrackListPInvoke* subscribe_track_list_p_invoke);

QNRTC_UNITY_EXTERN void QNRTCClientUnSubscribe(void* instance, QNRemoteTrackListPInvoke* unsubscribe_track_list_p_invoke);

QNRTC_UNITY_EXTERN void QNRTCClientSendMessage(void* instance, QNSendMessagePInvoke* send_message_p_invoke);

QNRTC_UNITY_EXTERN void QNRTCClientSetLiveStreamingListener(
    void* instance, 
    QNLiveStreamingOnStarted on_live_streaming_started,
    QNLiveStreamingOnStopped on_live_streaming_stopped,
    QNLiveStreamingOnTranscodingTracksUpdated on_live_streaming_transcoding_tracks_updated,
    QNLiveStreamingOnError on_live_streaming_error
);

QNRTC_UNITY_EXTERN void QNRTCClientStartDirectLiveStreaming(void* instance, QNDirectLiveStreamingConfigPInvoke* config_p_invoke);

QNRTC_UNITY_EXTERN void QNRTCClientStopDirectLiveStreaming(void* instance, QNDirectLiveStreamingConfigPInvoke* config_p_invoke);

QNRTC_UNITY_EXTERN void QNRTCClientStartTranscodingLiveStreaming(void* instance, QNTranscodingLiveStreamingConfigPInvoke* config_p_invoke);

QNRTC_UNITY_EXTERN void QNRTCClientStopTranscodingLiveStreaming(void* instance, QNTranscodingLiveStreamingConfigPInvoke* config_p_invoke);

QNRTC_UNITY_EXTERN void QNRTCClientSetTranscodingLiveStreamingTracks(void* instance, const char* stream_id, QNTranscodingLiveStreamingTrackListPInvoke* transcoding_track_list_p_invoke);

QNRTC_UNITY_EXTERN void QNRTCClientRemoveTranscodingLiveStreamingTracks(void* instance, const char* stream_id, QNTranscodingLiveStreamingTrackListPInvoke* transcoding_track_list_p_invoke);

QNRTC_UNITY_EXTERN void QNRTCClientSetRemoteAudioMixedFrameListener(
    void* instance,
    QNRTCClientOnRemoteAudioMixedFrame on_remote_audio_mixed_frame
);

QNRTC_UNITY_EXTERN void QNRTCClientGetPublishedTracks(void* instance, QNLocalTrackListPInvoke* published_track_list_p_invoke);

QNRTC_UNITY_EXTERN void QNRTCClientGetRemoteUser(void* instance, const char* user_id, QNRemoteUserPInvoke* remote_user_p_invoke);

QNRTC_UNITY_EXTERN void QNRTCClientGetRemoteUserList(void* instance, QNRemoteUserListPInvoke* remote_user_list_p_invoke);

QNRTC_UNITY_EXTERN void QNRTCClientGetLocalAudioTrackStats(void* instance, QNLocalAudioTrackStatsListPInvoke* local_audio_track_stats_list_p_invoke);

QNRTC_UNITY_EXTERN void QNRTCClientGetRemoteAudioTrackStats(void* instance, QNRemoteAudioTrackStatsListPInvoke* remote_audio_track_stats_list_p_invoke);

QNRTC_UNITY_EXTERN void QNRTCClientSetNetworkQualityListener(
    void* instance,
    QNRTCClientOnNetworkQualityNotified on_network_quality_notified 
);

QNRTC_UNITY_EXTERN void QNRTCClientGetUserNetworkQuality(void* instance, QNNetworkQualityListPInvoke* quality_list_p_invoke);

QNRTC_UNITY_EXTERN void QNRTCClientStartMediaRelay(
    void* instance,
    QNMediaRelayConfigurationPInvoke* configuration_p_invoke,
    QNRTCClientOnMediaRelayResult on_media_relay_result,
    QNRTCClientOnMediaRelayError on_media_relay_error
);

QNRTC_UNITY_EXTERN void QNRTCClientUpdateMediaRelay(
    void* instance,
    QNMediaRelayConfigurationPInvoke* configuration_p_invoke,
    QNRTCClientOnMediaRelayResult on_media_relay_result,
    QNRTCClientOnMediaRelayError on_media_relay_error
);

QNRTC_UNITY_EXTERN void QNRTCClientStopMediaRelay(
    void* instance,
    QNRTCClientOnMediaRelayResult on_media_relay_result,
    QNRTCClientOnMediaRelayError on_media_relay_error
);

#endif

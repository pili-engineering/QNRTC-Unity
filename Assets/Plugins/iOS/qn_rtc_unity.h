#ifndef QN_RTC_UNITY_H
#define QN_RTC_UNITY_H

#include <stdint.h>
#include "QNRTCKit/core/qn_rtc_interface.h"
#include "qn_rtc_event_unity.h"
#include "qn_rtc_p_invoke_unity.h"

#define QNRTC_UNITY_EXTERN extern "C"

using namespace qiniu;

QNRTC_UNITY_EXTERN const char* QNRTCGetVersion(void);

QNRTC_UNITY_EXTERN int32_t QNRTCSetLogFile(QNLogLevel level, const char* dir_name_c_str, const char* file_name_c_str);

QNRTC_UNITY_EXTERN void QNRTCInit(
    QNRTCSettingPInvoke* setting_p_invoke,
    QNRTCOnAudioRouteChanged on_audio_route_changed
);

QNRTC_UNITY_EXTERN void QNRTCDeInit(void);

QNRTC_UNITY_EXTERN void* QNRTCCreateClient(
    QNRTCClientOnConnectionStateChanged on_connection_state_changed,
    QNRTCClientOnUserJoined on_user_joined,
    QNRTCClientOnUserLeft on_user_left,
    QNRTCClientOnUserReconnecting on_user_reconnecting,
    QNRTCClientOnUserReconnected on_user_reconnected,
    QNRTCClientOnUserPublished on_user_published,
    QNRTCClientOnUserUnpublished on_user_unpublished,
    QNRTCClientOnSubscribed on_subscribed,
    QNRTCClientOnMessageReceived on_message_received,
    QNRTCClientOnMediaRelayStateChanged on_media_relay_state_changed
);

QNRTC_UNITY_EXTERN void* QNRTCCreateClientWithConfig(
    QNRTCClientConfigPInvoke* client_config_p_invoke,
    QNRTCClientOnConnectionStateChanged on_connection_state_changed,
    QNRTCClientOnUserJoined on_user_joined,
    QNRTCClientOnUserLeft on_user_left,
    QNRTCClientOnUserReconnecting on_user_reconnecting,
    QNRTCClientOnUserReconnected on_user_reconnected,
    QNRTCClientOnUserPublished on_user_published,
    QNRTCClientOnUserUnpublished on_user_unpublished,
    QNRTCClientOnSubscribed on_subscribed,
    QNRTCClientOnMessageReceived on_message_received,
    QNRTCClientOnMediaRelayStateChanged on_media_relay_state_changed
);

QNRTC_UNITY_EXTERN void QNRTCDestroyClient(void* instance);

QNRTC_UNITY_EXTERN void* QNRTCCreateMicrophoneAudioTrack(QNMicrophoneAudioTrackConfigPInvoke* microphone_audio_track_config_p_invoke);

QNRTC_UNITY_EXTERN void* QNRTCCreateCustomAudioTrack(QNCustomAudioTrackConfigPInvoke* custom_audio_track_config_p_invoke);

QNRTC_UNITY_EXTERN void QNRTCDestroyLocalTrack(void* instance);

QNRTC_UNITY_EXTERN void QNRTCSetAudioRouteToSpeakerphone(bool audio_route_to_speakerphone);

QNRTC_UNITY_EXTERN void QNRTCSetAudioPlayMute(bool muted);

QNRTC_UNITY_EXTERN bool QNRTCIsAudioPlayMute(void);

#endif

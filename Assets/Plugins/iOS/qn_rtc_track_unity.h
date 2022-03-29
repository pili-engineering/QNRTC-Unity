#ifndef QN_RTC_TRACK_UNITY_H
#define QN_RTC_TRACK_UNITY_H

#include <stdint.h>
#include "QNRTCKit/core/qn_track_interface.h"
#include "qn_rtc_event_unity.h"

#define QNRTC_UNITY_EXTERN extern "C"

using namespace qiniu;

QNRTC_UNITY_EXTERN const char* QNRTCTrackGetTrackID(void* instance);

QNRTC_UNITY_EXTERN const char* QNRTCTrackGetUserID(void* instance);

QNRTC_UNITY_EXTERN const char* QNRTCTrackGetTag(void* instance);

QNRTC_UNITY_EXTERN bool QNRTCTrackIsMuted(void* instance);

QNRTC_UNITY_EXTERN void QNRTCTrackSetMuted(void* instance, bool muted);

QNRTC_UNITY_EXTERN void QNRTCTrackSetAudioFrameListenerEnabled(
    void* instance,
    bool is_enabled,
    bool is_local,
    QNRTCTrackOnAudioFrame on_audio_frame
);

QNRTC_UNITY_EXTERN void QNRTCTrackSetVolume(void* instance, bool is_local, double volume);

QNRTC_UNITY_EXTERN float QNRTCTrackGetVolumeLevel(void* instance, bool is_local);

QNRTC_UNITY_EXTERN int32_t QNRTCTrackPushAudioFrame( 
    void* instance, 
    uint8_t* data,
    uint32_t data_size, 
    uint32_t bits_per_sample, 
    uint32_t sample_rate, 
    uint32_t channels
);

QNRTC_UNITY_EXTERN void QNRTCTrackSetTrackInfoChangedListenerEnabled(
    void* instance,
    bool is_enabled,
    QNRTCTrackOnMuteStateChanged on_mute_state_changed
);

QNRTC_UNITY_EXTERN bool QNRTCTrackIsSubscribed(void* instance);

#endif

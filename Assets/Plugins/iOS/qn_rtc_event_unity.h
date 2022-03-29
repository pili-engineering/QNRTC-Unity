#ifndef QN_RTC_EVENT_UNITY_H
#define QN_RTC_EVENT_UNITY_H

#include "QNRTCKit/core/qn_rtc_interface.h"
#include "QNRTCKit/core/qn_rtc_client_interface.h"
#include "QNRTCKit/core/qn_track_interface.h"
#include "qn_rtc_p_invoke_unity.h"
#include <string>
#include <mutex>
#include <functional>
#include <queue>

using namespace qiniu;

// function signature
typedef void(*QNRTCOnAudioRouteChanged)(QNAudioDevice device);

typedef void(*QNRTCClientOnConnectionStateChanged)(QNConnectionState state, void* info_ptr);

typedef void(*QNRTCClientOnUserJoined)(const char* remote_user_id, const char* user_data);

typedef void(*QNRTCClientOnUserLeft)(const char* remote_user_id);

typedef void(*QNRTCClientOnUserReconnecting)(const char* remote_user_id);

typedef void(*QNRTCClientOnUserReconnected)(const char* remote_user_id);
 
typedef void(*QNRTCClientOnUserPublished)(const char* remote_user_id, QNRemoteTrackListPInvoke* remote_track_list_p_invoke);

typedef void(*QNRTCClientOnUserUnpublished)(const char* remote_user_id, QNRemoteTrackListPInvoke* remote_track_list_p_invoke);

typedef void(*QNRTCClientOnSubscribed)(const char* remote_user_id, QNRemoteTrackListPInvoke* remote_audio_track_list_p_invoke);

typedef void(*QNRTCClientOnMessageReceived)(QNCustomMessagePInvoke* message_p_invoke);

typedef void(*QNRTCClientOnMediaRelayStateChanged)(const char* relay_room, QNMediaRelayState state);

typedef void(*QNRTCClientOnClientRoleResult)(QNClientRole new_role);

typedef void(*QNRTCClientOnClientRoleError)(int error_code, const char* error_message);

typedef void(*QNRTCClientOnPublished)(void);

typedef void(*QNRTCClientOnPublishError)(int error_code, const char* error_message);

typedef void(*QNLiveStreamingOnStarted)(const char* stream_id);

typedef void(*QNLiveStreamingOnStopped)(const char* stream_id);

typedef void(*QNLiveStreamingOnTranscodingTracksUpdated)(const char* stream_id);

typedef void(*QNLiveStreamingOnError)(const char* stream_id, QNLiveStreamingErrorInfoPInvoke* info_p_invoke);

typedef void(*QNRTCClientOnRemoteAudioMixedFrame)(const uint8_t* data, uint32_t data_size, uint32_t bits_per_sample, uint32_t sample_rate, uint32_t channels);

typedef void(*QNRTCClientOnNetworkQualityNotified)(void* quality);

typedef void(*QNRTCClientOnMediaRelayResult)(QNMediaRelayResultListPInvoke* result_list_p_invoke);

typedef void(*QNRTCClientOnMediaRelayError)(int error_code, const char* error_message);

typedef void(*QNRTCTrackOnAudioFrame)(const char* user_id, const char* track_id, const uint8_t* data, uint32_t data_size, uint32_t bits_perSample, uint32_t sample_rate, uint32_t channels);

typedef void(*QNRTCTrackOnMuteStateChanged)(const char* user_id, const char* track_id, bool muted);

// Impl
class QNRTCEventListenerImpl : public QNRTCEventListener {
public:
    inline void SetAudioRouteChangedCallback(QNRTCOnAudioRouteChanged callback) {
        on_audio_route_changed_ = callback;
    }

    virtual void OnVideoDeviceStateChanged(QNVideoDeviceState device_state, const std::string& device_name) {}

    virtual void OnAudioDeviceStateChanged(QNAudioDeviceState device_state, const std::string& device_name) {}

    virtual void OnSreenCaptureError(int error_code, const std::string& error_message) {}

    virtual void OnAudioRouteChanged(QNAudioDevice device);

    virtual ~QNRTCEventListenerImpl() {
        on_audio_route_changed_ = nullptr;
    }

private:
    QNRTCOnAudioRouteChanged on_audio_route_changed_;
};

class QNClientEventListenerImpl : public QNClientEventListener {
public:
    inline void SetConnectionStateChangedCallback(QNRTCClientOnConnectionStateChanged callback) {
        on_connection_state_changed_ = callback;
    }

    inline void SetUserJoinedCallback(QNRTCClientOnUserJoined callback) {
        on_user_joined_ = callback;
    }

    inline void SetUserLeftCallback(QNRTCClientOnUserLeft callback) {
        on_user_left_ = callback;
    }

    inline void SetUserReconnectingCallback(QNRTCClientOnUserReconnecting callback) {
        on_user_reconnecting_ = callback;
    }

    inline void SetUserReconnectedCallback(QNRTCClientOnUserReconnected callback) {
        on_user_reconnected_ = callback;
    }

    inline void SetUserPublishedCallback(QNRTCClientOnUserPublished callback) {
        on_user_published_ = callback;
    }

    inline void SetUserUnpublishedCallback(QNRTCClientOnUserUnpublished callback) {
        on_user_unpublished_ = callback;
    }

    inline void SetSubscribedCallback(QNRTCClientOnSubscribed callback) {
        on_subscribed_ = callback;
    }

    inline void SetMessageReceivedCallback(QNRTCClientOnMessageReceived callback) {
        on_message_received_ = callback;
    }

    inline void SetMediaRelayStateChangedCallback(QNRTCClientOnMediaRelayStateChanged callback) {
        on_media_relay_state_changed_ = callback;
    }

    virtual void OnConnectionStateChanged(QNConnectionState state, const QNConnectionDisconnectedInfo* info);

    virtual void OnUserJoined(const std::string& remote_user_id, const std::string& user_data);

    virtual void OnUserLeft(const std::string& remote_user_id);

    virtual void OnUserReconnecting(const std::string& remote_user_id);

    virtual void OnUserReconnected(const std::string& remote_user_id);

    virtual void OnUserPublished(const std::string& remote_user_id, const RemoteTrackList& track_list);

    virtual void OnUserUnpublished(const std::string& remote_user_id, const RemoteTrackList& track_list);

    virtual void OnSubscribed(const std::string& remote_user_id, const RemoteAudioTrackList& remote_audio_track_list, const RemoteVideoTrackList& remote_video_track_list);

    virtual void OnMessageReceived(const QNCustomMessage& message);

    virtual void OnMediaRelayStateChanged(const std::string& relay_room, const QNMediaRelayState state);

    virtual ~QNClientEventListenerImpl() {
        on_connection_state_changed_ = nullptr;
        on_user_joined_ = nullptr;
        on_user_left_ = nullptr;
        on_user_reconnecting_ = nullptr;
        on_user_reconnected_ = nullptr;
        on_user_published_ = nullptr;
        on_user_unpublished_ = nullptr;
        on_subscribed_ = nullptr;
        on_message_received_ = nullptr;
        on_media_relay_state_changed_ = nullptr;
    }

private:
    QNRTCClientOnConnectionStateChanged on_connection_state_changed_;
    QNRTCClientOnUserJoined on_user_joined_;
    QNRTCClientOnUserLeft on_user_left_;
    QNRTCClientOnUserReconnecting on_user_reconnecting_;
    QNRTCClientOnUserReconnected on_user_reconnected_;
    QNRTCClientOnUserPublished on_user_published_;
    QNRTCClientOnUserUnpublished on_user_unpublished_;
    QNRTCClientOnSubscribed on_subscribed_;
    QNRTCClientOnMessageReceived on_message_received_;
    QNRTCClientOnMediaRelayStateChanged on_media_relay_state_changed_;
};

class QNClientRoleListenerImpl : public QNClientRoleListener {
public:
    inline void SetClientRoleResultCallback(QNRTCClientOnClientRoleResult callback) {
        on_client_role_result_ = callback;
    }

    inline void SetClientRoleErrorCallback(QNRTCClientOnClientRoleError callback) {
        on_client_role_error_ = callback;
    }

    virtual void OnClientRoleResult(QNClientRole new_role);

    virtual void OnClientRoleError(int error_code, const std::string& error_message);

    virtual ~QNClientRoleListenerImpl() {
        on_client_role_result_ = nullptr;
        on_client_role_error_ = nullptr;
    }

private:
    QNRTCClientOnClientRoleResult on_client_role_result_;
    QNRTCClientOnClientRoleError on_client_role_error_;
};

class QNPublishResultCallbackImpl : public QNPublishResultCallback {
public:
    inline void SetPublishedCallback(QNRTCClientOnPublished callback) {
        on_published_ = callback;
    }

    inline void SetPublishError(QNRTCClientOnPublishError callback) {
        on_publish_error_ = callback;
    }

    virtual void OnPublished();

    virtual void OnPublishError(int error_code, const std::string& error_message);

    virtual ~QNPublishResultCallbackImpl() {
        on_published_ = nullptr;
        on_publish_error_ = nullptr;
    }

private:
    QNRTCClientOnPublished on_published_;
    QNRTCClientOnPublishError on_publish_error_;
};

class QNLiveStreamingListenerImpl : public QNLiveStreamingListener {
public:
    inline void SetStartedCallback(QNLiveStreamingOnStarted callback) {
        on_started_ = callback;
    }

    inline void SetStoppedCallback(QNLiveStreamingOnStopped callback) {
        on_stopped_ = callback;
    }

    inline void SetTranscodingTracksUpdatedCallback(QNLiveStreamingOnTranscodingTracksUpdated callback) {
        on_transcoding_tracks_updated_ = callback;
    }

    inline void SetErrorCallback(QNLiveStreamingOnError callback) {
        on_error_ = callback;
    }

    virtual void OnStarted(const std::string& stream_id);

    virtual void OnStopped(const std::string& stream_id);

    virtual void OnTranscodingTracksUpdated(const std::string& stream_id);

    virtual void OnLiveStreamingError(const std::string& stream_id, const QNLiveStreamingErrorInfo& error_info);
    
    virtual ~QNLiveStreamingListenerImpl() {
        on_started_ = nullptr;
        on_stopped_ = nullptr;
        on_transcoding_tracks_updated_ = nullptr;
        on_error_ = nullptr;
    }

private:
    QNLiveStreamingOnStarted on_started_;
    QNLiveStreamingOnStopped on_stopped_;
    QNLiveStreamingOnTranscodingTracksUpdated on_transcoding_tracks_updated_;
    QNLiveStreamingOnError on_error_;
};

class QNRemoteAudioMixedFrameListenerImpl : public QNRemoteAudioMixedFrameListener {
public:
    inline void SetRemoteAudioMixedFrameCallback(QNRTCClientOnRemoteAudioMixedFrame callback) {
        on_remote_audio_mixed_frame_ = callback;
    }
    
    virtual void OnRemoteAudioMixedFrame(const uint8_t* data, uint32_t data_size, uint32_t bits_per_sample, uint32_t sample_rate, uint32_t channels);

    virtual ~QNRemoteAudioMixedFrameListenerImpl() {
        on_remote_audio_mixed_frame_ = nullptr;
    }

private:
    QNRTCClientOnRemoteAudioMixedFrame on_remote_audio_mixed_frame_;
};

class QNNetworkQualityListenerImpl : public QNNetworkQualityListener {
public:
    inline void SetNetworkQualityNotifiedCallback(QNRTCClientOnNetworkQualityNotified callback) {
        on_network_quality_notified_ = callback;
    }

    virtual void OnNetworkQualityNotified(const QNNetworkQuality& quality);

    virtual ~QNNetworkQualityListenerImpl() {
        on_network_quality_notified_ = nullptr;
    }

private:
    QNRTCClientOnNetworkQualityNotified on_network_quality_notified_;
};

class QNMediaRelayListenerImpl : public QNMediaRelayListener {
public:
    inline void SetMediaRelayResultCallback(QNRTCClientOnMediaRelayResult callback) {
        on_media_relay_result_ = callback;
    }

    inline void SetMediaRelayErrorCallback(QNRTCClientOnMediaRelayError callback) {
        on_media_relay_error_ = callback;
    }
    
    virtual void OnMediaRelayResult(std::map<std::string, QNMediaRelayState> state_map);

    virtual void OnMediaRelayError(int error_code, const std::string& error_message);

    virtual ~QNMediaRelayListenerImpl() {
        on_media_relay_result_ = nullptr;
        on_media_relay_error_ = nullptr;
    }

private:
    QNRTCClientOnMediaRelayResult on_media_relay_result_;
    QNRTCClientOnMediaRelayError on_media_relay_error_;
};

class QNAudioFrameListenerImpl : public QNAudioFrameListener {
public:
    inline void SetAudioFrameCallback(QNRTCTrackOnAudioFrame callback) {
        on_audio_frame_ = callback;
    }
    
    virtual void OnAudioFrame(
        const string& user_id,
        const string& track_id, 
        const uint8_t* data, 
        uint32_t data_size, 
        uint32_t bits_per_sample, 
        uint32_t sample_rate, 
        uint32_t channels
    );

    virtual ~QNAudioFrameListenerImpl() {
        on_audio_frame_ = nullptr;
    }

private:
    QNRTCTrackOnAudioFrame on_audio_frame_;
};

class QNTrackInfoChangedListenerImpl : public QNTrackInfoChangedListener {
public:
    inline void SetMuteStateChangedCallback(QNRTCTrackOnMuteStateChanged callback) {
        on_mute_state_changed_ = callback;
    }
    
    virtual void OnVideoProfileChanged(const std::string& user_id, const std::string& track_id, QNTrackProfile profile) {}

    virtual void OnMuteStateChanged(const std::string& user_id, const std::string& track_id, bool muted);

    virtual ~QNTrackInfoChangedListenerImpl() {
        on_mute_state_changed_ = nullptr;
    }

private:
    QNRTCTrackOnMuteStateChanged on_mute_state_changed_;
};

#endif

#include "qn_rtc_unity.h"
#include <iostream>

extern QNRTCEventListenerImpl* qnrtc_event_listener_impl_;
extern QNClientEventListenerImpl* qnrtc_client_event_listener_impl_;
extern void UpdateCallback();
extern void DeinitListeners();
std::string QNRTCGetString(const char* c_str);

static char* version_c_str_ = nullptr;

const char* QNRTCGetVersion(void) {
    if (nullptr == version_c_str_) {
        std::string version;
        QNRTC::GetVersion(version);
        version_c_str_ = new char [version.size() + 1];
        std::strcpy(version_c_str_, version.c_str());
    }
    return version_c_str_;
}

int32_t QNRTCSetLogFile(QNLogLevel level, const char* dir_name_c_str, const char* file_name_c_str) {
    return QNRTC::SetLogFile(level, QNRTCGetString(dir_name_c_str), QNRTCGetString(file_name_c_str));
}

void QNRTCInit(
    QNRTCSettingPInvoke* setting_p_invoke,
    QNRTCOnAudioRouteChanged on_audio_route_changed
) {
    if (nullptr == setting_p_invoke) return;

    std::cout << "Wrapper QNRTCInit: " << setting_p_invoke << std::endl;

    QNRTCSetting setting;
    setting.policy = (QNTransportPolicy)setting_p_invoke->policy;
    setting.is_aec3_enabled = setting_p_invoke->is_aec3_enabled;
    setting.is_audio_redundant_enabled = setting_p_invoke->is_audio_redundant_enabled;

    std::cout << "QNRTCInit: policy " << setting.policy
    << ", is_aec3_enabled " << setting.is_aec3_enabled
    << ", is_audio_redundant_enabled " << setting.is_audio_redundant_enabled << std::endl;

    if (nullptr == qnrtc_event_listener_impl_) {
        qnrtc_event_listener_impl_ = new QNRTCEventListenerImpl();
        qnrtc_event_listener_impl_->SetAudioRouteChangedCallback(on_audio_route_changed);
    }

    QNRTC::Init(setting, qnrtc_event_listener_impl_);
}

void QNRTCDeInit(void) {
    std::cout << "Wrapper QNRTCDeInit" << std::endl;
    QNRTC::DeInint();

    if (nullptr != version_c_str_) {
        delete [] version_c_str_;
        version_c_str_ = nullptr;
    }
    
    DeinitListeners();
}

void* QNRTCCreateClient(
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
    ) {
    if (nullptr == qnrtc_client_event_listener_impl_) {
        qnrtc_client_event_listener_impl_ = new QNClientEventListenerImpl();
        qnrtc_client_event_listener_impl_->SetConnectionStateChangedCallback(on_connection_state_changed);
        qnrtc_client_event_listener_impl_->SetUserJoinedCallback(on_user_joined);
        qnrtc_client_event_listener_impl_->SetUserLeftCallback(on_user_left);
        qnrtc_client_event_listener_impl_->SetUserReconnectingCallback(on_user_reconnecting);
        qnrtc_client_event_listener_impl_->SetUserReconnectedCallback(on_user_reconnected);
        qnrtc_client_event_listener_impl_->SetUserPublishedCallback(on_user_published);
        qnrtc_client_event_listener_impl_->SetUserUnpublishedCallback(on_user_unpublished);
        qnrtc_client_event_listener_impl_->SetSubscribedCallback(on_subscribed);
        qnrtc_client_event_listener_impl_->SetMessageReceivedCallback(on_message_received);
        qnrtc_client_event_listener_impl_->SetMediaRelayStateChangedCallback(on_media_relay_state_changed);
    }

    QNRTCClient *client = QNRTC::CreateClient(qnrtc_client_event_listener_impl_);
    std::cout << "Wrapper CreateClient: " << client << std::endl;
    return client;
}

void* QNRTCCreateClientWithConfig(
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
) {
    if (nullptr == client_config_p_invoke) return nullptr;

    QNRTCClientConfig config;
    config.mode = (QNClientMode)client_config_p_invoke->mode;
    config.role = (QNClientRole)client_config_p_invoke->role;

    std::cout << "QNRTCClientConfig: "
    << " mode " << config.mode
    << ", role " << config.role
    << std::endl;
    
    if (nullptr == qnrtc_client_event_listener_impl_) {
        qnrtc_client_event_listener_impl_ = new QNClientEventListenerImpl();
        qnrtc_client_event_listener_impl_->SetConnectionStateChangedCallback(on_connection_state_changed);
        qnrtc_client_event_listener_impl_->SetUserJoinedCallback(on_user_joined);
        qnrtc_client_event_listener_impl_->SetUserLeftCallback(on_user_left);
        qnrtc_client_event_listener_impl_->SetUserReconnectingCallback(on_user_reconnecting);
        qnrtc_client_event_listener_impl_->SetUserReconnectedCallback(on_user_reconnected);
        qnrtc_client_event_listener_impl_->SetUserPublishedCallback(on_user_published);
        qnrtc_client_event_listener_impl_->SetUserUnpublishedCallback(on_user_unpublished);
        qnrtc_client_event_listener_impl_->SetSubscribedCallback(on_subscribed);
        qnrtc_client_event_listener_impl_->SetMessageReceivedCallback(on_message_received);
        qnrtc_client_event_listener_impl_->SetMediaRelayStateChangedCallback(on_media_relay_state_changed);
    }

    QNRTCClient* client = QNRTC::CreateClient(config, qnrtc_client_event_listener_impl_);
    std::cout << "Wrapper CreateClient: " << client << std::endl;
    return client;
}

void QNRTCDestroyClient(void* instance) {
    QNRTCClient* client = static_cast<QNRTCClient *>(instance);
    if (nullptr == client) return;
    std::cout << "Wrapper DestroyClient: " << client << std::endl;

    QNRTC::DestroyClient(client);

    if (nullptr != qnrtc_event_listener_impl_) {
        delete qnrtc_event_listener_impl_;
        qnrtc_event_listener_impl_ = nullptr;
    }

    if (nullptr != qnrtc_client_event_listener_impl_) {
        delete qnrtc_client_event_listener_impl_;
        qnrtc_client_event_listener_impl_ = nullptr;
    }
}

void* QNRTCCreateMicrophoneAudioTrack(QNMicrophoneAudioTrackConfigPInvoke* microphone_audio_track_config_p_invoke) {
    if (nullptr == microphone_audio_track_config_p_invoke) return nullptr;
    std::cout << "QNRTCCreateMicrophoneAudioTrack: " << microphone_audio_track_config_p_invoke << std::endl;
    
    QNAudioQuality audio_quality;
    audio_quality.sample_rate = microphone_audio_track_config_p_invoke->audio_quality.sample_rate;
    audio_quality.channel_count = microphone_audio_track_config_p_invoke->audio_quality.channel_count;
    audio_quality.bits_per_sample = microphone_audio_track_config_p_invoke->audio_quality.bits_per_sample;
    audio_quality.bitrate = microphone_audio_track_config_p_invoke->audio_quality.bitrate;
    
    QNMicrophoneAudioTrackConfig config;
    config.audio_quality = audio_quality;
    config.tag = QNRTCGetString(microphone_audio_track_config_p_invoke->tag);

    std::cout << "QNMicrophoneAudioTrackConfig: sample_rate " << config.audio_quality.sample_rate
    << ", channel_count " << config.audio_quality.channel_count
    << ", bits_per_sample " << config.audio_quality.bits_per_sample
    << ", bitrate " << config.audio_quality.bitrate
    << ", tag " << config.tag << std::endl;

    QNMicrophoneAudioTrack* microphone_audio_track = QNRTC::CreateMicrophoneAudioTrack(config);
    std::cout << "Wrapper QNRTCCreateMicrophoneAudioTrack: " << microphone_audio_track << std::endl;
    return microphone_audio_track;
}

void* QNRTCCreateCustomAudioTrack(QNCustomAudioTrackConfigPInvoke* custom_audio_track_config_p_invoke) {
    if (nullptr == custom_audio_track_config_p_invoke) return nullptr;
    std::cout << "QNRTCCreateCustomAudioTrack: " << custom_audio_track_config_p_invoke << std::endl;
    
    QNAudioQuality audio_quality;
    audio_quality.sample_rate = custom_audio_track_config_p_invoke->audio_quality.sample_rate;
    audio_quality.channel_count = custom_audio_track_config_p_invoke->audio_quality.channel_count;
    audio_quality.bits_per_sample = custom_audio_track_config_p_invoke->audio_quality.bits_per_sample;
    audio_quality.bitrate = custom_audio_track_config_p_invoke->audio_quality.bitrate;

    QNCustomAudioTrackConfig config;
    config.audio_quality = audio_quality;
    config.tag = QNRTCGetString(custom_audio_track_config_p_invoke->tag);

    std::cout << "QNCustomAudioTrackConfig: sample_rate " << config.audio_quality.sample_rate
    << ", channel_count " << config.audio_quality.channel_count
    << ", bits_per_sample " << config.audio_quality.bits_per_sample
    << ", bitrate " << config.audio_quality.bitrate
    << ", tag " << config.tag << std::endl;

    QNCustomAudioTrack* custom_audio_track = QNRTC::CreateCustomAudioTrack(config);
    std::cout << "Wrapper QNRTCCreateCustomAudioTrack: " << custom_audio_track << std::endl;
    return custom_audio_track;
}

void QNRTCDestroyLocalTrack(void* instance) {
    QNLocalTrack* local_track = static_cast<QNLocalTrack *>(instance);
    if (nullptr == local_track) return;
    std::cout << "Wrapper QNRTCDestroyLocalTrack: " << local_track << std::endl;
    QNRTC::DestroyLocalTrack(local_track);
}

void QNRTCSetAudioRouteToSpeakerphone(bool audio_route_to_speakerphone) {
    std::cout << "Wrapper QNRTCSetAudioRouteToSpeakerphone: " << audio_route_to_speakerphone << std::endl;
    QNRTC::SetAudioRouteToSpeakerphone(audio_route_to_speakerphone);
}

void QNRTCSetAudioPlayMute(bool muted) {
    std::cout << "Wrapper QNRTCSetSpeakerphoneMuted: " << muted << std::endl;
    QNRTC::SetAudioPlayMute(muted);
}

bool QNRTCIsAudioPlayMute(void) {
    std::cout << "Wrapper QNRTCIsSpeakerphoneMuted" << std::endl;
    return QNRTC::IsAudioPlayMute();
    return false;
}

std::string QNRTCGetString(const char* c_str) {
    return (nullptr == c_str) ? "" : std::string(c_str);
}

#include "qn_rtc_event_unity.h"
#include <iostream>

QNRTCEventListenerImpl* qnrtc_event_listener_impl_ = nullptr;
QNClientEventListenerImpl* qnrtc_client_event_listener_impl_ = nullptr;
QNClientRoleListenerImpl* qn_client_role_listener_impl_ = nullptr;
QNPublishResultCallbackImpl* qn_publish_result_callback_impl_ = nullptr;
QNLiveStreamingListenerImpl* qn_live_streaming_listener_impl_ = nullptr;
QNRemoteAudioMixedFrameListenerImpl* qn_remote_audio_mixed_frame_listener_impl_ = nullptr;
QNNetworkQualityListenerImpl* qn_network_quality_listener_impl_ = nullptr;
QNMediaRelayListenerImpl* qn_media_relay_listener_impl_ = nullptr;
QNAudioFrameListenerImpl* qn_audio_frame_listener_impl_ = nullptr;
QNTrackInfoChangedListenerImpl* qn_track_info_changed_listener_impl_ = nullptr;

// QNRTCEventListenerImpl
void QNRTCEventListenerImpl::OnAudioRouteChanged(QNAudioDevice device) {
    std::cout << "Wrapper OnAudioRouteChanged device: " << device << std::endl;
    if (nullptr != on_audio_route_changed_) {
        on_audio_route_changed_(device);
    }
}

// QNClientEventListenerImpl
void QNClientEventListenerImpl::OnConnectionStateChanged(QNConnectionState state, const QNConnectionDisconnectedInfo* info) {
    std::cout << "Wrapper OnConnectionStateChanged Received: " << state << ", " << info << std::endl;
    if (nullptr != on_connection_state_changed_) {
        if (nullptr == info) {
            on_connection_state_changed_(state, nullptr);
            return;
        }

        QNConnectionDisconnectedInfoPInvoke info_p_invoke;
        info_p_invoke.reason = (int32_t)info->reason;
        info_p_invoke.error_code = info->error_code;
        std::strcpy(info_p_invoke.error_message, info->error_message.c_str());

        on_connection_state_changed_(state, (void *)&info_p_invoke);
    }
}

void QNClientEventListenerImpl::OnUserJoined(const std::string& remote_user_id, const std::string& user_data) {
    std::cout << "Wrapper OnUserJoined Received: " << remote_user_id << ", " << user_data << std::endl;
    if (nullptr != on_user_joined_) {
        on_user_joined_(remote_user_id.c_str(), user_data.c_str());
    }
}

void QNClientEventListenerImpl::OnUserLeft(const std::string& remote_user_id) {
    std::cout << "Wrapper OnUserLeft Received: " << remote_user_id << std::endl;
    if (nullptr != on_user_left_){
        on_user_left_(remote_user_id.c_str());
    }
}

void QNClientEventListenerImpl::OnUserReconnecting(const std::string& remote_user_id) {
    std::cout << "Wrapper OnUserReconnecting Received: " << remote_user_id << std::endl;
    if (nullptr != on_user_reconnecting_) {
        on_user_reconnecting_(remote_user_id.c_str());
    }
}

void QNClientEventListenerImpl::OnUserReconnected(const std::string& remote_user_id) {
    std::cout << "Wrapper OnUserReconnected Received: " << remote_user_id << std::endl;
    if (nullptr != on_user_reconnected_) {
        on_user_reconnected_(remote_user_id.c_str());
    }
}

void QNClientEventListenerImpl::OnUserPublished(const std::string& remote_user_id, const RemoteTrackList& track_list) {
    std::cout << "Wrapper OnUserPublished Received: " << remote_user_id << ", " << track_list.size() << std::endl;
    if (nullptr != on_user_published_) {
        RemoteTrackList audio_track_list;
        for (QNRemoteTrack* remote_track : track_list) {
            if (remote_track->IsAudio()) {
                std::cout << "Wrapper Remote Track: " << remote_track << std::endl;
                audio_track_list.push_back(remote_track);
            }
        }
            
        if (0 == audio_track_list.size()) return;
            
        QNRemoteTrackListPInvoke remote_track_list_p_invoke;
        std::copy(audio_track_list.begin(), audio_track_list.end(), remote_track_list_p_invoke.track_list);
        remote_track_list_p_invoke.count = (int32_t)audio_track_list.size();
        std::cout << "Wrapper remote_track_list count: " << remote_track_list_p_invoke.count  << std::endl;
        on_user_published_(remote_user_id.c_str(), &remote_track_list_p_invoke);
    }
}

void QNClientEventListenerImpl::OnUserUnpublished(const std::string& remote_user_id, const RemoteTrackList& track_list) {
    std::cout << "Wrapper OnUserUnpublished Received: " << remote_user_id << ", " << track_list.size() << std::endl;
    if (nullptr != on_user_unpublished_) {
        RemoteTrackList audio_track_list;
        for (QNRemoteTrack* remote_track : track_list) {
            if (remote_track->IsAudio()) {
                std::cout << "Wrapper Remote Track: " << remote_track << std::endl;
                audio_track_list.push_back(remote_track);
            }
        }

        if (0 == audio_track_list.size()) return;
            
        QNRemoteTrackListPInvoke remote_track_list_p_invoke;
        std::copy(audio_track_list.begin(), audio_track_list.end(), remote_track_list_p_invoke.track_list);
        remote_track_list_p_invoke.count = (int32_t)audio_track_list.size();
        std::cout << "Wrapper remote_track_list count: " << remote_track_list_p_invoke.count  << std::endl;
        on_user_unpublished_(remote_user_id.c_str(), &remote_track_list_p_invoke);
    }
}

void QNClientEventListenerImpl::OnSubscribed(const std::string& remote_user_id, const RemoteAudioTrackList& remote_audio_track_list, const RemoteVideoTrackList& remote_video_track_list) {
    std::cout << "Wrapper OnSubscribed Received: " << remote_user_id << ", remote_audio_track_count: " << remote_audio_track_list.size() << std::endl;
    if (nullptr != on_subscribed_) {
        int32_t remote_audio_track_count = (int32_t)remote_audio_track_list.size();
        for (QNRemoteAudioTrack* remote_audio_track : remote_audio_track_list) {
            std::cout << "Wrapper Remote Audio Track: " << remote_audio_track << std::endl;
        }
            
        if (0 == remote_audio_track_count) return;
            
        QNRemoteTrackListPInvoke remote_audio_track_list_p_invoke;
        std::copy(remote_audio_track_list.begin(), remote_audio_track_list.end(), remote_audio_track_list_p_invoke.track_list);
        remote_audio_track_list_p_invoke.count = remote_audio_track_count;
        std::cout << "Wrapper remote_audio_track_list count: " << remote_audio_track_list_p_invoke.count  << std::endl;

        on_subscribed_(remote_user_id.c_str(), &remote_audio_track_list_p_invoke);
    }
}

void QNClientEventListenerImpl::OnMessageReceived(const QNCustomMessage& message) {
    std::cout << "Wrapper OnMessageReceived Received: " << &message << std::endl;
    if (nullptr != on_message_received_) {

        QNCustomMessagePInvoke message_p_invoke;
        std::strcpy(message_p_invoke.msg_id, message.msg_id.c_str());
        std::strcpy(message_p_invoke.msg_sendid, message.msg_sendid.c_str());
        std::strcpy(message_p_invoke.msg_text, message.msg_text.c_str());
        message_p_invoke.msg_stamp = message.msg_stamp;

        std::cout << "Wrapper OnMessageReceived Sending: msg_id " << message_p_invoke.msg_id
        << ", msg_sendid " << message_p_invoke.msg_sendid << ", msg_text " << message_p_invoke.msg_text 
        << ", msg_stamp " << message_p_invoke.msg_stamp << std::endl;
        on_message_received_(&message_p_invoke);
    }
}

void QNClientEventListenerImpl::OnMediaRelayStateChanged(const std::string& relay_room, const QNMediaRelayState state) {
    std::cout << "Wrapper OnMediaRelayStateChanged Received: relay_room " << relay_room << ", state " << state << std::endl;
    if (nullptr != on_media_relay_state_changed_){
        on_media_relay_state_changed_(relay_room.c_str(), state);
    }
}

// QNClientRoleListenerImpl
void QNClientRoleListenerImpl::OnClientRoleResult(QNClientRole new_role) {
    std::cout << "Wrapper OnClientRoleResult Received: new_role " << new_role << std::endl;
    if (nullptr != on_client_role_result_) {
        on_client_role_result_(new_role);
    }
}

void QNClientRoleListenerImpl::OnClientRoleError(int error_code, const std::string& error_message) {
    std::cout << "Wrapper OnClientRoleResult Received: error_code " << error_code << ", error_message " << error_message << std::endl;
    if (nullptr != on_client_role_error_) {
        on_client_role_error_(error_code, error_message.c_str());
    }
}

// QNPublishResultCallbackImpl
void QNPublishResultCallbackImpl::OnPublished() {
    std::cout << "Wrapper OnPublished Received" << std::endl; 
    if (nullptr != on_published_) {
        on_published_();
    }
}

void QNPublishResultCallbackImpl::OnPublishError(int error_code, const std::string& error_message) {
    std::cout << "Wrapper OnPublishError Received: error_code " << error_code << ", error_message " << error_message << std::endl;
    if (nullptr != on_publish_error_) {
        on_publish_error_(error_code, error_message.c_str());
    }
}

// QNLiveStreamingListenerImpl
void QNLiveStreamingListenerImpl::OnStarted(const std::string& stream_id) {
    std::cout << "Wrapper OnStarted Received: " << stream_id << std::endl;
    if (nullptr != on_started_) {
        on_started_(stream_id.c_str());
    }
}

void QNLiveStreamingListenerImpl::OnStopped(const std::string& stream_id) {
    std::cout << "Wrapper OnStopped Received: " << stream_id << std::endl;
    if (nullptr != on_stopped_) {
        on_stopped_(stream_id.c_str());
    }
}

void QNLiveStreamingListenerImpl::OnTranscodingTracksUpdated(const std::string& stream_id) {
    std::cout << "Wrapper OnTranscodingTracksUpdated Received: " << stream_id << std::endl;
    if (nullptr != on_transcoding_tracks_updated_) {
        on_transcoding_tracks_updated_(stream_id.c_str());
    }
}

void QNLiveStreamingListenerImpl::OnLiveStreamingError(const std::string& stream_id, const QNLiveStreamingErrorInfo& error_info) {
    std::cout << "Wrapper OnLiveStreamingError Received: " << stream_id << " " << error_info.type << " " << error_info.code << " " << error_info.message << std::endl;
    if (nullptr != on_error_) {
        QNLiveStreamingErrorInfoPInvoke info_p_invoke;
        info_p_invoke.type = (int32_t)error_info.type;
        info_p_invoke.code = error_info.code;
        std::strcpy(info_p_invoke.message, error_info.message.c_str());

        std::cout << "Wrapper OnLiveStreamingError Sending: type " << info_p_invoke.type << ", code " << info_p_invoke.code << ", message " << info_p_invoke.message << std::endl;
        on_error_(stream_id.c_str(), &info_p_invoke);
    }
}

// QNRemoteAudioMixedFrameListenerImpl
void QNRemoteAudioMixedFrameListenerImpl::OnRemoteAudioMixedFrame(const uint8_t* data, uint32_t data_size, uint32_t bits_per_sample, uint32_t sample_rate, uint32_t channels) {
    if (nullptr != on_remote_audio_mixed_frame_){
        on_remote_audio_mixed_frame_(data, data_size, bits_per_sample, sample_rate, channels);
    }
}

// QNNetworkQualityListenerImpl
void QNNetworkQualityListenerImpl::OnNetworkQualityNotified(const QNNetworkQuality& quality) {
    std::cout << "Wrapper OnNetworkQualityNotified Received: " << std::endl;
    if (nullptr != on_network_quality_notified_) {
        QNNetworkQualityPInvoke quality_p_invoke;
        quality_p_invoke.uplink_network_grade = (int32_t)quality.uplink_network_grade;
        quality_p_invoke.downlink_network_grade = (int32_t)quality.downlink_network_grade;

        on_network_quality_notified_(&quality_p_invoke);
    }
}

// QNMediaRelayListenerImpl
void QNMediaRelayListenerImpl::OnMediaRelayResult(std::map<std::string, QNMediaRelayState> state_map) {
    std::cout << "Wrapper OnMediaRelayResult Received: " << std::endl;
    if (nullptr != on_media_relay_result_) {
        std::map<std::string, QNMediaRelayState> state_map_ = state_map;
        QNMediaRelayResultListPInvoke result_list_p_invoke;

        int32_t index = 0;
        std::map<std::string, QNMediaRelayState>::iterator iter;
        for (iter = state_map_.begin(); iter != state_map_.end(); iter++) {
            QNMediaRelayResultPInvoke result_p_invoke;
            std::strcpy(result_p_invoke.room_name, iter->first.c_str());
            result_p_invoke.state = (int32_t)iter->second;

            result_list_p_invoke.media_info_result_list[index] = result_p_invoke;
            index++;
        }
        result_list_p_invoke.count = index;
                
        on_media_relay_result_(&result_list_p_invoke);
    }
}

void QNMediaRelayListenerImpl::OnMediaRelayError(int error_code, const std::string& error_message) {
    std::cout << "Wrapper OnMediaRelayError Received: error_code " << error_code << ", error_message " << error_message << std::endl;
    if (nullptr != on_media_relay_error_) {
        on_media_relay_error_(error_code, error_message.c_str());
    }
}

// QNAudioFrameListenerImpl
void QNAudioFrameListenerImpl::OnAudioFrame(
    const string& user_id,
    const string& track_id, 
    const uint8_t* data, 
    uint32_t data_size, 
    uint32_t bits_per_sample, 
    uint32_t sample_rate, 
    uint32_t channels
) {
    if (nullptr != on_audio_frame_) {
        on_audio_frame_(user_id.c_str(), track_id.c_str(), data, data_size, bits_per_sample, sample_rate, channels);
    }
}

// QNTrackInfoChangedListenerImpl
void QNTrackInfoChangedListenerImpl::OnMuteStateChanged(const std::string& user_id, const std::string& track_id, bool muted) {
    std::cout << "Wrapper OnMuteStateChanged Received: user_id " << user_id << ", track_id " << track_id << ", muted " << muted << std::endl;
    if (nullptr != on_mute_state_changed_) {
        on_mute_state_changed_(user_id.c_str(), track_id.c_str(), muted);
    }
}

void DeinitListeners() {
    if (nullptr != qnrtc_event_listener_impl_) {
        delete qnrtc_event_listener_impl_;
        qnrtc_event_listener_impl_ = nullptr;
    }

    if (nullptr != qnrtc_client_event_listener_impl_) {
        delete qnrtc_client_event_listener_impl_;
        qnrtc_client_event_listener_impl_ = nullptr;
    }

    if (nullptr != qn_client_role_listener_impl_) {
        delete qn_client_role_listener_impl_;
        qn_client_role_listener_impl_ = nullptr;
    }

    if (nullptr != qn_publish_result_callback_impl_) {
        delete qn_publish_result_callback_impl_;
        qn_publish_result_callback_impl_ = nullptr;
    }

    if (nullptr != qn_live_streaming_listener_impl_) {
        delete qn_live_streaming_listener_impl_;
        qn_live_streaming_listener_impl_ = nullptr;
    }

    if (nullptr != qn_remote_audio_mixed_frame_listener_impl_) {
        delete qn_remote_audio_mixed_frame_listener_impl_;
        qn_remote_audio_mixed_frame_listener_impl_ = nullptr;
    }

    if (nullptr != qn_network_quality_listener_impl_) {
        delete qn_network_quality_listener_impl_;
        qn_network_quality_listener_impl_ = nullptr;
    }

    if (nullptr != qn_media_relay_listener_impl_) {
        delete qn_media_relay_listener_impl_;
        qn_media_relay_listener_impl_ = nullptr;
    }

    if (nullptr != qn_audio_frame_listener_impl_) {
        delete qn_audio_frame_listener_impl_;
        qn_audio_frame_listener_impl_ = nullptr;
    }

    if (nullptr != qn_track_info_changed_listener_impl_) {
        delete qn_track_info_changed_listener_impl_;
        qn_track_info_changed_listener_impl_ = nullptr;
    }
}

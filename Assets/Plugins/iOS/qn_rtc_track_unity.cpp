#include "qn_rtc_track_unity.h"
#include <iostream>

extern QNAudioFrameListenerImpl* qn_audio_frame_listener_impl_;
extern QNTrackInfoChangedListenerImpl* qn_track_info_changed_listener_impl_;

const char* QNRTCTrackGetTrackID(void* instance) {
    std::cout << "Wrapper QNRTCTrackGetTrackID: " << instance << std::endl;
    QNTrack* track = static_cast<QNTrack *>(instance);
    if (nullptr == track) return nullptr;

    return track->GetTrackID().c_str();
}

const char* QNRTCTrackGetUserID(void* instance) {
    std::cout << "Wrapper QNRTCTrackGetUserID: " << instance << std::endl;
    QNTrack* track = static_cast<QNTrack *>(instance);
    if (nullptr == track) return nullptr;

    return track->GetUserID().c_str();
}

const char* QNRTCTrackGetTag(void* instance) {
    std::cout << "Wrapper QNRTCTrackGetTag: " << instance << std::endl;
    QNTrack* track = static_cast<QNTrack *>(instance);
    if (nullptr == track) return nullptr;

    return track->GetTag().c_str();
}

bool QNRTCTrackIsMuted(void* instance) {
    std::cout << "Wrapper QNRTCTrackIsMuted: " << instance << std::endl;
    QNTrack* track = static_cast<QNTrack *>(instance);
    if (nullptr == track) return false;

    return track->IsMuted();
}

void QNRTCTrackSetMuted(void* instance, bool muted) {
    std::cout << "Wrapper QNRTCTrackSetMuted: instance " << instance << ", muted " << muted << std::endl;
    QNLocalTrack* local_track = static_cast<QNLocalTrack *>(instance);
    if (nullptr == local_track) return;

    return local_track->SetMuted(muted);
}

void QNRTCTrackSetAudioFrameListenerEnabled(
    void* instance,
    bool is_enabled,
    bool is_local,
    QNRTCTrackOnAudioFrame on_audio_frame
) {
    std::cout << "Wrapper QNRTCTrackSetAudioFrameListenerEnabled: " << instance << std::endl;
    if (is_local) {
        QNLocalAudioTrack* local_audio_track = static_cast<QNLocalAudioTrack *>(instance);
        if (nullptr == local_audio_track) return;

        if (is_enabled) {
            if (nullptr == qn_audio_frame_listener_impl_) {
                qn_audio_frame_listener_impl_ = new QNAudioFrameListenerImpl();
                qn_audio_frame_listener_impl_->SetAudioFrameCallback(on_audio_frame);
            }
            std::cout << "Wrapper local_audio_track SetAudioFrameListener: " << instance << std::endl;
            local_audio_track->SetAudioFrameListener(qn_audio_frame_listener_impl_);
        } else {            
            local_audio_track->SetAudioFrameListener(nullptr);
        }
        
    } else {
        QNRemoteAudioTrack* remote_audio_track = static_cast<QNRemoteAudioTrack *>(instance);
        if (nullptr == remote_audio_track) return;

        if (is_enabled) {
            if (nullptr == qn_audio_frame_listener_impl_) {
                qn_audio_frame_listener_impl_ = new QNAudioFrameListenerImpl();
                qn_audio_frame_listener_impl_->SetAudioFrameCallback(on_audio_frame);
            }
            std::cout << "Wrapper remote_audio_track SetAudioFrameListener: " << instance << std::endl;
            remote_audio_track->SetAudioFrameListener(qn_audio_frame_listener_impl_);
        } else {
            remote_audio_track->SetAudioFrameListener(nullptr);
        }
    }    
}

void QNRTCTrackSetVolume(void* instance, bool is_local, double volume) {
    std::cout << "Wrapper QNRTCTrackSetVolume: instance " << instance << ", is_local " << is_local << ", volume " << volume << std::endl;
    if (is_local) {
        QNLocalAudioTrack* local_audio_track = static_cast<QNLocalAudioTrack *>(instance);
        if (nullptr == local_audio_track) return;

        local_audio_track->SetVolume(volume);
    } else {
        QNRemoteAudioTrack* remote_audio_track = static_cast<QNRemoteAudioTrack *>(instance);
        if (nullptr == remote_audio_track) return;

        remote_audio_track->SetVolume(volume);
    }
}

float QNRTCTrackGetVolumeLevel(void* instance, bool is_local) {
    std::cout << "Wrapper QNRTCTrackGetVolumeLevel: instance " << instance << ", is_local " << is_local << std::endl;
    if (is_local) {
        QNLocalAudioTrack* local_audio_track = static_cast<QNLocalAudioTrack *>(instance);
        if (nullptr == local_audio_track) return 0;

        return local_audio_track->GetVolumeLevel();
    } else {
        QNRemoteAudioTrack* remote_audio_track = static_cast<QNRemoteAudioTrack *>(instance);
        if (nullptr == remote_audio_track) return 0;

        return remote_audio_track->GetVolumeLevel();
    }
}

int32_t QNRTCTrackPushAudioFrame( 
    void* instance, 
    uint8_t* data,
    uint32_t data_size, 
    uint32_t bits_per_sample, 
    uint32_t sample_rate, 
    uint32_t channels
) {
    std::cout << "Wrapper QNRTCTrackPushAudioFrame: instance " << instance << ", data_size " << data_size 
    << ", bits_per_sample " << bits_per_sample << ", sample_rate " << sample_rate << ", channels " << channels << std::endl;
    QNCustomAudioTrack* custom_audio_track = static_cast<QNCustomAudioTrack *>(instance);
    if (nullptr == custom_audio_track || nullptr == data) return 0;

    return custom_audio_track->PushAudioFrame(data, data_size, bits_per_sample, sample_rate, channels);
}

void QNRTCTrackSetTrackInfoChangedListenerEnabled(
    void* instance,
    bool is_enabled,
    QNRTCTrackOnMuteStateChanged on_mute_state_changed
) {
    std::cout << "Wrapper QNRTCTrackSetTrackInfoChangedListener: " << instance << std::endl;
    QNRemoteTrack* remote_track = static_cast<QNRemoteTrack *>(instance);
    if (nullptr == remote_track) return;

    if (is_enabled) {
        if (nullptr == qn_track_info_changed_listener_impl_) {
            qn_track_info_changed_listener_impl_ = new QNTrackInfoChangedListenerImpl();
            qn_track_info_changed_listener_impl_->SetMuteStateChangedCallback(on_mute_state_changed);
        }

        remote_track->SetTrackInfoChangedListener(qn_track_info_changed_listener_impl_);
    } else {
        remote_track->SetTrackInfoChangedListener(nullptr);
    }
}

bool QNRTCTrackIsSubscribed(void* instance) {
    std::cout << "Wrapper QNRTCTrackIsSubscribed: " << instance << std::endl;
    QNRemoteTrack* remote_track = static_cast<QNRemoteTrack *>(instance);
    if (nullptr == remote_track) return false;

    return remote_track->IsSubscribed();
}
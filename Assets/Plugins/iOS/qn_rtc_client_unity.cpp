#include "qn_rtc_client_unity.h"
#include <iostream>

extern QNClientRoleListenerImpl* qn_client_role_listener_impl_;
extern QNPublishResultCallbackImpl* qn_publish_result_callback_impl_;
extern QNLiveStreamingListenerImpl* qn_live_streaming_listener_impl_;
extern QNRemoteAudioMixedFrameListenerImpl* qn_remote_audio_mixed_frame_listener_impl_;
extern QNNetworkQualityListenerImpl* qn_network_quality_listener_impl_;
extern QNMediaRelayListenerImpl* qn_media_relay_listener_impl_;
extern std::string QNRTCGetString(const char* c_str);

void QNRTCClientSetClientRole(
    void* instance, 
    int client_role, 
    QNRTCClientOnClientRoleResult on_client_role_result,
    QNRTCClientOnClientRoleError on_client_role_error
) {
    QNRTCClient* client = static_cast<QNRTCClient *>(instance);
    if (nullptr == client) return;

    std::cout << "Wrapper QNRTCClientSetClientRole: client_role " << client_role << std::endl;

    if (nullptr == qn_client_role_listener_impl_) {
        qn_client_role_listener_impl_ = new QNClientRoleListenerImpl();
        qn_client_role_listener_impl_->SetClientRoleResultCallback(on_client_role_result);
        qn_client_role_listener_impl_->SetClientRoleErrorCallback(on_client_role_error);
    }
    client->SetClientRole((QNClientRole)client_role, qn_client_role_listener_impl_);
}

void QNRTCClientSetAutoSubscribe(void* instance, bool auto_subscribe) {
    QNRTCClient* client = static_cast<QNRTCClient *>(instance);
    if (nullptr == client) return;

    client->SetAutoSubscribe(auto_subscribe);
}

void QNRTCClientJoin(void* instance, const char* token, const char* user_data) {
    QNRTCClient* client = static_cast<QNRTCClient *>(instance);
    if (nullptr == client) return;

    std::cout << "Wrapper QNRTCClientJoin: " << instance << std::endl;
    std::cout << "token: " << token << std::endl;
    std::cout << "user_data: " << user_data << std::endl;

    client->Join(QNRTCGetString(token), QNRTCGetString(user_data));
}

void QNRTCClientLeave(void* instance) {
    QNRTCClient* client = static_cast<QNRTCClient *>(instance);
    if (nullptr == client) return;

    std::cout << "Wrapper QNRTCClientLeave: " << instance << std::endl;
    client->Leave();
}

void QNRTCClientPublish(
    void* instance,
    QNLocalTrackListPInvoke* publish_track_list_p_invoke,
    QNRTCClientOnPublished on_published,
    QNRTCClientOnPublishError on_publish_error
) {
    QNRTCClient* client = static_cast<QNRTCClient *>(instance);
    if (nullptr == client || nullptr == publish_track_list_p_invoke) return;

    std::cout << "Wrapper QNRTCClientPublish: " << instance << std::endl;
    std::cout << "QNLocalTrackListPInvoke: " << publish_track_list_p_invoke << std::endl;

    LocalTrackList local_track_list;
    for (int i = 0; i < publish_track_list_p_invoke->count; ++i) {
        QNLocalTrack* local_track = publish_track_list_p_invoke->track_list[i];
        std::cout << "local_track: " << local_track << std::endl;
        local_track_list.push_back(local_track);
    }

    if (nullptr == qn_publish_result_callback_impl_) {
        qn_publish_result_callback_impl_ = new QNPublishResultCallbackImpl();
        qn_publish_result_callback_impl_->SetPublishedCallback(on_published);
        qn_publish_result_callback_impl_->SetPublishError(on_publish_error);
    }
    
    client->Publish(local_track_list, qn_publish_result_callback_impl_);
}

void QNRTCClientUnPublish(void* instance, QNLocalTrackListPInvoke* unpublish_track_list_p_invoke) {
    QNRTCClient* client = static_cast<QNRTCClient *>(instance);
    if (nullptr == client || nullptr == unpublish_track_list_p_invoke) return;

    std::cout << "Wrapper QNRTCClientUnPublish: " << instance << std::endl;
    std::cout << "QNLocalTrackListPInvoke: " << unpublish_track_list_p_invoke << std::endl;

    LocalTrackList local_track_list;
    for (int i = 0; i < unpublish_track_list_p_invoke->count; ++i) {
        QNLocalTrack* local_track = unpublish_track_list_p_invoke->track_list[i];
        std::cout << "local_track: " << local_track << std::endl;
        local_track_list.push_back(local_track);
    }

    client->UnPublish(local_track_list);
}

void QNRTCClientSubscribe(void* instance, QNRemoteTrackListPInvoke* subscribe_track_list_p_invoke) {
    QNRTCClient* client = static_cast<QNRTCClient *>(instance);
    if (nullptr == client || nullptr == subscribe_track_list_p_invoke) return;

    std::cout << "Wrapper QNRTCClientSubscribe: " << instance << std::endl;
    std::cout << "QNRemoteTrackListPInvoke: " << subscribe_track_list_p_invoke << std::endl;

    RemoteTrackList remote_track_list;
    for (int i = 0; i < subscribe_track_list_p_invoke->count; ++i) {
        QNRemoteTrack* remote_track = subscribe_track_list_p_invoke->track_list[i];
        std::cout << "remote_track: " << remote_track << std::endl;
        remote_track_list.push_back(remote_track);
    }
    
    client->Subscribe(remote_track_list);
}

void QNRTCClientUnSubscribe(void* instance, QNRemoteTrackListPInvoke* unsubscribe_track_list_p_invoke) {
    QNRTCClient* client = static_cast<QNRTCClient *>(instance);
    if (nullptr == client || nullptr == unsubscribe_track_list_p_invoke) return;

    std::cout << "Wrapper QNRTCClientUnSubscribe: " << instance << std::endl;
    std::cout << "QNRemoteTrackListPInvoke: " << unsubscribe_track_list_p_invoke << std::endl;

    RemoteTrackList remote_track_list;
    for (int i = 0; i < unsubscribe_track_list_p_invoke->count; ++i) {
        QNRemoteTrack* remote_track = unsubscribe_track_list_p_invoke->track_list[i];
        std::cout << "remote_track: " << remote_track << std::endl;
        remote_track_list.push_back(remote_track);
    }
    
    client->UnSubscribe(remote_track_list);
}

void QNRTCClientSendMessage(void* instance, QNSendMessagePInvoke* send_message_p_invoke) {
    QNRTCClient* client = static_cast<QNRTCClient *>(instance);
    if (nullptr == client || nullptr == send_message_p_invoke) return;

    std::cout << "Wrapper QNRTCClientSendMessage: " << instance << std::endl;
    std::cout << "users_list_count: " << send_message_p_invoke->user_count << std::endl;
    std::cout << "message_id: " << send_message_p_invoke->message_id << std::endl;
    std::cout << "message: " << send_message_p_invoke->message << std::endl;

    std::list<std::string> users_string_list;
    for (int i = 0; i < send_message_p_invoke->user_count; ++i) {
        QNSendMessageUserIdPInvoke user_id_invoke = send_message_p_invoke->user_list[i];
        std::cout << "user: " << user_id_invoke.user_id << std::endl;
        std::string user_id_str = QNRTCGetString(user_id_invoke.user_id);
        users_string_list.push_back(user_id_str);
    }
    
    client->SendMessage(users_string_list, QNRTCGetString(send_message_p_invoke->message_id), QNRTCGetString(send_message_p_invoke->message));
}

void QNRTCClientSetLiveStreamingListener(
    void* instance, 
    QNLiveStreamingOnStarted on_live_streaming_started,
    QNLiveStreamingOnStopped on_live_streaming_stopped,
    QNLiveStreamingOnTranscodingTracksUpdated on_live_streaming_transcoding_tracks_updated,
    QNLiveStreamingOnError on_live_streaming_error
) {
    QNRTCClient* client = static_cast<QNRTCClient *>(instance);
    if (nullptr == client) return;

    std::cout << "Wrapper QNRTCClientSetLiveStreamingListener: " << instance << std::endl;
    if (nullptr == qn_live_streaming_listener_impl_) {
        qn_live_streaming_listener_impl_ = new QNLiveStreamingListenerImpl();
        qn_live_streaming_listener_impl_->SetStartedCallback(on_live_streaming_started);
        qn_live_streaming_listener_impl_->SetStoppedCallback(on_live_streaming_stopped);
        qn_live_streaming_listener_impl_->SetTranscodingTracksUpdatedCallback(on_live_streaming_transcoding_tracks_updated);
        qn_live_streaming_listener_impl_->SetErrorCallback(on_live_streaming_error);
    }

    client->SetLiveStreamingListener(qn_live_streaming_listener_impl_);
}

void QNRTCClientStartDirectLiveStreaming(void* instance, QNDirectLiveStreamingConfigPInvoke* config_p_invoke) {
    QNRTCClient* client = static_cast<QNRTCClient *>(instance);
    if (nullptr == client || nullptr == config_p_invoke) return;

    std::cout << "Wrapper QNRTCClientStartDirectLiveStreaming: " << instance << std::endl;
    std::cout << "local_audio_track: " << config_p_invoke->local_audio_track << std::endl;
    std::cout << "stream_id: " << config_p_invoke->stream_id << std::endl;
    std::cout << "publish_url: " << config_p_invoke->publish_url << std::endl;

    QNDirectLiveStreamingConfig config;
    config.local_audio_track = config_p_invoke->local_audio_track;
    config.stream_id = QNRTCGetString(config_p_invoke->stream_id);
    config.publish_url = QNRTCGetString(config_p_invoke->publish_url);

    client->StartLiveStreaming(config);
}

void QNRTCClientStopDirectLiveStreaming(void* instance, QNDirectLiveStreamingConfigPInvoke* config_p_invoke) {
    QNRTCClient* client = static_cast<QNRTCClient *>(instance);
    if (nullptr == client || nullptr == config_p_invoke) return;

    std::cout << "Wrapper QNRTCClientStopDirectLiveStreaming: " << instance << std::endl;
    std::cout << "local_audio_track: " << config_p_invoke->local_audio_track << std::endl;
    std::cout << "stream_id: " << config_p_invoke->stream_id << std::endl;
    std::cout << "publish_url: " << config_p_invoke->publish_url << std::endl;

    QNDirectLiveStreamingConfig config;
    config.local_audio_track = config_p_invoke->local_audio_track;
    config.stream_id = QNRTCGetString(config_p_invoke->stream_id);
    config.publish_url = QNRTCGetString(config_p_invoke->publish_url);

    client->StopLiveStreaming(config);
}

void QNRTCClientStartTranscodingLiveStreaming(void* instance, QNTranscodingLiveStreamingConfigPInvoke* config_p_invoke) {
    QNRTCClient* client = static_cast<QNRTCClient *>(instance);
    if (nullptr == client || nullptr == config_p_invoke) return;

    std::cout << "Wrapper QNRTCClientStartTranscodingLiveStreaming: " << instance << std::endl;
    std::cout << "config_p_invoke: " << config_p_invoke << std::endl;

    QNTranscodingLiveStreamingImage merge_background;
    merge_background.layer_url = QNRTCGetString(config_p_invoke->merge_background.layer_url);
    merge_background.x = config_p_invoke->merge_background.x;
    merge_background.y = config_p_invoke->merge_background.y;
    merge_background.layer_width = config_p_invoke->merge_background.layer_width;
    merge_background.layer_height = config_p_invoke->merge_background.layer_height;

    QNTranscodingImageList merge_watermark_list;
    for (int i = 0; i < config_p_invoke->watermark_count; ++i) {
        QNTranscodingLiveStreamingImagePInvoke watermark_p_invoke = config_p_invoke->merge_watermark[i];
        QNTranscodingLiveStreamingImage merge_watermark;
        merge_watermark.layer_url = QNRTCGetString(watermark_p_invoke.layer_url);
        merge_watermark.x = watermark_p_invoke.x;
        merge_watermark.y = watermark_p_invoke.y;
        merge_watermark.layer_width = watermark_p_invoke.layer_width;
        merge_watermark.layer_height = watermark_p_invoke.layer_height;

        merge_watermark_list.push_back(merge_watermark);
    }

    QNTranscodingLiveStreamingConfig config;
    config.stream_id = QNRTCGetString(config_p_invoke->stream_id);    
    config.publish_url = QNRTCGetString(config_p_invoke->publish_url);
    config.merge_background = merge_background;
    config.merge_watermark = merge_watermark_list;
    config.width = config_p_invoke->width;
    config.height = config_p_invoke->height;
    config.fps = config_p_invoke->fps;
    config.bitrate = config_p_invoke->bitrate;
    config.min_bitrate = config_p_invoke->min_bitrate;
    config.max_bitrate = config_p_invoke->max_bitrate;
    config.is_hold_last_frame = config_p_invoke->is_hold_last_frame;
    config.stretch_mode = (QNStretchMode)config_p_invoke->stretch_mode;

    std::cout << "QNTranscodingLiveStreamingConfig: " << std::endl;
    std::cout << "stream_id: " << config.stream_id << std::endl;
    std::cout << "publish_url: " << config.publish_url << std::endl;

    std::cout << "mergeBackground: layer_url " << config.merge_background.layer_url
    << ", x " << config.merge_background.x << ", y " << config.merge_background.y
    << ", layer_width " << config.merge_background.layer_width << ", layer_height "
    << config.merge_background.layer_height << std::endl;

    std::list<QNTranscodingLiveStreamingImage> merge_watermark_config = config.merge_watermark;
    list<QNTranscodingLiveStreamingImage>::iterator it;
    for(it = merge_watermark_config.begin(); it != merge_watermark_config.end(); it++){
        std::cout << "mergeWatermark: layer_url " << it->layer_url
    << ", x " << it->x << ", y " << it->y
    << ", layer_width " << it->layer_width << ", layer_height "
    << it->layer_height << std::endl;
    }
    
    std::cout << "width: " << config.width << std::endl;
    std::cout << "height: " << config.height << std::endl;
    std::cout << "fps: " << config.fps << std::endl;
    std::cout << "bitrate: " << config.bitrate << std::endl;
    std::cout << "min_bitrate: " << config.min_bitrate << std::endl;
    std::cout << "max_bitrate: " << config.max_bitrate << std::endl;
    std::cout << "is_hold_last_frame: " << config.is_hold_last_frame << std::endl;
    std::cout << "stretch_mode: " << config.stretch_mode << std::endl;

    client->StartLiveStreaming(config);
}

void QNRTCClientStopTranscodingLiveStreaming(void* instance, QNTranscodingLiveStreamingConfigPInvoke* config_p_invoke) {
    QNRTCClient* client = static_cast<QNRTCClient *>(instance);
    if (nullptr == client || nullptr == config_p_invoke) return;

    std::cout << "Wrapper QNRTCClientStopTranscodingLiveStreaming: " << instance << std::endl;
    std::cout << "config_p_invoke: " << config_p_invoke << std::endl;

    QNTranscodingLiveStreamingImage merge_background;
    merge_background.layer_url = QNRTCGetString(config_p_invoke->merge_background.layer_url);
    merge_background.x = config_p_invoke->merge_background.x;
    merge_background.y = config_p_invoke->merge_background.y;
    merge_background.layer_width = config_p_invoke->merge_background.layer_width;
    merge_background.layer_height = config_p_invoke->merge_background.layer_height;

    QNTranscodingImageList merge_watermark_list;
    for (int i = 0; i < config_p_invoke->watermark_count; ++i) {
        QNTranscodingLiveStreamingImagePInvoke watermark_p_invoke = config_p_invoke->merge_watermark[i];
        QNTranscodingLiveStreamingImage merge_watermark;
        merge_watermark.layer_url = QNRTCGetString(watermark_p_invoke.layer_url);
        merge_watermark.x = watermark_p_invoke.x;
        merge_watermark.y = watermark_p_invoke.y;
        merge_watermark.layer_width = watermark_p_invoke.layer_width;
        merge_watermark.layer_height = watermark_p_invoke.layer_height;

        merge_watermark_list.push_back(merge_watermark);
    }

    QNTranscodingLiveStreamingConfig config;
    config.stream_id = QNRTCGetString(config_p_invoke->stream_id);
    config.publish_url = QNRTCGetString(config_p_invoke->publish_url);
    config.merge_background = merge_background;
    config.merge_watermark = merge_watermark_list;
    config.width = config_p_invoke->width;
    config.height = config_p_invoke->height;
    config.fps = config_p_invoke->fps;
    config.bitrate = config_p_invoke->bitrate;
    config.min_bitrate = config_p_invoke->min_bitrate;
    config.max_bitrate = config_p_invoke->max_bitrate;
    config.is_hold_last_frame = config_p_invoke->is_hold_last_frame;
    config.stretch_mode = (QNStretchMode)config_p_invoke->stretch_mode;

    std::cout << "QNTranscodingLiveStreamingConfig: " << std::endl;
    std::cout << "stream_id: " << config.stream_id << std::endl;
    std::cout << "publish_url: " << config.publish_url << std::endl;

    std::cout << "mergeBackground: layer_url " << config.merge_background.layer_url
    << ", x " << config.merge_background.x << ", y " << config.merge_background.y
    << ", layer_width " << config.merge_background.layer_width << ", layer_height "
    << config.merge_background.layer_height << std::endl;

    std::list<QNTranscodingLiveStreamingImage> merge_watermark_config = config.merge_watermark;
    list<QNTranscodingLiveStreamingImage>::iterator it;
    for(it = merge_watermark_config.begin(); it != merge_watermark_config.end(); it++){
        std::cout << "mergeWatermark: layer_url " << it->layer_url
    << ", x " << it->x << ", y " << it->y
    << ", layer_width " << it->layer_width << ", layer_height "
    << it->layer_height << std::endl;
    }
    
    std::cout << "width: " << config.width << std::endl;
    std::cout << "height: " << config.height << std::endl;
    std::cout << "fps: " << config.fps << std::endl;
    std::cout << "bitrate: " << config.bitrate << std::endl;
    std::cout << "min_bitrate: " << config.min_bitrate << std::endl;
    std::cout << "max_bitrate: " << config.max_bitrate << std::endl;
    std::cout << "is_hold_last_frame: " << config.is_hold_last_frame << std::endl;
    std::cout << "stretch_mode: " << config.stretch_mode << std::endl;

    client->StopLiveStreaming(config);
}

void QNRTCClientSetTranscodingLiveStreamingTracks(void* instance, const char* stream_id, QNTranscodingLiveStreamingTrackListPInvoke* transcoding_track_list_p_invoke) {
    QNRTCClient* client = static_cast<QNRTCClient *>(instance);
    if (nullptr == client || nullptr == stream_id || nullptr == transcoding_track_list_p_invoke) return;
    
    std::string stream_id_str = QNRTCGetString(stream_id);

    std::cout << "Wrapper QNRTCClientSetTranscodingLiveStreamingTracks: " << instance << std::endl;
    std::cout << "stream_id: " << stream_id_str << std::endl;
    std::cout << "transcoding_track_list_p_invoke: " << transcoding_track_list_p_invoke << std::endl;

    QNTranscodeingTrackList transcoding_track_list;
    for (int i = 0; i < transcoding_track_list_p_invoke->count; i++) {
        QNTranscodingLiveStreamingTrackPInvoke transcoding_track_p_invoke = transcoding_track_list_p_invoke->transcoding_track_list[i];
        QNTranscodingLiveStreamingTrack transcoding_live_streaming_track;
        transcoding_live_streaming_track.track_id = QNRTCGetString(transcoding_track_p_invoke.track_id);

        std::cout << "trackId: " << transcoding_live_streaming_track.track_id << std::endl;
        transcoding_track_list.push_back(transcoding_live_streaming_track);
    }
        
    if (transcoding_track_list.size()) {
        client->SetTranscodingLiveStreamingTracks(stream_id_str, transcoding_track_list);
    }
}

void QNRTCClientRemoveTranscodingLiveStreamingTracks(void* instance, const char* stream_id, QNTranscodingLiveStreamingTrackListPInvoke* transcoding_track_list_p_invoke) {
    QNRTCClient* client = static_cast<QNRTCClient *>(instance);
    if (nullptr == client || nullptr == stream_id || nullptr == transcoding_track_list_p_invoke) return;
    
    std::string stream_id_str = QNRTCGetString(stream_id);

    std::cout << "Wrapper QNRTCClientRemoveTranscodingLiveStreamingTracks: " << instance << std::endl;
    std::cout << "stream_id: " << stream_id_str << std::endl;
    std::cout << "transcoding_track_list_p_invoke: " << transcoding_track_list_p_invoke << std::endl;

    QNTranscodeingTrackList transcoding_track_list;
    for (int i = 0; i < transcoding_track_list_p_invoke->count; i++) {
        QNTranscodingLiveStreamingTrackPInvoke transcoding_track_p_invoke = transcoding_track_list_p_invoke->transcoding_track_list[i];
        QNTranscodingLiveStreamingTrack transcoding_live_streaming_track;
        transcoding_live_streaming_track.track_id = QNRTCGetString(transcoding_track_p_invoke.track_id);

        std::cout << "trackId: " << transcoding_live_streaming_track.track_id << std::endl;
        transcoding_track_list.push_back(transcoding_live_streaming_track);
    }
    
    if (transcoding_track_list.size()) {
        client->RemoveTranscodingLiveStreamingTracks(stream_id_str, transcoding_track_list);
    }
}

void QNRTCClientSetRemoteAudioMixedFrameListener(
    void* instance,
    QNRTCClientOnRemoteAudioMixedFrame on_remote_audio_mixed_frame
) {
    QNRTCClient* client = static_cast<QNRTCClient *>(instance);
    if (nullptr == client) return;

    std::cout << "Wrapper QNRTCClientSetRemoteAudioMixedFrameListener: " << client << std::endl;
    if (nullptr == qn_remote_audio_mixed_frame_listener_impl_) {
        qn_remote_audio_mixed_frame_listener_impl_ = new QNRemoteAudioMixedFrameListenerImpl();
        qn_remote_audio_mixed_frame_listener_impl_->SetRemoteAudioMixedFrameCallback(on_remote_audio_mixed_frame);
    }

    client->SetRemoteAudioMixedFrameListener(qn_remote_audio_mixed_frame_listener_impl_);
}

void QNRTCClientGetPublishedTracks(void* instance, QNLocalTrackListPInvoke* published_track_list_p_invoke) {
    QNRTCClient* client = static_cast<QNRTCClient *>(instance);
    if (nullptr == client || nullptr == published_track_list_p_invoke) return;

    std::cout << "Wrapper QNRTCClientGetPublishedTracks: " << instance << std::endl;
    std::cout << "published_track_list_p_invoke: " << published_track_list_p_invoke << std::endl;

    LocalTrackList local_track_list = client->GetPublishedTracks();
    published_track_list_p_invoke->count = (int32_t)local_track_list.size();
    std::copy(local_track_list.begin(), local_track_list.end(), published_track_list_p_invoke->track_list);

    for (int i = 0; i < published_track_list_p_invoke->count; i++) {
        std::cout << "published_track_list: " << published_track_list_p_invoke->track_list[i] << std::endl;
    }
}

void QNRTCClientGetRemoteUser(void* instance, const char* user_id, QNRemoteUserPInvoke* remote_user_p_invoke) {
    QNRTCClient* client = static_cast<QNRTCClient *>(instance);
    if (nullptr == client || nullptr == user_id || nullptr == remote_user_p_invoke) return;

    std::cout << "Wrapper QNRTCClientGetRemoteUser: " << instance << std::endl;
    std::cout << "user_id: " << user_id << std::endl;
    std::cout << "remote_user_p_invoke: " << remote_user_p_invoke << std::endl;

    std::string user_id_str = QNRTCGetString(user_id);
    QNRemoteUser remote_user = client->GetRemoteUsers(user_id_str);

    std::cout << "QNRemoteUser: user_id " << remote_user.user_id << ", user_data " << remote_user.user_data << ", audio_count "
     << (int32_t)remote_user.remote_audio_track_list.size() << std::endl;

    std::strcpy(remote_user_p_invoke->user_id, remote_user.user_id.c_str());
    std::strcpy(remote_user_p_invoke->user_data, remote_user.user_data.c_str());
    std::copy(remote_user.remote_audio_track_list.begin(), remote_user.remote_audio_track_list.end(), remote_user_p_invoke->remote_audio_track_list);

    std::cout << "remote_user: user_id " << remote_user_p_invoke->user_id << ", user_data " << remote_user_p_invoke->user_data
     << ", audio_count " << remote_user_p_invoke->remote_audio_track_count << std::endl;

}

void QNRTCClientGetRemoteUserList(void* instance, QNRemoteUserListPInvoke* remote_user_list_p_invoke) {
    QNRTCClient* client = static_cast<QNRTCClient *>(instance);
    if (nullptr == client || nullptr == remote_user_list_p_invoke) return;

    std::cout << "Wrapper QNRTCClientGetRemoteUserList: " << instance << std::endl;
    std::cout << "remote_user_list_p_invoke: " << remote_user_list_p_invoke << std::endl;

    RemoteUserList remote_user_list = client->GetRemoteUsers();
    std::cout << "remote_user_list_count: " << (int32_t)remote_user_list.size() << std::endl;

    int index = 0;
    for (QNRemoteUser remote_user : remote_user_list) {
        std::cout << "QNRemoteUser: user_id " << remote_user.user_id << ", user_data " << remote_user.user_data << ", audio_count "
         << (int32_t)remote_user.remote_audio_track_list.size() << std::endl;

        QNRemoteUserPInvoke* remote_user_p_invoke = &remote_user_list_p_invoke->remote_user_list[index];
        std::strcpy(remote_user_p_invoke->user_id, remote_user.user_id.c_str());
        std::strcpy(remote_user_p_invoke->user_data, remote_user.user_data.c_str());
        remote_user_p_invoke->remote_audio_track_count = (int32_t)remote_user.remote_audio_track_list.size();
        std::copy(remote_user.remote_audio_track_list.begin(), remote_user.remote_audio_track_list.end(), remote_user_p_invoke->remote_audio_track_list);
        
        index++;

        std::cout << "remote_user: user_id " << remote_user_p_invoke->user_id << ", user_data " << remote_user_p_invoke->user_data
         << ", audio_count " << remote_user_p_invoke->remote_audio_track_count << std::endl;
    }
    
    remote_user_list_p_invoke->remote_user_count = index;
    std::cout << "remote_user_list: user_count " << remote_user_list_p_invoke->remote_user_count << std::endl;
}

void QNRTCClientGetLocalAudioTrackStats(void* instance, QNLocalAudioTrackStatsListPInvoke* local_audio_track_stats_list_p_invoke) {
    QNRTCClient* client = static_cast<QNRTCClient *>(instance);
    if (nullptr == client || nullptr == local_audio_track_stats_list_p_invoke) return;

    std::cout << "Wrapper QNRTCClientGetLocalAudioTrackStats: " << instance << std::endl;
    std::cout << "local_audio_track_stats_p_invoke: " << local_audio_track_stats_list_p_invoke << std::endl;

    QNLocalAudioTrackStatsMap local_audio_track_stats_map = client->GetLocalAudioTrackStats();
    std::cout << "local_audio_track_stats_map_count: " << (int32_t)local_audio_track_stats_map.size() << std::endl;

    int index = 0;
    QNLocalAudioTrackStatsMap::iterator iter;
    for (iter = local_audio_track_stats_map.begin(); iter != local_audio_track_stats_map.end(); iter++) {
        std::string track_id = iter->first;
        QNLocalAudioTrackStatsPInvoke* local_audio_track_stats_p_invoke = &local_audio_track_stats_list_p_invoke->local_audio_track_stats_list[index];
        QNLocalAudioTrackStats local_audio_track_stats = iter->second;

        std::cout << "QNLocalAudioTrackStats: track_id " << track_id << ", uplink_bitrate " << local_audio_track_stats.uplink_bitrate
        << ", uplink_rtt " << local_audio_track_stats.uplink_rtt << ", uplink_lostrate " << local_audio_track_stats.uplink_lostrate << std::endl;

        std::strcpy(local_audio_track_stats_p_invoke->track_id, track_id.c_str());
        local_audio_track_stats_p_invoke->uplink_bitrate = local_audio_track_stats.uplink_bitrate;
        local_audio_track_stats_p_invoke->uplink_rtt = local_audio_track_stats.uplink_rtt;
        local_audio_track_stats_p_invoke->uplink_lostrate = local_audio_track_stats.uplink_lostrate;

        std::cout << "QNLocalAudioTrackStatsPInvoke: track_id " << local_audio_track_stats_p_invoke->track_id << ", uplink_bitrate " 
        << local_audio_track_stats_p_invoke->uplink_bitrate << ", uplink_rtt " << local_audio_track_stats_p_invoke->uplink_rtt << ", uplink_lostrate " 
        << local_audio_track_stats_p_invoke->uplink_lostrate << std::endl;
        
        index++;
    }

    local_audio_track_stats_list_p_invoke->count = index;
    std::cout << "local_audio_track_stats_list_p_invoke: count " << local_audio_track_stats_list_p_invoke->count << std::endl;
}

void QNRTCClientGetRemoteAudioTrackStats(void* instance, QNRemoteAudioTrackStatsListPInvoke* remote_audio_track_stats_list_p_invoke) {
    QNRTCClient* client = static_cast<QNRTCClient *>(instance);
    if (nullptr == client || nullptr == remote_audio_track_stats_list_p_invoke) return;

    std::cout << "Wrapper QNRTCClientGetRemoteAudioTrackStats: " << instance << std::endl;
    std::cout << "remote_audio_track_stats_list_p_invoke: " << remote_audio_track_stats_list_p_invoke << std::endl;

    QNRemoteAudioTrackStatsMap remote_audio_track_stats_map = client->GetRemoteAudioTrackStats();
    std::cout << "remote_audio_track_stats_map_count: " << (int32_t)remote_audio_track_stats_map.size() << std::endl;

    int index = 0;
    QNRemoteAudioTrackStatsMap::iterator iter;
    for (iter = remote_audio_track_stats_map.begin(); iter != remote_audio_track_stats_map.end(); iter++) {
        std::string track_id = iter->first;
        QNRemoteAudioTrackStatsPInvoke* remote_audio_track_stats_p_invoke = &remote_audio_track_stats_list_p_invoke->remote_audio_track_stats_list[index];
        QNRemoteAudioTrackStats remote_audio_track_stats = iter->second;

        std::cout << "QNRemoteAudioTrackStats: track_id " << track_id << ", downlink_bitrate " << remote_audio_track_stats.downlink_bitrate
        << ", downlink_lostrate " << remote_audio_track_stats.downlink_lostrate << ", uplink_rtt " << remote_audio_track_stats.uplink_rtt 
        << ", uplink_lostrate " << remote_audio_track_stats.uplink_lostrate << std::endl;
        
        std::strcpy(remote_audio_track_stats_p_invoke->track_id, track_id.c_str());
        remote_audio_track_stats_p_invoke->downlink_bitrate = remote_audio_track_stats.downlink_bitrate;
        remote_audio_track_stats_p_invoke->downlink_lostrate = remote_audio_track_stats.downlink_lostrate;
        remote_audio_track_stats_p_invoke->uplink_rtt = remote_audio_track_stats.uplink_rtt;
        remote_audio_track_stats_p_invoke->uplink_lostrate = remote_audio_track_stats.uplink_lostrate;

        std::cout << "QNRemoteAudioTrackStatsPInvoke: track_id " << remote_audio_track_stats_p_invoke->track_id << ", downlink_bitrate " 
        << remote_audio_track_stats_p_invoke->downlink_bitrate << ", downlink_lostrate " << remote_audio_track_stats_p_invoke->downlink_lostrate 
        << ", uplink_rtt " << remote_audio_track_stats_p_invoke->uplink_rtt << ", uplink_lostrate " << remote_audio_track_stats_p_invoke->uplink_lostrate << std::endl;
    
        index++;
    }

    remote_audio_track_stats_list_p_invoke->count = index;
    std::cout << "remote_audio_track_stats_list_p_invoke: count " << remote_audio_track_stats_list_p_invoke->count << std::endl;
}

void QNRTCClientSetNetworkQualityListener(
    void* instance,
    QNRTCClientOnNetworkQualityNotified on_network_quality_notified 
) {
    QNRTCClient* client = static_cast<QNRTCClient *>(instance);
    if (nullptr == client) return;

    if (nullptr == qn_network_quality_listener_impl_) {
        qn_network_quality_listener_impl_ = new QNNetworkQualityListenerImpl();
        qn_network_quality_listener_impl_->SetNetworkQualityNotifiedCallback(on_network_quality_notified);
    }

    std::cout << "Wrapper QNRTCClientSetNetworkQualityListener: " << client << std::endl;
    client->SetNetworkQualityListener(qn_network_quality_listener_impl_);
}

void QNRTCClientGetUserNetworkQuality(void* instance, QNNetworkQualityListPInvoke* quality_list_p_invoke) {
    QNRTCClient* client = static_cast<QNRTCClient *>(instance);
    if (nullptr == client || nullptr == quality_list_p_invoke) return;

    std::cout << "Wrapper QNRTCClientGetUserNetworkQuality: " << instance << std::endl;
    std::cout << "quality_list_p_invoke: " << quality_list_p_invoke << std::endl;

    QNNetworkQualityMap quality_list_map = client->GetUserNetworkQuality();
    std::cout << "quality_list_map_count: " << (int32_t)quality_list_map.size() << std::endl;

    int index = 0;
    QNNetworkQualityMap::iterator iter;
    for (iter = quality_list_map.begin(); iter != quality_list_map.end(); iter++) {
        std::string user_id = iter->first;
        QNNetworkQualityPInvoke* quality_p_invoke = &quality_list_p_invoke->quality_list[index];
        QNNetworkQuality quality = iter->second;

        std::cout << "QNNetworkQuality: uplink_network_grade " << quality.uplink_network_grade << ", downlink_network_grade " << quality.downlink_network_grade << std::endl;

        std::strcpy(quality_p_invoke->user_id, user_id.c_str());
        quality_p_invoke->uplink_network_grade = (int32_t)quality.uplink_network_grade;
        quality_p_invoke->downlink_network_grade = (int32_t)quality.downlink_network_grade;

        std::cout << "QNNetworkQualityPInvoke: uplink_network_grade " << quality_p_invoke->uplink_network_grade << ", downlink_network_grade " 
        << quality_p_invoke->downlink_network_grade << std::endl;
    
        index++;
    }

    quality_list_p_invoke->count = index;
    std::cout << "quality_list_p_invoke: count " << quality_list_p_invoke->count << std::endl;
}

void QNRTCClientStartMediaRelay(
    void* instance,
    QNMediaRelayConfigurationPInvoke* configuration_p_invoke,
    QNRTCClientOnMediaRelayResult on_media_relay_result,
    QNRTCClientOnMediaRelayError on_media_relay_error
) {
    QNRTCClient* client = static_cast<QNRTCClient *>(instance);
    if (nullptr == client || nullptr == configuration_p_invoke) return;

    std::cout << "Wrapper QNRTCClientStartMediaRelay: " << instance << std::endl;
    std::cout << "configuration_p_invoke: " << configuration_p_invoke << std::endl;

    QNMediaRelayConfiguration configuration;
    configuration.src_room_info.room_name = QNRTCGetString(configuration_p_invoke->src_room_info.room_name);
    configuration.src_room_info.relay_token = QNRTCGetString(configuration_p_invoke->src_room_info.relay_token);

    for (int i = 0; i < configuration_p_invoke->dest_room_count; i++) {
        QNMediaRelayInfoPInvoke dest_room_info_p_invoke = configuration_p_invoke->dest_room_infos[i];
        QNMediaRelayInfo dest_room_info;
        dest_room_info.room_name = QNRTCGetString(dest_room_info_p_invoke.room_name);
        dest_room_info.relay_token = QNRTCGetString(dest_room_info_p_invoke.relay_token);
        configuration.dest_room_infos.push_back(dest_room_info);
    }

    std::cout << "QNMediaRelayConfiguration: " << std::endl;
    std::cout << "src_room_info.room_name: " << configuration.src_room_info.room_name << std::endl;
    std::cout << "src_room_info.relay_token: " << configuration.src_room_info.relay_token << std::endl;

    for (int i = 0; i < configuration.dest_room_infos.size(); i++) {
        QNMediaRelayInfo dest_room_info = configuration.dest_room_infos[i];
        std::cout << "dest_room_info.room_name: " << dest_room_info.room_name << std::endl;
        std::cout << "dest_room_info.relay_token: " << dest_room_info.relay_token << std::endl;
    }

    if (nullptr == qn_media_relay_listener_impl_) {
        qn_media_relay_listener_impl_ = new QNMediaRelayListenerImpl();
        qn_media_relay_listener_impl_->SetMediaRelayResultCallback(on_media_relay_result);
        qn_media_relay_listener_impl_->SetMediaRelayErrorCallback(on_media_relay_error);
    }

    client->StartMediaRelay(configuration, qn_media_relay_listener_impl_);
}

void QNRTCClientUpdateMediaRelay(
    void* instance,
    QNMediaRelayConfigurationPInvoke* configuration_p_invoke,
    QNRTCClientOnMediaRelayResult on_media_relay_result,
    QNRTCClientOnMediaRelayError on_media_relay_error
) {
    QNRTCClient* client = static_cast<QNRTCClient *>(instance);
    if (nullptr == client || nullptr == configuration_p_invoke) return;

    std::cout << "Wrapper QNRTCClientUpdateMediaRelay: " << instance << std::endl;
    std::cout << "configuration_p_invoke: " << configuration_p_invoke << std::endl;

    QNMediaRelayConfiguration configuration;
    configuration.src_room_info.room_name = QNRTCGetString(configuration_p_invoke->src_room_info.room_name);
    configuration.src_room_info.relay_token = QNRTCGetString(configuration_p_invoke->src_room_info.relay_token);

    for (int i = 0; i < configuration_p_invoke->dest_room_count; i++) {
        QNMediaRelayInfoPInvoke dest_room_info_p_invoke = configuration_p_invoke->dest_room_infos[i];
        QNMediaRelayInfo dest_room_info;
        dest_room_info.room_name = QNRTCGetString(dest_room_info_p_invoke.room_name);
        dest_room_info.relay_token = QNRTCGetString(dest_room_info_p_invoke.relay_token);
        configuration.dest_room_infos.push_back(dest_room_info);
    }

    std::cout << "QNMediaRelayConfiguration: " << std::endl;
    std::cout << "src_room_info.room_name: " << configuration.src_room_info.room_name << std::endl;
    std::cout << "src_room_info.relay_token: " << configuration.src_room_info.relay_token << std::endl;

    for (int i = 0; i < configuration.dest_room_infos.size(); i++) {
        QNMediaRelayInfo dest_room_info = configuration.dest_room_infos[i];
        std::cout << "dest_room_info.room_name: " << dest_room_info.room_name << std::endl;
        std::cout << "dest_room_info.relay_token: " << dest_room_info.relay_token << std::endl;
    }

    if (nullptr == qn_media_relay_listener_impl_) {
        qn_media_relay_listener_impl_ = new QNMediaRelayListenerImpl();
        qn_media_relay_listener_impl_->SetMediaRelayResultCallback(on_media_relay_result);
        qn_media_relay_listener_impl_->SetMediaRelayErrorCallback(on_media_relay_error);
    }

    client->UpdateMediaRelay(configuration, qn_media_relay_listener_impl_);
}

void QNRTCClientStopMediaRelay(
    void* instance,
    QNRTCClientOnMediaRelayResult on_media_relay_result,
    QNRTCClientOnMediaRelayError on_media_relay_error
) {
    QNRTCClient* client = static_cast<QNRTCClient *>(instance);
    if (nullptr == client) return;

    std::cout << "Wrapper QNRTCClientStopMediaRelay: " << instance << std::endl;

    if (nullptr == qn_media_relay_listener_impl_) {
        qn_media_relay_listener_impl_ = new QNMediaRelayListenerImpl();
        qn_media_relay_listener_impl_->SetMediaRelayResultCallback(on_media_relay_result);
        qn_media_relay_listener_impl_->SetMediaRelayErrorCallback(on_media_relay_error);
    }

    client->StopMediaRelay(qn_media_relay_listener_impl_);
}
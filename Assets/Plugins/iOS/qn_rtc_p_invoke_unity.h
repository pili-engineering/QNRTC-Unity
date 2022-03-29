#ifndef QN_RTC_P_INVOKE_UNITY_H
#define QN_RTC_P_INVOKE_UNITY_H

#include <stdint.h>
#include "QNRTCKit/core/qn_rtc_interface.h"
#include "QNRTCKit/core/qn_rtc_client_interface.h"

using namespace qiniu;

const int32_t local_track_count_capacity = 5;
const int32_t remote_track_count_capacity = 60;
const int32_t local_audio_track_count_capacity = 2;
const int32_t remote_audio_track_count_capacity = 2;
const int32_t user_list_count_capacity = 30;
const int32_t media_relay_count_capacity = 20;
const int32_t watermark_count_capacity = 5;
const int32_t transcoding_track_count_capacity = 20;

const int32_t tag_string_length = 100;
const int32_t error_message_string_length = 1000;
const int32_t room_name_string_length = 100;
const int32_t room_token_string_length = 1000;
const int32_t msg_id_string_length = 100;
const int32_t msg_sendid_string_length = 100;
const int32_t msg_text_string_length = 1000;
const int32_t user_id_string_length = 100;
const int32_t user_data_string_length = 100;
const int32_t track_id_string_length = 100;
const int32_t stream_id_string_length = 100;
const int32_t publish_url_string_length = 1000;
const int32_t layer_url_string_length = 1000;


struct QNRTCSettingPInvoke {
    int32_t policy;
    bool is_aec3_enabled;
    bool is_audio_redundant_enabled;
};

struct QNRTCClientConfigPInvoke {
    int32_t mode;     
    int32_t role;     
};

struct QNAudioQualityPInvoke {
    int32_t sample_rate;
    int32_t channel_count;
    int32_t bits_per_sample;
    int32_t bitrate; 
};

struct QNMicrophoneAudioTrackConfigPInvoke {
    QNAudioQualityPInvoke audio_quality;
    char tag[tag_string_length];
};

struct QNCustomAudioTrackConfigPInvoke {
    QNAudioQualityPInvoke audio_quality;
    char tag[tag_string_length];
};

struct QNConnectionDisconnectedInfoPInvoke {
    int32_t reason;
    int32_t error_code;
    char error_message[error_message_string_length];
};

struct QNMediaRelayInfoPInvoke {
    char room_name[room_name_string_length];            
    char relay_token[room_token_string_length];       
};

struct QNMediaRelayConfigurationPInvoke {
    QNMediaRelayInfoPInvoke src_room_info;
    int32_t dest_room_count;
    QNMediaRelayInfoPInvoke dest_room_infos[media_relay_count_capacity];
};

struct QNMediaRelayResultPInvoke {
    char room_name[room_name_string_length];
    int32_t state;
};

struct QNMediaRelayResultListPInvoke {
    int32_t count;
    QNMediaRelayResultPInvoke media_info_result_list[media_relay_count_capacity];
};

struct QNCustomMessagePInvoke {
    char msg_id[msg_id_string_length];
    char msg_sendid[msg_sendid_string_length];
    char msg_text[msg_text_string_length];
    int32_t msg_stamp;    
};

struct QNLocalTrackListPInvoke {
    int32_t count;
    QNLocalTrack* track_list[local_track_count_capacity];
};

struct QNRemoteTrackListPInvoke {
    int32_t count;
    QNRemoteTrack* track_list[remote_track_count_capacity];
};

struct QNRemoteUserPInvoke {
    char user_id[user_id_string_length];
    char user_data[user_data_string_length];
    int32_t remote_audio_track_count;
    QNRemoteAudioTrack* remote_audio_track_list[remote_audio_track_count_capacity];
};

struct QNRemoteUserListPInvoke {
    int32_t remote_user_count;
    QNRemoteUserPInvoke remote_user_list[user_list_count_capacity];
};

struct QNLocalAudioTrackStatsPInvoke {
    char track_id[track_id_string_length];
    int32_t uplink_bitrate;
    int32_t uplink_rtt;
    int32_t uplink_lostrate;
};

struct QNLocalAudioTrackStatsListPInvoke {
    int32_t count;
    QNLocalAudioTrackStatsPInvoke local_audio_track_stats_list[local_audio_track_count_capacity];
};

struct QNRemoteAudioTrackStatsPInvoke {
    char track_id[track_id_string_length];
    int32_t downlink_bitrate;
    int32_t downlink_lostrate;
    int32_t uplink_rtt;
    int32_t uplink_lostrate;
};

struct QNRemoteAudioTrackStatsListPInvoke {
    int32_t count;
    QNRemoteAudioTrackStatsPInvoke remote_audio_track_stats_list[remote_audio_track_count_capacity];
};

struct QNNetworkQualityPInvoke {
    char user_id[user_id_string_length];
    int32_t uplink_network_grade;
    int32_t downlink_network_grade;
};

struct QNNetworkQualityListPInvoke {
    int32_t count;
    QNNetworkQualityPInvoke quality_list[user_list_count_capacity];
};

struct QNSendMessageUserIdPInvoke {
    char user_id[user_id_string_length];
};

struct QNSendMessagePInvoke {
    QNSendMessageUserIdPInvoke user_list[user_list_count_capacity];
    int32_t user_count;
    char message_id[msg_id_string_length];
    char message[msg_text_string_length];
};

struct QNDirectLiveStreamingConfigPInvoke {
    QNLocalAudioTrack* local_audio_track;
    char stream_id[stream_id_string_length];
    char publish_url[publish_url_string_length];                 
};

struct QNTranscodingLiveStreamingImagePInvoke {
    char layer_url[layer_url_string_length];
    int32_t x;
    int32_t y;
    int32_t layer_width;
    int32_t layer_height;
};

struct QNTranscodingLiveStreamingConfigPInvoke {
    char stream_id[stream_id_string_length];
    char publish_url[publish_url_string_length];
    QNTranscodingLiveStreamingImagePInvoke merge_background;
    QNTranscodingLiveStreamingImagePInvoke merge_watermark[watermark_count_capacity];
    int32_t watermark_count;
    int32_t width;
    int32_t height;
    int32_t fps;
    int32_t bitrate;
    int32_t min_bitrate;
    int32_t max_bitrate;
    bool is_hold_last_frame;
    int32_t stretch_mode;
};

struct QNTranscodingLiveStreamingTrackPInvoke {
    char track_id[track_id_string_length];       
};

struct QNTranscodingLiveStreamingTrackListPInvoke {
    int32_t count;
    QNTranscodingLiveStreamingTrackPInvoke transcoding_track_list[transcoding_track_count_capacity];
};

struct QNLiveStreamingErrorInfoPInvoke {
    int32_t type;        
    int32_t code;                            
    char message[error_message_string_length];             
};

#endif

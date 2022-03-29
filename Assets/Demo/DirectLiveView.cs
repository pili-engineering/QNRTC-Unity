using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using qnrtc;

namespace QNRTCUnityDemo
{
    public class DirectLiveView : MonoBehaviour
    {
        public delegate void OnDirectLiveStartButtonClickHandler(QNDirectLiveStreamingConfig config);
        public delegate void OnDirectLiveStopButtonClickHandler(QNDirectLiveStreamingConfig config);
        public event OnDirectLiveStartButtonClickHandler OnStartHandler;
        public event OnDirectLiveStopButtonClickHandler OnStopHandler;

        public Dropdown SelectTrackDropdown;
        public InputField StreamIdInputField;
        public InputField PublishUrlInputField;
        public Button StartDirectLiveButton;
        public Button StopDirectLiveButton;

        private List<QNLocalAudioTrack> localAudioTracks;

        void Start()
        {
            StreamIdInputField.text = "stream_id_direct";
            PublishUrlInputField.text = "rtmp://pili-publish.live.qiniu.pursue.show/pursue-online/Sun";
        }

        void Update()
        {
            
        }

        void OnDestroy()
        {
            
        }

        public void OnStartDirectLiveButtonClick()
        {
            QNDirectLiveStreamingConfig config = new QNDirectLiveStreamingConfig();
            config.LocalAudioTrack = localAudioTracks[SelectTrackDropdown.value];
            config.StreamId = StreamIdInputField.text;
            config.PublishUrl = PublishUrlInputField.text;

            OnStartHandler(config);
        }

        public void OnStopDirectLiveButtonClick()
        {
            QNDirectLiveStreamingConfig config = new QNDirectLiveStreamingConfig();
            config.LocalAudioTrack = localAudioTracks[SelectTrackDropdown.value];
            config.StreamId = StreamIdInputField.text;
            config.PublishUrl = PublishUrlInputField.text;
            OnStopHandler(config);
        }

        public void UpdatePublishedTracks(List<QNLocalTrack> localTracks)
        {
            List<QNLocalAudioTrack> localAudioTracks = new List<QNLocalAudioTrack>();
            foreach (QNLocalTrack localTrack in localTracks)
            {
                QNLocalAudioTrack localAudioTrack = localTrack as QNLocalAudioTrack;
                if (null != localAudioTrack)
                {
                    localAudioTracks.Add(localAudioTrack);
                }
            }
            this.localAudioTracks = localAudioTracks;

            List<Dropdown.OptionData> options = new List<Dropdown.OptionData>();
            if (0 == this.localAudioTracks.Count)
            {
                Dropdown.OptionData option = new Dropdown.OptionData("-");
                options.Add(option);
            }
            else
            {
                foreach (QNLocalAudioTrack localAudioTrack in this.localAudioTracks)
                {
                    Dropdown.OptionData option = new Dropdown.OptionData(localAudioTrack.GetTrackID());
                    options.Add(option);
                }
            }            

            SelectTrackDropdown.options = options;
        }

        public void ClearPublishedTracks()
        {
            this.localAudioTracks.RemoveAll(item => true);

            SelectTrackDropdown.options = new List<Dropdown.OptionData>();
            Dropdown.OptionData option = new Dropdown.OptionData("-");
            SelectTrackDropdown.options.Add(option);
        }
    }
}

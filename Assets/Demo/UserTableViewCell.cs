using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using qnrtc;

namespace QNRTCUnityDemo
{
    public class UserTableViewCell : MonoBehaviour
    {
        public Text TrackKindText;
        public Text UserIDText;
        public Text TrackIDText;
        public Text TagText;
        public Text VolumeLevelText;
        public Text OperationButtonText;

        public Slider VolumeSlider;

        private QNTrack track;
        private bool isLocal;

        private float timerInterval = 1.0f;

        // Use this for initialization
        void Start()
        {

        }

        // Update is called once per frame
        void Update()
        {
            timerInterval -= Time.deltaTime;
            if (timerInterval <= 0)
            {
                UpdateTrackInfo();
                timerInterval = 1.0f;
            }
        }

        public void Initialize(QNTrack track, bool isLocal)
        {
            this.track = track;
            this.isLocal = isLocal;
            if (isLocal)
            {
                TrackKindText.text = "Local Audio Track";
                UserIDText.text = Config.GetInstance().UserId;
                TrackIDText.text = "";
                TagText.text = track.GetTag();
                VolumeLevelText.text = "0";
            }
            else
            {
                TrackKindText.text = "Remote Audio Track";
                UserIDText.text = track.GetUserID();
                TrackIDText.text = track.GetTrackID();
                TagText.text = track.GetTag();
                VolumeLevelText.text = "0";
            }
        }

        public QNTrack GetCurrentTrack()
        {
            return this.track;
        }

        public void OnVolumeSliderValueChanged()
        {
            if (null == track) return;
            if (isLocal)
            {
                QNLocalAudioTrack localAudioTrack = track as QNLocalAudioTrack;
                if (null != localAudioTrack)
                {
                    localAudioTrack.SetVolume(VolumeSlider.value);
                }
            }
            else
            {
                QNRemoteAudioTrack remoteAudioTrack = track as QNRemoteAudioTrack;
                if (null != remoteAudioTrack)
                {
                    remoteAudioTrack.SetVolume(VolumeSlider.value);
                }
            }
        }

        private void UpdateTrackInfo()
        {
            if (null != track)
            {
                if (isLocal)
                {
                    QNLocalAudioTrack localAudioTrack = track as QNLocalAudioTrack;
                    if (null != localAudioTrack)
                    {
                        VolumeLevelText.text = localAudioTrack.GetVolumeLevel().ToString();
                        TrackIDText.text = localAudioTrack.GetTrackID();
                        Debug.Log("localAudioTrack volume: " + VolumeLevelText.text);
                    }
                }
                else
                {
                    QNRemoteAudioTrack remoteAudioTrack = track as QNRemoteAudioTrack;
                    if (null != remoteAudioTrack)
                    {
                        VolumeLevelText.text = remoteAudioTrack.GetVolumeLevel().ToString();
                        Debug.Log("remoteAudioTrack volume: " + VolumeLevelText.text);
                    }
                }
            }
        }
    }
}

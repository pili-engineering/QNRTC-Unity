using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using qnrtc;

namespace QNRTCUnityDemo
{
    public class StatisticsPrintView : MonoBehaviour
    {
        public Text StatisticsText;

        void Start()
        {
            
        }

        void Update()
        {
            
        }

        void OnDestroy()
        {
            
        }

        public void UpdateStatisticsView(QNRTCClient client)
        {
            string statisticsString = "";
            Dictionary<string, QNNetworkQuality> userNetworkQuality = client.GetUserNetworkQuality();
            if (userNetworkQuality.Count > 0)
            {
                statisticsString += "用户网络质量：\n";
            }

            foreach (var item in userNetworkQuality)
            {
                statisticsString += "\t\t\t\tUser ID: " + item.Key + "\n";
                statisticsString += "\t\t\t\t\t\t\t\t上行网络质量：" + item.Value.UplinkNetworkGrade + "\n";
                statisticsString += "\t\t\t\t\t\t\t\t上行网络质量：" + item.Value.UplinkNetworkGrade + "\n";
                statisticsString += "\n";
            }

            statisticsString += "\n";

            Dictionary<string, QNLocalAudioTrackStats> localAudioTrackStats = client.GetLocalAudioTrackStats();
            if (localAudioTrackStats.Count > 0)
            {
                statisticsString += "本地音频 Track 统计：\n";
            }

            foreach (var item in localAudioTrackStats)
            {
                statisticsString += "\t\t\t\tTrack ID: " + item.Key + "\n";
                statisticsString += "\t\t\t\t\t\t\t\t上行音频码率：" + item.Value.UplinkBitrate + " bps\n";
                statisticsString += "\t\t\t\t\t\t\t\t上行网络 RTT：" + item.Value.UplinkRtt + " ms\n";
                statisticsString += "\t\t\t\t\t\t\t\t上行网络丢包率：" + item.Value.UplinkLostrate + " %\n";
                statisticsString += "\n";
            }

            statisticsString += "\n";

            Dictionary<string, QNRemoteAudioTrackStats> remoteAudioTrackStats = client.GetRemoteAudioTrackStats();
            if (remoteAudioTrackStats.Count > 0)
            {
                statisticsString += "远端音频 Track 统计：\n";
            }

            foreach (var item in remoteAudioTrackStats)
            {
                statisticsString += "\t\t\t\tTrack ID: " + item.Key + "\n";
                statisticsString += "\t\t\t\t\t\t\t\t下行音频码率：" + item.Value.DownlinkBitrate + " bps\n";
                statisticsString += "\t\t\t\t\t\t\t\t下行网络丢包率：" + item.Value.DownlinkLostrate + " %\n";
                statisticsString += "\t\t\t\t\t\t\t\t上行网络 RTT：" + item.Value.UplinkRtt + " ms\n";
                statisticsString += "\t\t\t\t\t\t\t\t上行网络丢包率：" + item.Value.UplinkLostrate + " %\n";
                statisticsString += "\n";
            }

            StatisticsText.text = statisticsString;
        }
    }
}
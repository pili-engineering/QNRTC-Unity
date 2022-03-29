using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using qnrtc;

namespace QNRTCUnityDemo
{
    public class MediaRelayView : MonoBehaviour
    {
        public delegate void OnStartMediaRelayButtonClickHandler(List<QNMediaRelayInfo> destRoomInfos);
        public delegate void OnUpdateMediaRelayButtonClickHandler(List<QNMediaRelayInfo> destRoomInfos);
        public delegate void OnStopMediaRelayButtonClickHandler();

        public event OnStartMediaRelayButtonClickHandler OnStartHandler;
        public event OnUpdateMediaRelayButtonClickHandler OnUpdateHandler;
        public event OnStopMediaRelayButtonClickHandler OnStopHandler;

        public Toggle Room1Toggle;
        public Toggle Room2Toggle;
        public Toggle Room3Toggle;

        public InputField Room1NameInputField;
        public InputField Room2NameInputField;
        public InputField Room3NameInputField;

        public InputField Room1TokenInputField;
        public InputField Room2TokenInputField;
        public InputField Room3TokenInputField;

        public Button StartMediaRelayButton;
        public Button UpdateMediaRelayButton;
        public Button StopMediaRelayButton;

        void Start()
        {
            
        }

        void Update()
        {
            
        }

        void OnDestroy()
        {
            
        }

        public void OnStartMediaRelayButtonClick()
        {
            List<QNMediaRelayInfo> destRoomInfos = new List<QNMediaRelayInfo>();
            if (Room1Toggle.isOn)
            {
                QNMediaRelayInfo room1Info = new QNMediaRelayInfo();
                room1Info.RoomName = Room1NameInputField.text;
                room1Info.RelayToken = Room1TokenInputField.text;
                destRoomInfos.Add(room1Info);
            }
            if (Room2Toggle.isOn)
            {
                QNMediaRelayInfo room2Info = new QNMediaRelayInfo();
                room2Info.RoomName = Room2NameInputField.text;
                room2Info.RelayToken = Room2TokenInputField.text;
                destRoomInfos.Add(room2Info);
            }
            if (Room3Toggle.isOn)
            {
                QNMediaRelayInfo room3Info = new QNMediaRelayInfo();
                room3Info.RoomName = Room3NameInputField.text;
                room3Info.RelayToken = Room3TokenInputField.text;
                destRoomInfos.Add(room3Info);
            }

            OnStartHandler(destRoomInfos);
        }

        public void OnUpdateMediaRelayButtonClick()
        {
            List<QNMediaRelayInfo> destRoomInfos = new List<QNMediaRelayInfo>();
            if (Room1Toggle.isOn)
            {
                QNMediaRelayInfo room1Info = new QNMediaRelayInfo();
                room1Info.RoomName = Room1NameInputField.text;
                room1Info.RelayToken = Room1TokenInputField.text;
                destRoomInfos.Add(room1Info);
            }
            if (Room2Toggle.isOn)
            {
                QNMediaRelayInfo room2Info = new QNMediaRelayInfo();
                room2Info.RoomName = Room2NameInputField.text;
                room2Info.RelayToken = Room2TokenInputField.text;
                destRoomInfos.Add(room2Info);
            }
            if (Room3Toggle.isOn)
            {
                QNMediaRelayInfo room3Info = new QNMediaRelayInfo();
                room3Info.RoomName = Room3NameInputField.text;
                room3Info.RelayToken = Room3TokenInputField.text;
                destRoomInfos.Add(room3Info);
            }

            OnUpdateHandler(destRoomInfos);
        }

        public void OnStopMediaRelayButtonClick()
        {
            OnStopHandler();
        }
    }
}
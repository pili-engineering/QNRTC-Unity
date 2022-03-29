using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Text;
using System.Text.RegularExpressions;
using System.Runtime;
using qnrtc;

namespace QNRTCUnityDemo
{
    public class HomeSceneScript : MonoBehaviour
    {
        public InputField TokenInputField;
        public Text VersionText;
        public Dropdown TransferProtocalDropdown;
        public Dropdown LogLevelDropdown;
        public Toggle Aec3Toggle;
        public Toggle RedToggle;
        public Dropdown ModeDropdown;
        public Dropdown RoleDropdown;
        public Dropdown AudioSourceDropdown;
        public Button JoinButton;

        // Start is called before the first frame update
        void Start()
        {
            VersionText.text = QNRTC.GetVersion();
            TokenInputField.text = "HomeSceneScript set token";
        }

        // Update is called once per frame
        void Update()
        {

        }

        public void OnModeDropdownValueChanged(int index)
        {
            RoleDropdown.interactable = (1 == index) ? true : false;
        }

        public void OnJoinButtonClick()
        {
            if (TokenInputField.text.Equals(""))
            {
                Debug.Log("Please fill in room token first");
                return;
            }

            string[] tokenParts = Regex.Split(TokenInputField.text, ":", RegexOptions.IgnoreCase);
            if (tokenParts.Length < 3)
            {
                Debug.Log("Token invalid");
                return;
            }

            string tokenInfoPart = tokenParts[tokenParts.Length - 1];
            byte[] base64Bytes = Convert.FromBase64String(tokenInfoPart);
            string base64DecodedString = Encoding.UTF8.GetString(base64Bytes);

            QNTokenInfo tokenInfo = JsonUtility.FromJson<QNTokenInfo>(base64DecodedString);
            if (!tokenInfo.appId.Equals(""))
            {
                Config.GetInstance().AppId = tokenInfo.appId;
            }
            else
            {
                Debug.Log("Token parse appId failed");
                return;
            }

            if (!tokenInfo.roomName.Equals(""))
            {
                Config.GetInstance().RoomName = tokenInfo.roomName;
            }
            else
            {
                Debug.Log("Token parse roomName failed");
                return;
            }

            if (!tokenInfo.userId.Equals(""))
            {
                Config.GetInstance().UserId = tokenInfo.userId;
            }
            else
            {
                Debug.Log("Token parse userId failed");
                return;
            }

            Config.GetInstance().Token = TokenInputField.text;
            Config.GetInstance().Policy = (QNTransportPolicy)TransferProtocalDropdown.value;
            Config.GetInstance().LogLevel = (QNLogLevel)LogLevelDropdown.value;
            Config.GetInstance().IsAEC3Enabled = Aec3Toggle.isOn;
            Config.GetInstance().IsRedEnabled = RedToggle.isOn;
            Config.GetInstance().Mode = (QNClientMode)ModeDropdown.value;
            Config.GetInstance().Role = (QNClientRole)RoleDropdown.value;
            Config.GetInstance().IsCustomAudio = (0 == AudioSourceDropdown.value ? false : true);

            SceneManager.LoadScene("AudioRoomScene", LoadSceneMode.Additive);
        }
    }
}


using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using qnrtc;

namespace QNRTCUnityDemo
{
    public class SendMessageView : MonoBehaviour
    {
        public delegate void OnSendMessageButtonClickHandler(string userId, string messageId, string message);
        public event OnSendMessageButtonClickHandler OnSendHandler;

        public InputField MessageInputField;
        public InputField MessageIdInputField;
        public Dropdown UserListDropdown;
        public Button SendButton;

        void Start()
        {
            
        }

        void Update()
        {
            
        }

        public void UpdateUserList(List<QNRemoteUser> userList)
        {
            List<Dropdown.OptionData> options = new List<Dropdown.OptionData>();
            if (0 == userList.Count)
            {
                Dropdown.OptionData option = new Dropdown.OptionData("-");
                options.Add(option);
            }
            else
            {
                foreach (QNRemoteUser remoteUser in userList)
                {
                    Dropdown.OptionData option = new Dropdown.OptionData(remoteUser.UserId);
                    options.Add(option);
                }
                Dropdown.OptionData allOption = new Dropdown.OptionData("所有人");
                options.Add(allOption);
            }

            UserListDropdown.options = options;
        }

        public void ClearUserList()
        {
            List<Dropdown.OptionData> options = new List<Dropdown.OptionData>();
            Dropdown.OptionData option = new Dropdown.OptionData("-");
            options.Add(option);
            UserListDropdown.options = options;
        }

        public void OnSendButtonClick()
        {
            if (UserListDropdown.options.Count < 2) return;

            if (UserListDropdown.value == UserListDropdown.options.Count - 1)
            {
                OnSendHandler("", MessageIdInputField.text, MessageInputField.text);
            }
            else
            {
                OnSendHandler(UserListDropdown.options[UserListDropdown.value].text, MessageIdInputField.text, MessageInputField.text);
            }
        }
    }
}

using System;
using UnityEngine;
using UnityEngine.UI;

namespace QNRTCUnityDemo
{
    public class LogPrintView : MonoBehaviour
    {
        public Text LogText;
        public Button clearBotton;

        void Start()
        {

        }

        void Update()
        {
            LogText.text = LogRecorder.GetInstance().GetLog();
        }

        void OnDestroy()
        {

        }

        public void OnClearButtonClick()
        {
            LogRecorder.GetInstance().Clear();
        }
    }

    public class LogRecorder
    {
        private static LogRecorder shareInstance;
        private string logText;

        private LogRecorder() { }

        public static LogRecorder GetInstance()
        {
            if (null == shareInstance)
            {
                shareInstance = new LogRecorder();
            }
            return shareInstance;
        }

        public void Record(string logText)
        {
            this.logText += "\n" + logText;
        }

        public string GetLog()
        {
            return logText;
        }

        public void Clear()
        {
            logText = "";
        }
    }
}

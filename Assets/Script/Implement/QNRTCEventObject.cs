using System;
using UnityEngine;
using System.Collections.Generic;

namespace qnrtc
{
    public class QNRTCEventQueue
    {
        public static GameObject EventGameObject;
        public static QNRTCEventQueueObject EventQueueObject;

        private static string eventGameObjectName = "QNRTC_EVENT_GAME_OBJECT_NAME";

        public static void CreateEventQueueObject()
        {
            DestroyEventQueueObject();
            EventGameObject = new GameObject(eventGameObjectName);
            EventQueueObject = EventGameObject.AddComponent<QNRTCEventQueueObject>();
            GameObject.DontDestroyOnLoad(EventGameObject);
            EventGameObject.hideFlags = HideFlags.HideInHierarchy;
        }

        public static void DestroyEventQueueObject()
        {
            if (!ReferenceEquals(EventGameObject, null))
            {
                if (!ReferenceEquals(EventQueueObject, null))
                {
                    EventQueueObject.ClearQueue();
                    EventQueueObject = null;
                }
                GameObject.Destroy(EventGameObject);
                EventGameObject = null;
            }
        }
    }

    public class QNRTCEventQueueObject : MonoBehaviour
    {
        private Queue<Action> queue = new Queue<Action>();

        void Awake()
        {

        }

        void Update()
        {
            Action currentAction = Dequeue();
            if (null != currentAction)
            {
                currentAction();
            }
            currentAction = null;
        }

        void OnDestroy()
        {
            ClearQueue();
        }

        public void Enqueue(Action action)
        {
            lock (queue)
            {
                queue.Enqueue(action);
                Debug.Log("QNRTCEventQueueObject enqueue action");
            }
        }

        private Action Dequeue()
        {
            Action action = null;
            lock (queue)
            {
                if (queue.Count > 0)
                {
                    action = queue.Dequeue();
                    Debug.Log("QNRTCEventQueueObject dequeue action");
                }
            }
            return action;
        }

        public void ClearQueue()
        {
            lock (queue)
            {
                queue.Clear();
            }
        }
    }
}

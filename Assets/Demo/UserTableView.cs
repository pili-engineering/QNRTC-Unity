using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using qnrtc;

namespace QNRTCUnityDemo
{
    public class UserTableView : MonoBehaviour
    {
        public RectTransform tableView;
        public RectTransform contentView;
        public GameObject tableViewCell;

        private List<UserTableViewCell> userCells = new List<UserTableViewCell>();

        // Use this for initialization
        void Start()
        {

        }

        // Update is called once per frame
        void Update()
        {

        }

        public void AddTrack(QNTrack track, bool isLocal)
        {
            foreach (UserTableViewCell userCell in userCells)
            {
                if (userCell.GetCurrentTrack() == track) return;
            }

            GameObject cell = Instantiate(tableViewCell);
            cell.transform.SetParent(contentView.transform, false);

            UserTableViewCell tableViewCellScript = cell.GetComponent<UserTableViewCell>();
            tableViewCellScript.Initialize(track, isLocal);

            userCells.Add(tableViewCellScript);
        }

        public void RemoveTrack(QNTrack track)
        {
            for (int i = 0; i < userCells.Count; i++)
            {
                UserTableViewCell userCell = userCells[i];
                if (userCell.GetCurrentTrack() == track)
                {
                    GameObject.Destroy(userCell.gameObject);
                    userCells.Remove(userCell);
                }
            }
        }

        public void RemoveAll()
        {
            for (int i = 0; i < userCells.Count; i++)
            {
                UserTableViewCell userCell = userCells[i];
                GameObject.Destroy(userCell.gameObject);
                userCells.Remove(userCell);
            }
        }

        public void RemoveRemote()
        {
            for (int i = 0; i < userCells.Count; i++)
            {
                UserTableViewCell userCell = userCells[i];
                if (userCell.GetCurrentTrack() is QNRemoteTrack)
                {
                    GameObject.Destroy(userCell.gameObject);
                    userCells.Remove(userCell);
                }
            }
        }
    }
}

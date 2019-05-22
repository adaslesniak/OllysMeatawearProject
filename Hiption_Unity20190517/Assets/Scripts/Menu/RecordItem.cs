using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class RecordItem : MonoBehaviour
{
    public Text textItem;
    public string trackName;

    public void OpenTrackToRecord ()
    {
        GameObject goPersist = GameObject.Find ("PersistentRecordingData");
        DontDestroyOnLoad (goPersist);
        goPersist.GetComponent<PersistentRecordingData> ().trackName = trackName;
        Application.LoadLevel ("Recording");
    }
}

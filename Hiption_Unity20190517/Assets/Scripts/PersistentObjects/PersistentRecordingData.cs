using UnityEngine;
using System.Collections;

public class PersistentRecordingData : MonoBehaviour
{
    public string trackName;
    
    public void Start ()
    {
        if (GameObject.FindObjectsOfType<PersistentRecordingData> ().Length > 1)
            Destroy (gameObject);
    }
}

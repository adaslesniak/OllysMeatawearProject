using UnityEngine;
using System.Collections;

public class PopulateRecordMenu : MonoBehaviour
{
    public GameObject recordItemPrefab;

    // Use this for initialization
    void Start ()
    {
        AudioClip[] clips = Resources.LoadAll<AudioClip> ("Tracks");

        foreach (AudioClip clip in clips) {
            GameObject recordItem = Instantiate (recordItemPrefab) as GameObject;
            RecordItem itemComponent = recordItem.GetComponent<RecordItem> ();
            itemComponent.trackName = clip.name;
            itemComponent.textItem.text = clip.name;

            recordItem.transform.SetParent (transform, false);
        }
    }
	
    // Update is called once per frame
    void Update ()
    {
	
    }
}

using UnityEngine;
using System.Collections;
using System.IO;
using System.Collections.Generic;

public class PopulatePlayMenu : MonoBehaviour
{
    public GameObject playItemPrefab;
    
    // Use this for initialization
    void Start ()
    {
        List<string> rmaps = FileUtility.GetRmapList();
        List<string> clipNames = FileUtility.GetClipList();
        
		foreach (string clip in clipNames) {
			Debug.Log ("clipnames:   " + clip);
		}

        
        foreach (string rmap in rmaps) {
            //string rmapFile = Path.GetFileName (rmap);
            

			Debug.Log ("rmap " + rmap);

			string rmapFile = rmap.Replace ("Assets/Resources/RhythmMaps/", "");


			Debug.Log ("rmapFile " + rmapFile);

            if (!clipNames.Contains (rmapFile)) {
                Debug.Log ("Could not find " + rmapFile);
                continue;
            }
            
            GameObject playItem = Instantiate (playItemPrefab) as GameObject;
            PlayItem itemComponent = playItem.GetComponent<PlayItem> ();
            itemComponent.rmapName = rmapFile;
            itemComponent.textItem.text = rmapFile.Replace (".rmap", "");
            
            playItem.transform.SetParent (transform, false);
        }
    }
    
    // Update is called once per frame
    void Update ()
    {
        
    }
}

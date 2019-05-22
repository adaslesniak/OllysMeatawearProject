using UnityEngine;
using System.Collections;

public class PersistentPlayData : MonoBehaviour
{
    //When a UI button is pressed the rmap indicated by the button is assigned to rmapName.
    //This string is referenced by the OrbManager to load indicated rmap from the persistant data path
    public string rmapName;
    
    public void Start ()
    {
        if (GameObject.FindObjectsOfType<PersistentPlayData> ().Length > 1)
            Destroy (gameObject);
    }
}

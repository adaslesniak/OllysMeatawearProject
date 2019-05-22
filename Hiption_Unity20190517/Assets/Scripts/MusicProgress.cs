using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class MusicProgress : MonoBehaviour
{

    public AudioSource music;
    public Image progressImage;
    
    // Update is called once per frame
    void Update ()
    {
        if (music.time == 0)
            progressImage.fillAmount = 0.0f;
        else {
            float newFill = (music.time / music.clip.length);
            progressImage.fillAmount = newFill;
        }
    }
}

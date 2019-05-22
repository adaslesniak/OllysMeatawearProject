using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class LoadingManager : MonoBehaviour {

    [Header("Loading Visuals")]
    public Image loadingIcon;

    RectTransform rect = null;
    public float speed;

    public string sceneToLoad;

    void Start()
    {
        rect = loadingIcon.GetComponent<RectTransform>();
        StartCoroutine(AsyncLoad());    
    }

    int counter=0;
//
//    public static void LoadLevel(string level)
//    {
//        sceneToLoad = level;
//    }
//
    IEnumerator AsyncLoad()
    {
        yield return null;
        
        AsyncOperation ao = SceneManager.LoadSceneAsync(sceneToLoad);
        ao.allowSceneActivation = false;
        
        while(!ao.isDone)
        {
            Debug.Log("LOADING...");
            if (ao.progress < 0.9f)
            {
                rect.Rotate(new Vector3(0,0,Time.deltaTime*speed));
                Debug.Log("Lower vals");
            }

            if (ao.progress >= 0.9f)
            {
                ao.allowSceneActivation = true;
                Debug.Log("Greater vals");
            }

            yield return null;
        }

    }
}

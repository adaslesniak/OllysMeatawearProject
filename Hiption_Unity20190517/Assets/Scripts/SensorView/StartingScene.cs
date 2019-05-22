using System.Runtime.InteropServices;
using UnityEngine.SceneManagement;
using UnityEngine;
using System;

public class StartingScene : MonoBehaviour {

    public GameObject qaPanel;
    public GameObject loadingScr;
    
    public string levelToLoad;

    void Start()
    {
        loadingScr.SetActive(false);
    }

    void OnEnable(){
        WAXLink.OnDeviceConnected += WAXLink_OnDeviceConnected;
    }

    void OnDisable(){
        WAXLink.OnDeviceConnected -= WAXLink_OnDeviceConnected;
    }

    void WAXLink_OnDeviceConnected (String name)
    {
        Debug.Log("WAX  DEV: NAME: "+name);
    } 

   /*[DllImport ("__Internal")]
    static extern void _DisplayMetawearSensorView();

    [DllImport ("__Internal")]
    static extern void _exit_main_thread();
    */
    public void OnClick_OpenNativeView()
    {
        LoadScene("SampleScene");

        //_DisplayMetawearSensorView();
    }

    public void OnClick_OpenGameScene()
    {
        //SceneManager.LoadScene(1, LoadSceneMode.Single);
        //loadingScr.GetComponent<LoadingManager>().sceneToLoad = levelToLoad;
        //loadingScr.SetActive(true);

//        LoadScene("MainMenu");
		LoadScene("DeviceSelectionScreen");
    }

    public void ExitNative(){
        Debug.Log("Exiting native");
        //_exit_main_thread();
    }

    public void OnClick_Exit()
    {
        ExitNative();
        Application.Quit();
    }

    public void OnClick_QA()
    {
        qaPanel.SetActive(true);
    }

    public void LoadScene(string _loadScene)
    {
        loadingScr.GetComponent<LoadingManager>().sceneToLoad = _loadScene;
        loadingScr.SetActive(true);
    }

    void Update()
    {
        //Logger.instance.LogLine("Starting scene logging",gameObject); 
    }
}
    
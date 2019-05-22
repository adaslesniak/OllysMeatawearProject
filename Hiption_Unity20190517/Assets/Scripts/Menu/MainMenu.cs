using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;


public class MainMenu : MonoBehaviour {

    public string loadScene;
    public GameObject loadingScr;
	public GameObject selectingDeviceScreen;

	public NativeCommunication linkManager;

	void Start()
	{
		GameObject lmObj = GameObject.Find ("LinkManager");
		if (lmObj == null) 
		{
			Debug.Log ("didnt find link manager");
		}
		linkManager = lmObj.GetComponent<NativeCommunication> ();
//		linkManager.snsrManager.selectedPlayers.Clear ();
//		linkManager.snsrManager.playersDevices.Clear ();
	}

    public void BtnBack_Active()
	{
		
        LoadScene(loadScene);
    }

    public void LoadScene(string _loadScene)
    {
        loadingScr.GetComponent<LoadingManager>().sceneToLoad = _loadScene;
        loadingScr.SetActive(true);
    }


}

using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class PlayItem : MonoBehaviour
{
    public Text textItem;
    public string rmapName;

	public GameObject lmObj;
	public NativeCommunication linkManager;

	public GameObject testRmaps;

	void Start()
	{
		lmObj = GameObject.Find ("LinkManager");

		linkManager = lmObj.GetComponent<NativeCommunication> ();

		testRmaps = GameObject.Find ("TestRmaps");
	}
    
    public void OpenRmapToPlay ()
    {
		
		#if !UNITY_EDITOR

		if(linkManager.snsrManager.selectedPlayers.Count != 2 && textItem.text.Contains ("_2"))//textItem.text == "schedule")
		{
		testRmaps.GetComponent<TestRamps> ().errorScreen.SetActive (true);
		return;
		}
		else
		{
		GameObject goPersist = GameObject.Find ("PersistentPlayData");
		DontDestroyOnLoad (goPersist);
		goPersist.GetComponent<PersistentPlayData> ().rmapName = rmapName;
		//Application.LoadLevel ("MainScene");
		//goPersist.GetComponent<PersistentPlayData>().loadingManager.gameObject.SetActive(true);

		GameObject.Find("UIManager").GetComponent<MainMenu>().LoadScene("MainScene");
		}

		#endif

		#if UNITY_EDITOR

		GameObject goPersist = GameObject.Find ("PersistentPlayData");
		DontDestroyOnLoad (goPersist);
		goPersist.GetComponent<PersistentPlayData> ().rmapName = rmapName;
		//Application.LoadLevel ("MainScene");
		//goPersist.GetComponent<PersistentPlayData>().loadingManager.gameObject.SetActive(true);

		GameObject.Find("UIManager").GetComponent<MainMenu>().LoadScene("MainScene");

		#endif
       
    }
}

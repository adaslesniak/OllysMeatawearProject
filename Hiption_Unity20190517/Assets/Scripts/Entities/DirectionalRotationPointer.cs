using UnityEngine;
using System.Collections;

public class DirectionalRotationPointer : MonoBehaviour {
	
	WAXLink linkManager;
	void Start () {
		GameObject linkObj = GameObject.Find("LinkManager");
		
		if (linkObj == null)
		{
			linkObj = new GameObject("LinkManager");
			linkManager = linkObj.AddComponent<WAXLink>();
		}
		else
		{
			linkManager = linkObj.GetComponent<WAXLink>();
		}
	}
	
	void Update () {
		// Get different angle
	//	transform.eulerAngles = new Vector3 (0, 0, 0);
	}
}

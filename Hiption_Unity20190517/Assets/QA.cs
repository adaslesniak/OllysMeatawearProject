using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class QA : MonoBehaviour {

    public GameObject qaPanel;
    
	void Start () 
    {
        DontDestroyOnLoad(this.gameObject);		
	}

    public void OnClick_QA()
    {
        qaPanel.GetComponent<Animator>().SetBool("slide_anim", true);
    }
}

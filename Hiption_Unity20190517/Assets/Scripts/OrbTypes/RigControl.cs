using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class RigControl : MonoBehaviour {

	public Animator animationlink;

	public Transform[] bones;

	public List<Transform> attached;

	public Transform Gimble_A; 
	public Transform Gimble_B; 
	public Transform Gimble_C; 

	// start teh animation when called.
	public void Run ()
	{
		animationlink.SetTrigger ("Start");

	}
	public void Run (float _time)
	{
		animationlink.speed = _time;
		animationlink.SetTrigger ("Start");
	}

	// should we die?
	void Update()
	{
		if (CheckDone()) {
			Destroy (gameObject);
		}
	}

	// Are all the balls attached (if any) gone?
	bool CheckDone()
	{
		if (attached.Count == 0) {
			Debug.Log ("******* Nothing attached!");
			return false;
		}
		
		bool die = true;
		for (int loop = 0; loop < attached.Count; loop++) {
			if (attached [loop] != null) {
				die = false;
			}
		}
		if (die)
			Debug.Log ("******* All attached gone!");
		return die;
	}

}

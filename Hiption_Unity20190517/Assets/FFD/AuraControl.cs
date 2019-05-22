using UnityEngine;
using System.Collections;

public class AuraControl : MonoBehaviour {


	// Use this for initialization
	public void AuraStart () {
		GetComponent<ParticleSystem> ().Play ();
	}

	// FFD added code nov 19 2016
	public void AuraStop () {
		GetComponent<ParticleSystem> ().Stop ();
		gameObject.SetActive (false);
	}
}

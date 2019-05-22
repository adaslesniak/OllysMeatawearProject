using UnityEngine;
using System.Collections;

public class RelayTrigger : MonoBehaviour {

	void OnTriggerEnter2D (Collider2D other)
	{
		//Debug.Log ("Trigger?");
		transform.parent.SendMessage ("OnTriggerEnter2D",other);
	}
}

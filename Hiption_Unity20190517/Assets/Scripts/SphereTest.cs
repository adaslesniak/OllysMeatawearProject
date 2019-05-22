using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SphereTest : MonoBehaviour {

    public float speed;
    public GameObject loadingScr;

    void Update()
    {
        transform.Translate(Vector3.right*speed);
    }

    void OnTriggerEnter(Collider collider)
    {
        if (collider.tag == "HitOrb")
        {
            Debug.Log("HIT DETECTED");
            GetComponent<SphereCollider>().enabled = false;
            loadingScr.gameObject.SetActive(true);
        }
    }
}

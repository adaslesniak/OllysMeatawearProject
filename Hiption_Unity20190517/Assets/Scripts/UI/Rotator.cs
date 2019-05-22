using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rotator : MonoBehaviour {

    RectTransform rect = null;
    public float speed;

    void Start()
    {
        rect = GetComponent<RectTransform>();
    }

    void Update()
    {
        rect.Rotate(new Vector3(0,0,Time.deltaTime*speed));
    }
}

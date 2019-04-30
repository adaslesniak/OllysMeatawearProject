using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class iOSMessageReceiver : MonoBehaviour {

    private static iOSMessageReceiver _instance;
    private static iOSMessageReceiver instance { get {
            if (_instance == null) {
                var obj = new GameObject("iOSMessageReceiver"); //NOTE: important that name matches class name
                obj.AddComponent<iOSMessageReceiver>();
            }
            return _instance;
        }
    }

    private void Awake() {
        if(_instance != null) {
            Destroy(gameObject);
            return;
        }
        _instance = this;
        DontDestroyOnLoad(gameObject);
    }

    void onMessageFromiOS(string json) {
        Debug.Log("got message from ios: " + json);
    }
}

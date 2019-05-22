//TODO -Persist toggle settings.

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Logger : MonoBehaviour {

    public static Logger instance;
    public static bool toggleLogs = false;

    void OnEnable()
    {
        QAmenu.UnityLogging += QAmenu_UnityLogging;
    }

    void OnDisable()
    {
        QAmenu.UnityLogging -= QAmenu_UnityLogging;
    }

    void QAmenu_UnityLogging (bool toggle)
    {
        //Debug.Log("Logging: "+toggle);
        LogLine("UNITY LOGGING: "+toggle.ToString());
        toggleLogs = toggle;
    }


    void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        else if(instance != null)
        {
            Destroy(gameObject);
        }
    }

    public static void LogLine(string _message, GameObject _object)
    {
        if (toggleLogs)
        {
            Debug.Log(_message, _object);
        }
    }

    public static void LogLine(string _message)
    {
        if (toggleLogs)
        {
            Debug.Log(_message);
        }
    }
}


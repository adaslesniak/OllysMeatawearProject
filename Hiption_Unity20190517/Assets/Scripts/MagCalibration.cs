using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class MagCalibration : MonoBehaviour
{

    public WAXLink linkManager;
    public Text buttonText;

    bool isCalibrating = false;

    void Start ()
    {
        if (linkManager == null) {
            GameObject lmObj = new GameObject ("LinkManager");
            linkManager = lmObj.AddComponent<WAXLink> ();
            DontDestroyOnLoad (lmObj);
        }

        linkManager.OnMagCalibrationComplete += MagCalibrationComplete;
        linkManager.OnMagCalibrationUpdate += MagCalibrationUpdate;
    }

    public void DidPressCalibrateMag ()
    {
        buttonText.text = "Calibrating Mag 1...";
        isCalibrating = true;
        linkManager.CalibrateMag ();
    }

    void MagCalibrationComplete ()
    {
        isCalibrating = false;
        buttonText.text = "Calibrate Mag 1";
    }
    
    void MagCalibrationUpdate (string newVal)
    {
        buttonText.text = newVal + "%";
    }
}

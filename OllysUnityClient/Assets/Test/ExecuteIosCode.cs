using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


[RequireComponent(typeof(Button))]
public class ExecuteIosCode : MonoBehaviour
{
    public bool isScanForNew = false;
    public string deviceIdToFlash = "";
    private int iDebug = 0;

    // Start is called before the first frame update
    void Start()
    {
        var metawearHanlder = FindObjectOfType<MetaWeariOSUnity>();
        var theBtn = GetComponent<Button>();
        theBtn.onClick.AddListener(() => {
            if (!string.IsNullOrEmpty(deviceIdToFlash)) {
                print("inside c# -> start flashing: " + deviceIdToFlash);
                MetaWeariOSUnity.StartFlashingDevice(deviceIdToFlash);
            } else if (isScanForNew) {
                print("inside unity -> calling iOS to scan for new devices " + isScanForNew);
                MetaWeariOSUnity.ScanForNewDevices();
            } else {
                print("inside unity -> calling iOS to scan for known devices" + !isScanForNew);
                MetaWeariOSUnity.ScanForKnownDevices();
            }
        });
        var label = theBtn.GetComponentInChildren<Text>();
        if(iDebug == 0) {
            label.color = Color.green;
            iDebug = 1;
        } else if(iDebug == 1) {
            label.color = Color.red;
            iDebug = 2;
        } else if(iDebug == 2) {
            label.color = Color.blue;
            iDebug = 3;
        } else {
            label.color = Color.black;
            iDebug = 4;
        }
    }
}

/* crated by Adas Lesniak on Apr 30 2019 */
using UnityEngine;
using UnityEngine.UI;


[RequireComponent(typeof(Button))]
public class ExecuteIosCode : MonoBehaviour
{

    public enum DebugFunction {
        SCAN_NEW, SCAN_KNOWN, FORGET_KNOWN
    }
    public DebugFunction function;
    private int iDebug = 0;

    // Start is called before the first frame update
    void Start()
    {
        var metawearHanlder = FindObjectOfType<MetaWearNative>();
        var theBtn = GetComponent<Button>();
        theBtn.onClick.AddListener(() => {
            if (function == DebugFunction.SCAN_NEW) {
                print("inside unity -> calling iOS to scan for new devices ");
                MetaWearNative.ScanForNewDevices();
            } else if(function == DebugFunction.SCAN_KNOWN) {
                print("inside unity -> calling iOS to scan for known devices");
                MetaWearNative.ScanForKnownDevices();
            } else if(function == DebugFunction.FORGET_KNOWN) {
                print("inside unity -> calling iOS to forget all remembered devices");
                MetaWearNative.ForgetAllRememberdDevices();
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

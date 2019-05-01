/* crated by Adas Lesniak on May 01 2019 */
using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;
using System.Linq;

public class SetupDeviceViewCtrl : MonoBehaviour
{
    [SerializeField] Button backBtn;
    [SerializeField] Image placeHighlighted;
    [SerializeField] Image placeInactive;

    DeviceCard touchedDevice;
    SetpuViewConfirmationPanel confirmationPanel;


    void Start() {
        var homeCtrl = FindObjectOfType<HomeViewCtrl>();
        backBtn.onClick.AddListener(() => {
            homeCtrl.SendViewAway(this.transform);
            isToScan = false;
        });
        confirmationPanel = FindObjectOfType<SetpuViewConfirmationPanel>();
        MetaWeariOSUnity.onNewDevicesScaned += OnNewDevicesFound;
    }

    bool isToScan = false;
    public void StartScanningForNearestDevice() {
        isToScan = true;
        Scan();
    }
    private void Scan() {
        print("will call scan  (" + isToScan+")");
        if(isToScan) {
            MetaWeariOSUnity.ScanForNewDevices();
        }
    }

    //refactor - it's ugly with all those returns of which some are lambdas and others are real returns from this method
    private void OnNewDevicesFound(List<DeviceCard> found) {
        Invoke("Scan", 1.34f);
        print("Unity viewCtrl is processing event: SetupDeviceViewCtrl.OnNewDevicesFound");
        if (found.Count == 0) {
            print("ups... nothing new under the sky");
            EnableSetupUI(false);
            return;
        }
        found.Sort((d1, d2) => {
            return d2.signalStrength.CompareTo(d1.signalStrength);
        });
        var nearest = found.First((device) => {
            return device.signalStrength <= 0;
        });
        if(nearest.signalStrength < -55) { //FIXME: should be -39
            print("there is new device but too far away (signal= ("+nearest.signalStrength+ "); " +
            	" last is: " + found.Last().signalStrength +
            	" first is: " + found.First().signalStrength);
            EnableSetupUI(false);
            return;
        }
        touchedDevice = nearest;
        EnableSetupUI(true);
    }

    private void EnableSetupUI(bool isToBeHighlighted) {
        print("YEAHHHH!!!!");
        confirmationPanel.Show((isCOnfrimed) => {
            print("NOT_IMPLENTED");
        });
        placeHighlighted.enabled = isToBeHighlighted; //yeah... could be nicer
        placeInactive.enabled = !isToBeHighlighted;
    }
}

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
    SetupDeviceConfirmationPanel confirmationPanel;
    NameDeviceViewCtrl namingView;


    void Awake() {
        var homeCtrl = FindObjectOfType<HomeViewCtrl>();
        backBtn.onClick.AddListener(() => {
            homeCtrl.SendViewAway(this.transform);
            StopScannning();
        });
        confirmationPanel = FindObjectOfType<SetupDeviceConfirmationPanel>();
        namingView = FindObjectOfType<NameDeviceViewCtrl>();
    }

    bool isToScan = false;
    public void StartScanningForNearestDevice() {
        MetaWearNative.onNewDevicesScaned += OnNewDevicesFound;
        isToScan = true;
        Scan();
    }
    void StopScannning() {
        MetaWearNative.onNewDevicesScaned -= OnNewDevicesFound;
        isToScan = false;
    }
    private void Scan() {
        print("will call scan  (" + isToScan+")");
        if(isToScan) {
            MetaWearNative.ScanForNewDevices();
        }
    }

    //refactor - it's ugly with all those returns of which some are lambdas and others are real returns from this method
    private void OnNewDevicesFound(List<DeviceCard> found) {

        print("Unity viewCtrl is processing event: SetupDeviceViewCtrl.OnNewDevicesFound");
        void finishWithoutTouchedDevice() {
            if(touchedDevice != null) {
                MetaWearNative.StopDeviceLeds(touchedDevice);
                touchedDevice = null;
            }
            EnableSetupUI(false);
            Invoke("Scan", 1.34f); 
        }
        print("ns1");
        if (found.Count == 0) {
            print("nothing new under the sky");
            finishWithoutTouchedDevice();
            return;
        }
        print("ns2");
        found.Sort((d1, d2) => {
            return d2.signalStrength.CompareTo(d1.signalStrength);
        });
        var nearest = found.First((device) => {
            return device.signalStrength <= 0;
        });
        print("ns3");
        if (nearest.signalStrength < -55) { 
            print("there is new device but too far away (signal= ("+nearest.signalStrength+ "); " +
            	" last is: " + found.Last().signalStrength +
            	" first is: " + found.First().signalStrength);
            finishWithoutTouchedDevice();
            return;
        }
        if(touchedDevice == nearest) {
            return; 
        }
        print("ns4");
        if (touchedDevice != null) {
            print("stopping device led flashing");
            MetaWearNative.StopDeviceLeds(touchedDevice);
        }
        print("ns5");
        touchedDevice = nearest;
        MetaWearNative.StartFlashingDevice(touchedDevice);
        print("starting device flashing: " + nearest.id);
        EnableSetupUI(true); 
        //Invoke("Scan", 1.66f); //to check if dissapeared from range
    }

    private void EnableSetupUI(bool isToBeHighlighted) {
        placeHighlighted.enabled = isToBeHighlighted; //yeah... could be nicer
        placeInactive.enabled = !isToBeHighlighted;
        if (isToBeHighlighted) {
            confirmationPanel.Show((isConfrimed) => {
                EnableSetupUI(false);
                if (isConfrimed) {
                    LearnTouchedDevice();
                } else if (touchedDevice != null) {
                    print("calling to turn of flashing from SetupDeviceViewCtrl");
                    MetaWearNative.StopDeviceLeds(touchedDevice);
                }
            });
        }
    }

    private void LearnTouchedDevice() {
        namingView.Show((name) => {
            if(touchedDevice == null) {
                //that is the case
                Debug.LogError("ups... that should be solved");
                return;
            }
            print("stop device leds is called from unity viewCtrl");
            MetaWearNative.StopDeviceLeds(touchedDevice);
            MetaWearNative.RememberDevice(touchedDevice, name);
            touchedDevice = null;
            Invoke("Scan", 0.5f); 
        });
    }
}

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
    NameDeviceViewCtrl namingView;


    void Start() {
        var homeCtrl = FindObjectOfType<HomeViewCtrl>();
        backBtn.onClick.AddListener(() => {
            homeCtrl.SendViewAway(this.transform);
            isToScan = false;
        });
        confirmationPanel = FindObjectOfType<SetpuViewConfirmationPanel>();
        MetaWeariOSUnity.onNewDevicesScaned += OnNewDevicesFound;
        namingView = FindObjectOfType<NameDeviceViewCtrl>();
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

        print("Unity viewCtrl is processing event: SetupDeviceViewCtrl.OnNewDevicesFound");
        void finishWithoutTouchedDevice() {
            if(touchedDevice != null) {
                MetaWeariOSUnity.StopDeviceLeds(touchedDevice);
                touchedDevice = null;
            }
            EnableSetupUI(false);
            Invoke("Scan", 1.34f);
        }
        if (found.Count == 0) {
            print("ups... nothing new under the sky");
            finishWithoutTouchedDevice();
            return;
        }
        found.Sort((d1, d2) => {
            return d2.signalStrength.CompareTo(d1.signalStrength);
        });
        var nearest = found.First((device) => {
            return device.signalStrength <= 0;
        });
        if(nearest.signalStrength < -44) { //FIXME: should be -39
            print("there is new device but too far away (signal= ("+nearest.signalStrength+ "); " +
            	" last is: " + found.Last().signalStrength +
            	" first is: " + found.First().signalStrength);
            finishWithoutTouchedDevice();
            return;
        }
        if(touchedDevice == nearest) {
            return; 
        }
        if(touchedDevice != null) {
            MetaWeariOSUnity.StopDeviceLeds(touchedDevice);
        }
        touchedDevice = nearest;
        MetaWeariOSUnity.StartFlashingDevice(touchedDevice);
        EnableSetupUI(true);
        Invoke("Scan", 1.66f); //to check if dissapeared from range
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
                    MetaWeariOSUnity.StopDeviceLeds(touchedDevice);
                }
            });
        }
    }

    private void LearnTouchedDevice() {
        namingView.Show((name) => {
            if(touchedDevice == null) {
                Debug.LogError("ups... that should be solved");
                return;
            }
            print("stop device leds is called from unity viewCtrl");
            MetaWeariOSUnity.StopDeviceLeds(touchedDevice);
            MetaWeariOSUnity.RememberDevice(touchedDevice, name);
            touchedDevice = null;
        });
    }
}

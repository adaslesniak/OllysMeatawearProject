/* crated by Adas Lesniak on May 02 2019 */
using UnityEngine;
using UnityEngine.UI;


public class DeviceTableCell : MonoBehaviour {

    [SerializeField] Toggle redLedSwitch;
    [SerializeField] Toggle blueLedSwitch;
    [SerializeField] Toggle accelerometerSwitch;
    [SerializeField] Toggle sensorFusionSwitch;
    [SerializeField] Text nameLabel;
    [SerializeField] Text idLabel;


    public DeviceCard controlled { get; private set; }

    public void Setup(DeviceCard forDevice) {
        controlled = forDevice;
        nameLabel.text = forDevice.name;
        idLabel.text = forDevice.id;

        redLedSwitch.SetIsOnWithoutNotify(false);
        blueLedSwitch.SetIsOnWithoutNotify(false);
        accelerometerSwitch.SetIsOnWithoutNotify(false);
        sensorFusionSwitch.SetIsOnWithoutNotify(false);

        redLedSwitch.onValueChanged.RemoveAllListeners();
        redLedSwitch.onValueChanged.AddListener((isOn) => {
            if (isOn) {
                MetaWearNative.StartDeviceLed(controlled, MetaWearNative.LedColors.RED);
                Debug.Log("NOT_IMPLEMENTED -> switching on red led");
            } else {
                Debug.Log("NOT_IMPLEMENTED -> turning off single led");
                MetaWearNative.StopDeviceLeds(controlled, MetaWearNative.LedColors.RED);
            }
        });
        blueLedSwitch.onValueChanged.RemoveAllListeners();
        blueLedSwitch.onValueChanged.AddListener((isOn) => {
            if (isOn) {
                Debug.Log("NOT_IMPLEMENTED -> switching on blue led");
                MetaWearNative.StartDeviceLed(controlled, MetaWearNative.LedColors.BLUE);
            } else {
                Debug.Log("NOT_IMPLEMENTED -> turning off single led");
                MetaWearNative.StopDeviceLeds(controlled, MetaWearNative.LedColors.BLUE);
            }
        });
        accelerometerSwitch.onValueChanged.RemoveAllListeners();
        accelerometerSwitch.onValueChanged.AddListener((isOn) => {
            if(isOn) {
                MetaWearNative.StartAccelerometerStream(controlled);
                Debug.Log("NOT_IMPLEMENTED - turning on accelerometer");
            } else {
                MetaWearNative.StopAccelerometerStream(controlled);
                Debug.Log("NOT_IMPLEMENTED - turning off accelerometer");
            }
        });
        sensorFusionSwitch.onValueChanged.RemoveAllListeners();
        sensorFusionSwitch.onValueChanged.AddListener((isOn) => {
            if (isOn) {
                Debug.Log("NOT_IMPLEMENTED -> truning on sensor fusion");
            } else {
                Debug.Log("NOT_IMPLEMENTED -> turning off sensor fusion");
            }
        });

    }

}

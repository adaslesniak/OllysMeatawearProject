/* crated by Adas Lesniak on Apr 30 2019 */
using UnityEngine;
using System.Runtime.InteropServices;


//FIXME: that should be MetaWearNative and all if ios should be followed by else if android
public class MetaWeariOSUnity : MonoBehaviour {

    #region EXTERNAL_DECLARATIONS
#if UNITY_IOS && !UNITY_EDITOR
        [DllImport("__Internal")]
        private static extern void ios_scanForNewDevices();

        [DllImport("__Internal")]
        private static extern void ios_scanForKnownDevices();

        [DllImport("__Internal")]
        private static extern void ios_startFlashingDevice([MarshalAs( UnmanagedType.LPStr )]string deviceId);
#endif
    #endregion EXTERNAL_DECLARATIONS


    public static void ScanForNewDevices() {
        #if UNITY_IOS && !UNITY_EDITOR 
        ios_scanForNewDevices();
        #endif
    }

    public static void ScanForKnownDevices() {
        #if UNITY_IOS && !UNITY_EDITOR
        ios_scanForKnownDevices();
        #endif
    }

    public static void StartFlashingDevice(string deviceId) {
        #if UNITY_IOS && !UNITY_EDITOR
        ios_startFlashingDevice(deviceId);
        #endif
    }
}

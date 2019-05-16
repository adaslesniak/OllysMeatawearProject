/* crated by Adas Lesniak on May 01 2019 */
using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;
using System.Linq;

public class AvailableDevicesViewCtrl : MonoBehaviour {

    [SerializeField] Button backBtn;

    DeviceTableCell prototypeCell;
    List<DeviceTableCell> cells = new List<DeviceTableCell>();
    Transform cellsContainer;
    bool isScanning = false;

    public void StartScanning() {
        isScanning = true;
        MetaWearNative.onKnowDevicesScaned += OnAvailableDevicesScanned;
        Scan();
    }
    void StopScanning() {
        isScanning = false;
        CancelInvoke("Scan");
        MetaWearNative.onKnowDevicesScaned -= OnAvailableDevicesScanned;
    }

    // Start is called before the first frame update
    void Start() {
        var homeCtrl = FindObjectOfType<HomeViewCtrl>();
        backBtn.onClick.AddListener(() => {
            StopScanning();
            homeCtrl.SendViewAway(this.transform);
        });
        prototypeCell = GetComponentInChildren<DeviceTableCell>();
        cellsContainer = prototypeCell.transform.parent;
        prototypeCell.gameObject.SetActive(false);
    }

    void AddCell(DeviceCard forDevice) {
        var copy = Instantiate(prototypeCell, cellsContainer);
        copy.gameObject.SetActive(true);
        copy.Setup(forDevice);
        copy.transform.SetParent(cellsContainer);
        cells.Add(copy);
        print("added cell for device: "+forDevice.name);
        //TODO: do the things with content view so it adjust it's size
    }

    void RemoveCell(DeviceTableCell toBeRemoved) {
        toBeRemoved.transform.SetParent(null);
        toBeRemoved.gameObject.SetActive(false);
        Destroy(toBeRemoved.gameObject);
        //TODO: do the things with content view so it adjust it's size
    }

    void Scan() {
        MetaWearNative.ScanForKnownDevices();
    }

    void OnAvailableDevicesScanned(List<DeviceCard> scanResult) {
        print($"got result of scan in AvailableDevicesViewCtrl: {scanResult.Count}");
        var newOnes = new List<DeviceCard>();
        var lostOnes = new List<DeviceTableCell>();
        foreach(var found in scanResult) {
            var isExisting = false;
            foreach (var cell in cells) {
                isExisting |= cell.controlled.id == found.id;
            }
            if(!isExisting) {
                newOnes.Add(found);
                print($"this is really new one: {found.name}");
            } else {
                print($"this was already known: {found.name}");
            }
            /*var existing = cells.Where((cell) => {
                return cell.controlled.id == found.id;
            });
            if(existing == null) {
                print("this is really new one");
                newOnes.Add(found);
            } else {
                print("this was already known");
            }*/
        }
        foreach(var existing in cells) {
            var updated = scanResult.Where((card) => {
                return card.id == existing.controlled.id;
            });
            if(updated == null) {
                lostOnes.Add(existing);
            }
        }
        print($"prevoious cells: {cells.Count} new cells: {newOnes.Count} and forgotten: {lostOnes.Count}");
        foreach(var lost in lostOnes) {
            RemoveCell(lost);
        }
        foreach(var found in newOnes) {
            AddCell(found);
        }
        if (isScanning) {
            //Invoke("Scan", 1.05f); //FIXME: uncomment that after debugged is stuff
        }
    }

}

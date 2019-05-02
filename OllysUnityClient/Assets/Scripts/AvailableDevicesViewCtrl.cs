/* crated by Adas Lesniak on May 01 2019 */
using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;
using System.Linq;

public class AvailableDevicesViewCtrl : MonoBehaviour {

    [SerializeField] Button backBtn;

    DeviceTableCell prototypeCell;
    List<DeviceTableCell> cells;
    Transform cellsContainer;
    bool isScanning = false;

    public void StartScanning() {
        isScanning = true;
        Scan();
    }

    // Start is called before the first frame update
    void Start() {
        var homeCtrl = FindObjectOfType<HomeViewCtrl>();
        backBtn.onClick.AddListener(() => {
            homeCtrl.SendViewAway(this.transform);
        });
        prototypeCell = GetComponentInChildren<DeviceTableCell>();
        cellsContainer = prototypeCell.transform.parent;
        prototypeCell.gameObject.SetActive(false);
        MetaWearNative.onKnowDevicesScaned += OnAvailableDevicesScanned;
    }

    void AddCell(DeviceCard forDevice) {
        var copy = Instantiate(prototypeCell, cellsContainer);
        copy.gameObject.SetActive(true);
        copy.Setup(forDevice);
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
        var newOnes = new List<DeviceCard>();
        var lostOnes = new List<DeviceTableCell>();
        foreach(var found in scanResult) {
            var existing = cells.Where((cell) => {
                return cell.controlled.id == found.id;
            });
            if(existing == null) {
                newOnes.Add(found);
            }
        }
        foreach(var existing in cells) {
            var updated = scanResult.Where((card) => {
                return card.id == existing.controlled.id;
            });
            if(updated == null) {
                lostOnes.Add(existing);
            }
        }
        foreach(var lost in lostOnes) {
            RemoveCell(lost);
        }
        foreach(var found in newOnes) {
            AddCell(found);
        }
        Invoke("Scan", 1.05f);
    }

}

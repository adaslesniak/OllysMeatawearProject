/* crated by Adas Lesniak on May 01 2019 */
using UnityEngine;
using UnityEngine.UI;


public delegate void BoolAction(bool isIt);

public class SetupDeviceConfirmationPanel : MonoBehaviour {

    [SerializeField] Button confirm;
    [SerializeField] Button deny;

    BoolAction callback;

    public void Show(BoolAction whenDone) {
        callback = whenDone;
        Show(true);
    }

    void Show(bool isToBeVisible) {
        foreach(Transform child in transform) {
            child.gameObject.SetActive(isToBeVisible);
        }
    }

    void Start() {
        confirm.onClick.AddListener(() => {
            callback(true);
            Show(false);
        });
        deny.onClick.AddListener(() => {
            callback(false);
            Show(false);
        });
        Show(false);
    }
}

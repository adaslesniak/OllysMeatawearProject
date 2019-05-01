/* crated by Adas Lesniak on May 01 2019 */
using UnityEngine;
using UnityEngine.UI;

public class SetupDeviceViewCtrl : MonoBehaviour
{
    [SerializeField] Button backBtn;
    [SerializeField] Image placeHighlighted;
    [SerializeField] Image placeInactive;

    // Start is called before the first frame update
    void Start() {
        var homeCtrl = FindObjectOfType<HomeViewCtrl>();
        backBtn.onClick.AddListener(() => {
            homeCtrl.SendViewAway(this.transform);
        });
    }
}

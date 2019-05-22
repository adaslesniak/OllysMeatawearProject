/* crated by Adas Lesniak on May 01 2019 */
using UnityEngine;
using UnityEngine.UI;

public delegate void StringAction(string stringParameter);

public class NameDeviceViewCtrl : MonoBehaviour {

    [SerializeField] InputField input;
    [SerializeField] Button doneBtn;

    StringAction callback = null;
    HomeViewCtrl homeCtrl;

    public void Show(StringAction whenDone) {
        doneBtn.interactable = false;
        input.text = "";
        callback = whenDone;
        homeCtrl.BringInView(this.transform);
    }


    private void Start() {
        homeCtrl = FindObjectOfType<HomeViewCtrl>();
        doneBtn.onClick.AddListener(() => {
            callback?.Invoke(input.text);
            homeCtrl.SendViewAway(this.transform);
        });
    }


    void Update() {
        doneBtn.interactable = input.text.Length >= 3;
    }
}

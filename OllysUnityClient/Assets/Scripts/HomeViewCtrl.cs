/* crated by Adas Lesniak on May 01 2019 */
using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class HomeViewCtrl : MonoBehaviour {

    [SerializeField] Button setUpDeviceBtn;
    [SerializeField] Button listDevicesBtn;

    // Start is called before the first frame update
    void Start() {

        var setupView = FindObjectOfType<SetupDeviceViewCtrl>();
        if(setupView == null) {
            Debug.LogError("fix scene");
            return;
        }
        setUpDeviceBtn.onClick.AddListener(() => {
            Debug.Log("executing code for setup device button");
            BringInView(setupView.transform);
        });

        var devicesView = FindObjectOfType<AvailableDevicesViewCtrl>();
        if(devicesView == null) {
            Debug.LogError("fix scene");
            return;
        }
        listDevicesBtn.onClick.AddListener(() => {
            Debug.Log("executing code for list devices button");
            BringInView(devicesView.transform);
        });
    }

    private struct ViewTransition {
        public Transform view;
        public Vector3 startPosition;
        public Vector3 finalPosition;
    }

    //assumption: whole screen view
    private void BringInView(Transform view) {
        var transition = new ViewTransition {
            view = view,
            startPosition = new Vector3(Screen.width * 1.5f, Screen.height * 0.5f, 0),
            finalPosition = new Vector3(Screen.width * 0.5f, Screen.height * 0.5f, 0)
        };
        //TODO: setup in hierarchy so it won't be obscured
        StartCoroutine("MovingView", transition);
    }

    //assumption: whole screen view
    public void SendViewAway(Transform view) {
        var transition = new ViewTransition {
            view = view,
            startPosition = view.position,
            finalPosition = new Vector3(Screen.width * 1.5f, Screen.height * 0.5f, 0)
        };
        StartCoroutine("MovingView", transition);
     }


    IEnumerator MovingView(ViewTransition details) {
        Debug.Log("starting coroutine...");
        details.view.position = details.startPosition;
        var transitionTime = 0.37f;
        var transitionTimer = 0f;
        while(transitionTimer < transitionTime) {
            transitionTimer += Time.deltaTime;
            var advancement = transitionTimer / transitionTime;
            Debug.Log("...coroutine is running (" + advancement + ")...");
            details.view.position = Vector3.Lerp(details.startPosition, details.finalPosition, advancement);
            yield return null;
        }
        details.view.position = details.finalPosition;
    }

   
}

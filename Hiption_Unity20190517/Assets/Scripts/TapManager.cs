using UnityEngine;
using System.Collections;

public class TapManager : MonoBehaviour
{

    bool doingTouch = false;
    Vector2 touchStartPos = Vector2.zero;
    
    Vector2 central;
    int quitCounter = 0;
    
    public Camera viewCamera;
    

    // Use this for initializat
    void Start ()
    {
        central = new Vector2 (viewCamera.pixelWidth / 2.0f, viewCamera.pixelHeight / 2.0f);
        TouchManager.OnTouchDown += onTouchDown;
        TouchManager.OnTouchUp += onTouchUp;
    }
    
    // Update is called once per frame
    void Update ()
    {
    
        #if UNITY_EDITOR
        if (Input.GetMouseButtonDown (0)) {
            doingTouch = true;
            touchStartPos = new Vector2 (Input.mousePosition.x, Input.mousePosition.y) - central;
        } else if (Input.GetMouseButtonUp (0)) {
            doingTouch = false;
            Vector2 relative = new Vector2 (Input.mousePosition.x, Input.mousePosition.y) - central;
            CheckQuit (relative);
        }
        #endif
    }
    
    public void onTouchDown (Touch touch)
    {
        doingTouch = true;
        touchStartPos = touch.position - central;
    }
    
    public void CheckQuit (Vector2 end)
    {
        if (touchStartPos.magnitude <= 50.0f && end.magnitude <= 50.0f) {
            quitCounter++;
            
            if (quitCounter >= 5) {
                GameObject linkManager = GameObject.Find ("LinkManager");
                if (linkManager != null) {
//			linkManager.GetComponent<WAXLink> ().SaveLogData ();
					linkManager.GetComponent<NativeCommunication> ().SaveLogData ();
                }
                Application.LoadLevel ("MainMenu");
            }
        } else {
            quitCounter = 0;
        }
    }

    public void onTouchUp (Touch touch)
    {
        if (!doingTouch) {
            Debug.Log ("No touch?");
            return;
        }
    
        doingTouch = false;
    
        Vector2 relative = touch.position - central;
   
        CheckQuit (relative);
    }
}
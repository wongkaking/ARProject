using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// 绑定dash的音槌
/// </summary>
public class DashSpinWithTouch : MonoBehaviour {
    public Transform spin;
    public Vector3 TouchPos { get; private set; }
    public bool TouchOver { get; private set; }
    public bool view;
    // Use this for initialization
    /// <summary>
    /// 运行平台pc
    /// </summary>
    void Pc()
    {
        if (Input.GetMouseButtonDown(0))
        {
            spin.gameObject.SetActive(true);
            TouchOver = false;
        }
        if (Input.GetMouseButton(0))
        {
            TouchPos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
            spin.position = new Vector3(TouchPos.x, TouchPos.y, spin.position.z);
        }
        else if (Input.GetMouseButtonUp(0))
        {
            //spin.gameObject.SetActive(false);
            TouchOver = true;
            StartCoroutine(Rest());
        }
    }
    /// <summary>
    /// 运行平台移动设备
    /// </summary>
    void Mobile()
    {
        if (Input.GetTouch(0).phase == TouchPhase.Began)
        {
            spin.gameObject.SetActive(true);
            TouchOver = false;
        }
        if (Input.GetTouch(0).phase == TouchPhase.Moved)
        {
            TouchPos = Camera.main.ScreenToWorldPoint(Input.GetTouch(0).position);
            spin.position = new Vector3(TouchPos.x, TouchPos.y, spin.position.z);
        }
        else if (Input.GetTouch(0).phase == TouchPhase.Ended)
        {
            //spin.gameObject.SetActive(false);
            TouchOver = true;
            StartCoroutine(Rest());
        }
    }
    // Update is called once per frame
    void Update()
    {
        view = TouchOver;
        if (Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.IPhonePlayer)
        {
            Mobile();
        }
        else
        {
            Pc();
        }
    }
    IEnumerator Rest()
    {
        yield return new WaitForSeconds(0.2f);
        TouchOver = false;
    }
}

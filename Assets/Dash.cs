using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Dash{
    GameObject[] g;
    GameObject o1;
    GameObject o2;
    GameObject o3;
    /// <summary>
    /// g1为第一个弹力带，g2为第二个弹力带，g3为音槌
    /// </summary>
    /// <param name="g1"></param>
    /// <param name="g2"></param>
    /// <param name="g3"></param>
    public Dash(GameObject g1,GameObject g2, GameObject g3)
    {
        //BeginDash(g1, g2, g3);
        g = new GameObject[3];
        g[0] = g1;
        g[1] = g2;
        g[2] = g3;
        //以上出现报错将上面注释用下面这个
        //o1 = g1;
        //o2 = g2;
        //o3 = g3;
    }
    /// <summary>
    /// 开始进入dash
    /// </summary>
    void BeginDash()
    {
        g[0].SetActive(true);
        g[1].SetActive(true);
        g[2].SetActive(true);
        //改变ExtraGameLogic组件位置时，请注意修改要寻找的位置
        ExtraGameLogic _method = GameObject.Find("GameData").GetComponent<ExtraGameLogic>();
        _method.Cancel_Invoke();
        SpinWithTouch spin = GameObject.Find("Main Camera").GetComponent<SpinWithTouch>();
        spin.enabled = false;
        ////以上出现报错将上面注释用下面这个
        //o1.SetActive(true);
        //o2.SetActive(true);
        //o3.SetActive(true);
    }
    /// <summary>
    /// 结束dash
    /// </summary>
    public virtual void OverDash()
    {
        g[0].SetActive(false);
        g[1].SetActive(false);
        g[2].SetActive(false);
        //改变OverlapAmount组件位置时，请注意修改要寻找的位置
        OverlapAmount _method = GameObject.Find("Main Camera").GetComponent<OverlapAmount>();
        _method.combo += _method.temp_combo;
        _method.temp_combo = 0;

        ExtraGameLogic method = GameObject.Find("GameData").GetComponent<ExtraGameLogic>();
        method.StartInvoke();
        SpinWithTouch spin = GameObject.Find("Main Camera").GetComponent<SpinWithTouch>();
        spin.enabled = true;
        ////以上出现报错将上面注释用下面这个
        //o1.SetActive(false);
        //o2.SetActive(false);
        //o3.SetActive(false);
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
/// <summary>
/// 判断是否有相交
/// </summary>
public class CheckOverlap : MonoBehaviour {
    private int targetAmount;
    public bool view;
    public bool Trigger { get; private set; }
    //public string FirstTriggerName { get; private set; }
    public string TempName { get; private set; }
    public SpinWithTouch spin;
    public string SelfName { get; private set; }
    public OverlapAmount overlap;
    
    // Use this for initialization
    void Start () {
        SelfName = gameObject.tag;
        targetAmount = overlap.targetAmount;
	}
	// Update is called once per frame
	void Update () {
        view = Trigger;
        Disappear();
	}
    /// <summary>
    /// 触摸结束后targetAmount以上的object会消失
    /// </summary>
    void Disappear()
    {
        if (spin.TouchOver)
        {
            overlap.fault = false;
            if (Trigger && overlap.Overlap == SelfName)
            {
                if (overlap.OverlapsObject.Count < overlap.targetAmount)
                {
                    Debug.Log(gameObject.name + ":" + "still here");
                    overlap.OverlapsObject.Clear();
                    Trigger = false;
                    overlap.Overlap = null;
                    overlap.combo = 0;
                }
            }
        }
        else if (!spin.TouchOver && overlap.OverlapsObject.Count >= overlap.targetAmount)
        {
            GameData.FinalCombo = overlap.combo;
            foreach (var name in overlap.OverlapsObject)
            {
                if (gameObject.name == name)
                {
                    Debug.Log(gameObject.name + ":" + "cant see me");
                    //
                    Destroy(gameObject);
                    overlap.Auto_dis = true;
                }
            }
        }
        if (Trigger && overlap.Overlap != SelfName)
        {
            TempName = null;
            //Debug.Log("Overlap:" + overlap.Overlap);
            if (overlap.Overlap != null)
            {
                Debug.Log(gameObject.name + ":" + "cant see me");
                Destroy(gameObject);
            }
        }
    }
    //private void OnTriggerEnter(Collider other)
    //{
    //    //判断同类型object
    //    if (overlap.Overlap == null && other.gameObject.name == "Cube")
    //    {
    //        Debug.Log("1");
    //        overlap.combo = 0;
    //        overlap.Overlap = SelfName;
    //        Trigger = true;
    //        overlap.OverlapsObject.Add(gameObject.name);
    //        TempName = gameObject.name;
    //        overlap.targetAmount = GameData.Objects[overlap.Overlap];
    //        //targetAmount = overlap.targetAmount;
    //    }
    //    else if (overlap.Overlap != null && other.gameObject.name == "Cube")
    //    {
    //        Trigger = true;
    //        if (other.gameObject.name == "Cube"&& SelfName == overlap.Overlap)
    //        {
    //            if (TempName == null)
    //            {
    //                Trigger = true;
    //                overlap.OverlapsObject.Add(gameObject.name);
    //                if (!overlap.fault)
    //                {
    //                    overlap.combo++;
    //                }
    //                TempName = gameObject.name;
    //                Debug.Log("TempName:" + TempName);
    //            }
    //            else if (TempName != null)
    //            {
    //                Debug.Log("here");
    //                Trigger = false;
    //                Debug.Log("TempName:" + TempName);
    //            }
    //        }
    //        else
    //        {
    //            overlap.combo = 0;
    //            overlap.fault = true;
    //            Debug.Log("TempName:" + TempName);
    //        }
    //    }
    //    Debug.Log("Overlap:" + overlap.Overlap);
    //    Debug.Log("list:" + overlap.OverlapsObject.Count);
    //}
    //private void OnTriggerEnter2D(Collider2D other)
    //{
    //    //判断同类型object
    //    if (overlap.Overlap == null && other.gameObject.name == "Cube")
    //    {
    //        overlap.combo = 0;
    //        overlap.Overlap = SelfName;
    //        Trigger = true;
    //        overlap.OverlapsObject.Add(gameObject.name);
    //        TempName = gameObject.name;
    //        overlap.targetAmount = GameData.Objects[overlap.Overlap];
    //        //targetAmount = overlap.targetAmount;
    //    }
    //    else if (overlap.Overlap != null && other.gameObject.name == "Cube")
    //    {
    //        Trigger = true;
    //        if (other.gameObject.name == "Cube" && SelfName == overlap.Overlap)
    //        {
    //            if (TempName == null)
    //            {
    //                Trigger = true;
    //                overlap.OverlapsObject.Add(gameObject.name);
    //                if (!overlap.fault)
    //                {
    //                    overlap.combo++;
    //                }
    //                TempName = gameObject.name;
    //                Debug.Log("TempName:" + TempName);
    //            }
    //            else if (TempName != null)
    //            {
    //                Debug.Log("here");
    //                Trigger = false;
    //                Debug.Log("TempName:" + TempName);
    //            }
    //        }
    //        else
    //        {
    //            overlap.combo = 0;
    //            overlap.fault = true;
    //            Debug.Log("TempName:" + TempName);
    //        }
    //    }
    //    Debug.Log("Overlap:" + overlap.Overlap);

    //    Debug.Log("list:" + overlap.OverlapsObject.Count);
    //}
}

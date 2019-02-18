using System.Collections;
using System.Collections.Generic;
using UnityEngine;
/// <summary>
/// 记录重合的数量
/// </summary>
public class OverlapAmount : MonoBehaviour {
    public UnityEngine.UI.Text[] text;
    /// <summary>
    /// 最初相交的object
    /// </summary>
    public string Overlap { get; set; }
    /// <summary>
    /// 用list存储
    /// </summary>
    public List<string> OverlapsObject { get; set; }
    public bool Auto_dis { get; set; }
    /// <summary>
    /// 目标数量
    /// </summary>
    public int targetAmount = 0;
    /// <summary>
    /// combo
    /// </summary>
    [HideInInspector]
    public int combo = 0;
    [HideInInspector]
    public int temp_combo = 0;
    public bool fault;
    public Dictionary<string, string> CollisionObject = new Dictionary<string, string>();
    private void Awake()
    {
        OverlapsObject = new List<string>();
    }
    private void Update()
    {
        if (Auto_dis)
        {
            StartCoroutine(AutoDisappear());
        }
        text[0].text = "combo：" + combo.ToString();
        text[1].text = "视野中有几个物体" + GameData.ViewObjects.ToString();
        if (GameData.Objects.Count>0)
        {
            text[2].text = "物体：" + "type_1" + "有：" + GetMessage("type_1") + "\n"
            + "物体：" + "type_2" + "有：" + GetMessage("type_2") + "\n"
            + "物体：" + "type_3" + "有：" + GetMessage("type_3") + "\n"
            + "物体：" + "type_4" + "有：" + GetMessage("type_4") + "\n"
            + "物体：" + "type_5" + "有：" + GetMessage("type_5");
            //foreach (var i in GameData.Objects)
            //{
            //    if (i.Value >= 2)
            //    {
            //        //
            //        targetAmount = i.Value;
            //        Overlap = i.Key;
            //        Debug.Log("targetAmount为：" + targetAmount);
            //        Debug.Log("Overlap有：" + Overlap);
            //    }
            //}
        }
        if (GameData.noteBomb)
        {
            foreach (var item in GameData.Objects)
            {
                Destroy(GameObject.FindGameObjectWithTag(item.Key));
                Debug.Log(item.Key);
                TheNoteBomoCanDestroyObjectAmount++;
            }
            combo += TheNoteBomoCanDestroyObjectAmount;
            GameData.noteBomb = false;
        }
        GameData.combo = combo;
    }
    private string GetMessage(string type)
    {
        string result = "0";
        if (GameData.Objects.ContainsKey(type))
        {
            result = GameData.Objects[type].ToString();
            if (GameData.Objects[type] >= 2)
            {
                TheNoteBomoCanDestroyObjectName = type;
                TheNoteBomoCanDestroyObjectAmount = GameData.Objects[type];
            }
        }
        return result;
    }
    public string TheNoteBomoCanDestroyObjectName { get; private set; }
    public int TheNoteBomoCanDestroyObjectAmount { get; private set; }
    public virtual void TheNoteBomoCanDestroyObject()
    {
        Debug.Log("yes");
        GameData.noteBomb = true;
        //Destroy(GameObject.FindGameObjectWithTag(TheNoteBomoCanDestroyObjectName));
        //combo += TheNoteBomoCanDestroyObjectAmount;
    }
    /// <summary>
    /// 自动消失
    /// </summary>
    /// <returns></returns>
    IEnumerator AutoDisappear()
    {
        yield return new WaitForSeconds(0.2f);
        fault = false;
        Overlap = null;
        //combo = 0;
        Auto_dis = false;
        CollisionObject.Clear();
    }
}

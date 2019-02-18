using System.Collections;
using System.Collections.Generic;
using UnityEngine;
/// <summary>
/// 检测物体之间的碰撞
/// </summary>
public class CheckCollision : MonoBehaviour {
    public OverlapAmount overlap;
    public SpinWithTouch spin;
    private ExtraGameLogic logic;
    public UnityEngine.UI.Slider slider;
    public bool Trigger { get; private set; }
    public string SelfName { get; private set; }
    // Use this for initialization
    void Start () {
        spin = GameObject.Find("Main Camera").GetComponent<SpinWithTouch>();
        overlap = GameObject.Find("Main Camera").GetComponent<OverlapAmount>();
        slider = GameObject.Find("UICanvas").transform.Find("Miss_Slider").gameObject.GetComponent<UnityEngine.UI.Slider>();
        logic = GameObject.Find("GameData").GetComponent<ExtraGameLogic>();
	}
    private void Disappear()
    {
        if (Trigger)
        {
            Destroy(gameObject);
        }
        if (spin.TouchOver)
        {
            overlap.Auto_dis = true;
        }
    }
    private void OnTriggerEnter(Collider other)
    {
        if(GameData.collisionType == ExtraGameLogic.CollisionType._3D)
        {
            if (other.gameObject.name == "Slash")
            {
                if (!overlap.CollisionObject.ContainsKey(gameObject.name))
                {

                    Trigger = true;
                    overlap.CollisionObject.Add(gameObject.name, gameObject.tag);
                    if (overlap.Overlap == gameObject.tag)
                    {
                        overlap.combo++;
                    }
                    
                    else
                    {
                        //miss
                        logic.IsMiss();
                    }
                }
               
            }
            
        }
    }
    private void OnTriggerEnter2D(Collider2D other)
    {
        if (GameData.collisionType == ExtraGameLogic.CollisionType._2D)
        {
            if (other.gameObject.name == "Slash")
            {
                if (!overlap.CollisionObject.ContainsKey(gameObject.name))
                {

                    Trigger = true;
                    overlap.CollisionObject.Add(gameObject.name, gameObject.tag);
                    if (overlap.Overlap == gameObject.tag)
                    {
                        overlap.combo++;
                    }
                    //切割到音符炸弹
                    else if (overlap.Overlap == "NoteBombs")
                    {
                        overlap.TheNoteBomoCanDestroyObject();
                    }
                    //切割到combo炸弹
                    else if (overlap.Overlap == "ComboBombs")
                    {
                        overlap.combo = 0;
                    }
                    else
                    {
                        //miss
                        logic.IsMiss();
                    }
                }
            }
        }
    }
    // Update is called once per frame
    void Update () {
        Disappear();
	}
    /// <summary>
    /// 备份，勿用！！！！！！
    /// </summary>
    /// <param name="other"></param>
    void BackUp_1(Collider other)
    {
        if (overlap.Overlap == null && other.gameObject.name == "Cube")
        {
            overlap.Overlap = gameObject.tag;
            if (!overlap.CollisionObject.ContainsKey(gameObject.name))
            {

                Trigger = true;
                overlap.CollisionObject.Add(gameObject.name, gameObject.tag);
                overlap.targetAmount = GameData.Objects[overlap.Overlap];
                if (overlap.targetAmount >= 2)
                {
                    overlap.combo++;
                }
            }
        }
        else if (overlap.Overlap != null && other.gameObject.name == "Cube")
        {
            if (!overlap.CollisionObject.ContainsKey(gameObject.name))
            {
                Trigger = true;
                if (overlap.CollisionObject.ContainsValue(gameObject.tag))
                {
                    if (!overlap.fault && overlap.targetAmount >= 2)
                    {
                        overlap.combo++;
                    }
                }
                else if (!overlap.CollisionObject.ContainsValue(gameObject.tag))
                {
                    Debug.Log("count" + overlap.CollisionObject.Count);
                    overlap.combo = 0;
                    overlap.Overlap = "error";
                    overlap.fault = true;

                }
            }
        }
    }
}

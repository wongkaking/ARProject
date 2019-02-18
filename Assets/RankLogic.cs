using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
/// <summary>
/// 处理Rank的类
/// </summary>
public class RankLogic : MonoBehaviour {
    /// <summary>
    /// 用这个来绑定你需要展示的文本内容
    /// </summary>
    public Text rankText;
    private string rank;
	// Use this for initialization
	void Start () {
		
	}
	private void UpdateLogic()
    {
        if (Operator(GameData.FinalCombo, GameData.TargetCombo) >= 0.95f && GameData.Miss <=3)
        {
            rank = "S";
        }
        else if (GameData.Miss == 0)
        {
            rank = "SS";
        }
        else if(Operator(GameData.FinalCombo, GameData.TargetCombo) >= 0.90f && (GameData.Miss <= 5 && GameData.Miss > 3))
        {
            rank = "A";
        }
        else if (Operator(GameData.FinalCombo, GameData.TargetCombo) >= 0.85f && (GameData.Miss <= 8 && GameData.Miss > 5))
        {
            rank = "B";
        }
        else if (Operator(GameData.FinalCombo, GameData.TargetCombo) >= 0.80f && (GameData.Miss <= 10 && GameData.Miss > 8))
        {
            rank = "C";
        }
        else if (Operator(GameData.FinalCombo, GameData.TargetCombo) < 0.80f || GameData.Miss > 10) 
        {
            rank = "D";
        }
    }
    /// <summary>
    /// return 小除于大的结果
    /// </summary>
    /// <param name="left"></param>
    /// <param name="right"></param>
    /// <returns></returns>
    private float Operator(float left,float right)
    {
        if (left > right)
        {
            return right / left;
        }
        return left / right;
    }
	// Update is called once per frame
	void Update () {
        UpdateLogic();
        rankText.text = rank+"  Rank";
        GameData.Rank = rankText.text;
	}
}

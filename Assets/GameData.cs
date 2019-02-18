using System.Collections;
using System.Collections.Generic;
using UnityEngine;
/// <summary>
/// 保存游戏的数据
/// </summary>
public class GameData : MonoBehaviour {

    public static int ViewObjects { get; set; }
    public static Dictionary<string, int> Objects = new Dictionary<string, int>();
    public static int CountPosIndexLeft { get; set; }
    public static int CountPosIndexRight { get; set; }
    public static int TargetCombo { get; set; }
    public static int FinalCombo { get; set; }
    public static int Miss { get; set; }
    public static string Rank { get; set; }
    public static int combo { get; set; }
    public static bool noteBomb { get; set; }
    public static Dictionary<int, Vector3> pos = new Dictionary<int, Vector3>{
        { 1, new Vector3(0, 0.0f) },
        { 2, new Vector3(0, 1.6f) },
        { 3, new Vector3(0, 3.2f) },
        { 4, new Vector3(0, 4.6f) },
        { 5, new Vector3(0, 6.2f) },
        { 6, new Vector3(0, 0.0f) }};
    public static Dictionary<int, Vector3> temp_pos { get; set; }
    public static int[] index { get; set; }
    public static ExtraGameLogic.CollisionType collisionType { get; set; }
    // Use this for initialization
    void Start () {
        DontDestroyOnLoad(gameObject);
        index = new int[2];
        index[0] = 1;
        index[1] = 1;
    }
	public static void Reset()
    {
        //pos = temp_pos;
        index[0] = 1;
        index[1] = 1;
    } 
	// Update is called once per frame
	void Update () {
		
	}
}

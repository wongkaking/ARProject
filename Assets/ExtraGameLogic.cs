using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
/// <summary>
/// 处理游戏的局部逻辑
/// </summary>
public class ExtraGameLogic : MonoBehaviour {
    /// <summary>
    /// g1为第一个弹力带，g2为第二个弹力带，g3为音槌
    /// </summary>
    public GameObject[] _game = new GameObject[3];
    /// <summary>
    /// 绑定Miss
    /// </summary>
    public Slider slider;
    public int Miss { get; private set; }
    public Button[] button;
    public delegate void Btn();
    public Btn btn;
    public static Dictionary<int, string> TheSaveItemMsg { get; private set; }
    private string currentlySceneName;
    private bool stop;
    private RandomMusicalNote note;
    public int targetCombo = 30;
    public enum CollisionType { _3D, _2D }
    public CollisionType collisionType;
    private Dash dash;
	// Use this for initialization
	void Start () {
        note = new RandomMusicalNote();
        GameData.combo = 0;
        //需要多长时间来开启dash由你来决定
        dash = new Dash(_game[0], _game[1], _game[2]);
        StartInvoke();
        TheSaveItemMsg = new Dictionary<int, string>();
        currentlySceneName = SceneManager.GetActiveScene().name;
        //Debug.Log("scene" + sceneName);
        GameData.TargetCombo = targetCombo;
        GameData.collisionType = collisionType;
    }
    private int TempMiss { get; set; }
    private float Interval { get; set; }
    private bool startTimeOut;
    private void TimeOut()
    {
        if (TempMiss < Miss)
        {
            TempMiss = Miss;
            startTimeOut = true;
        }
        StartTimeOut();
        
    }
    public virtual void StartInvoke()
    {
        //出现音符的时间间隔为最后一个参数-----7.0f
        InvokeRepeating("LoadPrefab", 0.0f, 4.0f);
    }
    public virtual void Cancel_Invoke()
    {
        CancelInvoke("LoadPrefab");
        
    }
    private void StartTimeOut()
    {
        if (startTimeOut)
        {
            Interval += Time.deltaTime;
            if (Interval > 1.0f)
            {
                TempMiss = 0;
                startTimeOut = false;
            }
        }
        else
        {
            Interval = 0;
        }
    }
    private void LoadPrefab()
    {
        if (!stop)
        {
            TheSaveItemMsg.Clear();
            note.RandomNumber();
            TheSaveItemMsg = note.ItemMsg;
        }
    }
    public void IsMiss()
    {
        slider.value -= 1;
        Miss++;
    }
    private void Init()
    {
        for (int i = 0; i < button.Length; i++)
        {
            button[i].onClick.AddListener(delegate () { Func(i); });
        }
    }
    private void Func(int i)
    {
        if (i == 0)
        {
            BackTo();
        }
    }
    public void BackTo()
    {
        SceneManager.LoadScene("");
    }
    public void Goto(string scene)
    {
        SceneManager.LoadScene(scene);
    }
    
    // Update is called once per frame
    void Update () {
        if (Miss == 4)
        {
            Goto("OverGameScene");
        }
        if (GameData.combo>=targetCombo)
        {
            Goto("OverGameScene");
        }
        GameData.Miss = Miss;
        TimeOut();
        //note.RandomNumber();
	}
}

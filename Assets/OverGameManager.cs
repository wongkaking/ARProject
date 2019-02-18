using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class OverGameManager : MonoBehaviour {
    public GameObject Bg;
	// Use this for initialization
	void Start () {
        if (GameData.Miss==4)
        {
            UnityEngine.UI.Image image = Bg.GetComponent<UnityEngine.UI.Image>();
            image.sprite = Resources.Load<Sprite>("Sprite/lose");
        }
        else
        {
            UnityEngine.UI.Image image = Bg.GetComponent<UnityEngine.UI.Image>();
            image.sprite = Resources.Load<Sprite>("Sprite/win");
        }
        GameData.combo = 0;
	}
	
	// Update is called once per frame
	void Update () {
		
	}
    /// <summary>
    /// 按钮跳转
    /// </summary>
    /// <param name="scene"></param>
    public void Goto(string scene)
    {
        SceneManager.LoadScene(scene);
    }
}

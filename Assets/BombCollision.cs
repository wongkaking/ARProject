using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BombCollision : MonoBehaviour {
    public OverlapAmount overlap;
    public SpinWithTouch spin;
    private ExtraGameLogic logic;
    public UnityEngine.UI.Slider slider;
    // Use this for initialization
    void Start () {
        spin = GameObject.Find("Main Camera").GetComponent<SpinWithTouch>();
        overlap = GameObject.Find("Main Camera").GetComponent<OverlapAmount>();
        slider = GameObject.Find("UICanvas").transform.Find("Miss_Slider").gameObject.GetComponent<UnityEngine.UI.Slider>();
        logic = GameObject.Find("Main Camera").GetComponent<ExtraGameLogic>();
    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.name =="Slash")
        {
                 //切割到音符炸弹
             if (gameObject.tag == "NoteBombs")
            {
                overlap.TheNoteBomoCanDestroyObject();
            }
            //切割到combo炸弹
            else if (gameObject.tag == "ComboBombs")
            {
                //overlap.combo = 0;
            }
            Destroy(gameObject);
        }
    }
    // Update is called once per frame
    void Update () {
		
	}
}

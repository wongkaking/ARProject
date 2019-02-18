using System.Collections;
using System.Collections.Generic;
using UnityEngine;
/// <summary>
/// 处理物体移动的类
/// </summary>
public class PhysicsMove : MonoBehaviour {
    public enum Dir { none, left, right }
    public Dir _dir;
    public Transform _object;
    public float g = 1.0f;
    public float gx = 1.0f;
    public float v = 10.0f;
    private Vector2 Vr;
    public bool StartPhysics { get; private set; }
    public UnityEngine.UI.Text texts;
    private int I { get; set; }
	// Use this for initialization
	void Start () {
        StartPhysics = true;
        Vr.y = 0.8f;
        RandomDir();
        gx = Random.Range(1.0f, 4.0f);
        Vector3 pos = new Vector3();
        if (_dir == Dir.left)
        {
            pos.x = 9.4f - transform.localScale.x;
            pos.y = GameData.pos[GameData.index[0]].y;
            GameData.index[0]++;
        }
        else if (_dir == Dir.right)
        {
            pos.x = -9.4f + transform.localScale.x;
            pos.y = GameData.pos[GameData.index[1]].y;
            GameData.index[1]++;
        }
        pos.z = transform.position.z;
        transform.position = new Vector3(pos.x,pos.y);
        //Debug.Log("index:" + GameData.index[0]);
    }
    /// <summary>
    /// 随机出一个方向
    /// </summary>
    void RandomDir()
    {
        int random = Random.Range(0, 4);
        switch (random)
        {
            case 0:
                _dir = Dir.left;
                break;
            case 1:
                _dir = Dir.right;
                break;
            case 2:
                _dir = Dir.left;
                break;
            case 3:
                _dir = Dir.right;
                break;
        }
    }
	void Move()
    {
        if (StartPhysics)
        {
            if (_dir == Dir.right)
            {
                Vr.y = Vr.y - 1.0f * Time.deltaTime;
                transform.position = new Vector3(transform.position.x + 1 * gx * Time.deltaTime,
                    transform.position.y + (Vr.y * Time.deltaTime - 0.5f * g * Time.deltaTime * Time.deltaTime), transform.position.z);
            }
            if (_dir == Dir.left)
            {
                Vr.y = Vr.y - 1.0f * Time.deltaTime;
                transform.position = new Vector3(transform.position.x - 1 * gx * Time.deltaTime,
                    transform.position.y + (Vr.y * Time.deltaTime - 0.5f * g * Time.deltaTime * Time.deltaTime), transform.position.z);
            }
        }
    }
	// Update is called once per frame
	void Update () {
        Move();
	}
    private void OnBecameVisible()
    {
        //StartPhysics = true;
        if (I == 0)
        {
            GameData.ViewObjects++;
            //
            if (!GameData.Objects.ContainsKey(gameObject.tag))
            {
                GameData.Objects.Add(gameObject.tag, 1);
            }
            else { GameData.Objects[gameObject.tag]++; }
            I++;
            
        }

    }
    private void OnBecameInvisible()
    {
        StartPhysics = false;
        I = 0;
        GameData.ViewObjects--;
        GameData.Objects[gameObject.tag]--;
        StartCoroutine(LateDestory());
        GameData.Reset();
    }
    IEnumerator LateDestory()
    {
        Destroy(gameObject);
        yield return 0;
    }
    IEnumerator LateStart()
    {
        yield return new WaitForSeconds(0.1f);
    }
}

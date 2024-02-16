using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraFollowPlayer : MonoBehaviour
{
    public GameObject player;
    public Vector3 offset = new Vector3(-20, 20, -20);
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        transform.position = player.transform.position + offset;



        //Zooms in and out with mouse wheel. Seems janky. Fix later.



        if (Input.mouseScrollDelta.y > 0.1f && transform.position.y > 13)
        {

            offset += new Vector3(.1f, -.2f, .1f);

        }
        if (Input.mouseScrollDelta.y < -0.1f && transform.position.y < 20)
        {

            offset -= new Vector3(.1f, -.2f, .1f);
        }

    }
}

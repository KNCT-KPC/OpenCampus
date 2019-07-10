using UnityEngine;
using UnityEngine.Networking;
using System.Collections;
using System;

public class Player : NetworkBehaviour
//MonoBehaviour
//NetworkBehaviour
{
    // �ړ��X�s�[�h
    public float speed = 5;

    int z = 0;
    int a = 0;
    float x;
    float y;

    private void Start()
    {
        //3D�p�R�[�h�𗘗p�̂��ߎ��s�s��
        this.transform.Rotate(0.0f, 0.0f, 0);
    }

    public GameObject gameobject;
    void Update(){

        if (!isLocalPlayer){

            z = gameobject.GetComponent<camera>().z;
            a = gameobject.GetComponent<camera>().a;
            // �E�E��
            x = Input.GetAxisRaw("Horizontal");

            if (z == 1 && x == 1)
            {
                x = 0;
            }
            else if (z == 2 && x == -1)
            {
                x = 0;
            }

            // ��E��
            y = Input.GetAxisRaw("Vertical");

            if (a == 1 && y == 1)
            {
                y = 0;
            }
            else if (a == 2 && y == -1)
            {
                y = 0;
            }

            if (x == 1 && y == 1 || x == 1 && y == -1 || x == -1 && y == 1 || x == -1 && y == -1)
            {
                x = 0;
                y = 0;
            }

            // �ړ�������������߂�
            Vector2 direction = new Vector2(x, y).normalized;

            // �ړ���������ƃX�s�[�h��������
            GetComponent<Rigidbody2D>().velocity = direction * speed;

        }


        //�p�x������

        //3D�R�[�h���p�̂��ߎ��s�s��
        CmdSyncTransform(transform.position, transform.rotation);

    }
    

    //�ʒu�����z�X�g�ɑ��M����R�}���h
    [Command]
    void CmdSyncTransform(Vector3 position, Quaternion rotation)
    {
        //�e�ڑ��ɑ΂��ď��𑗐M����
        foreach(var conn in NetworkServer.connections)
        {
            //�����ȃR�l�N�V�����͖�������

            if (conn == null || !conn.isReady)
                continue;

            //��񔭐M���ւ̑���Ԃ���h������,�����ւ̃R�l�N�V�����͖�������
            if (conn == connectionToClient)
                continue;

            //���̃R�l�N�V�����ɑ΂��Ĉʒu���𑗐M
            TargetSyncTransform(conn, position,rotation);

        }


    }

    [TargetRpc]

void TargetSyncTransform(NetworkConnection target,Vector3 position, Quaternion rotation)
    {

        transform.SetPositionAndRotation(position,rotation);

    }
    
}
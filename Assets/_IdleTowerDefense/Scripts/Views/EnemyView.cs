using System;
using Leopotam.EcsLite;
using UnityEngine;

public class EnemyView : MonoBehaviour
{
    [Serializable]
    public enum EnemyType
    {
        Basic=0,
        Tank=1,
        Dynamite=2,
        Barrel=3
    }

    public SpriteRenderer healthBar;

    [SerializeField]
    private Animator _animator;

    [SerializeField]
    private GameObject model;

    [SerializeField]
    private GameObject deadAnim;

    public EcsPackedEntity PackedEntity;
    public EcsWorld World;

    public EnemyType enemyNumber;

    private static EcsPool<Position> positionPool;
    private static EcsPool<Health> healthPool;
    private void Start()
    {
        positionPool ??= World.GetPool<Position>();
        healthPool ??= World.GetPool<Health>();
        if (!(transform.position.x > 0)) return;
        var scale = model.transform.localScale;
        model.transform.localScale = new Vector3(-scale.x, scale.y,
            scale.z);
    }

    public void Hit()
    {
        if (transform.position.y > 0.5f)
            _animator.SetTrigger("Hit_down");
        else if (transform.position.y < -0.5f)
            _animator.SetTrigger("Hit_up");
        else
            _animator.SetTrigger("Hit");
    }


    private void OnDestroy()
    {
        var dead = Instantiate(deadAnim, transform.position, new Quaternion());
        Destroy(dead, 0.7f);
    }
}
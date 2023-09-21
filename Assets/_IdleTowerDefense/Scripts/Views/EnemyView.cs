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

    [SerializeField]
    private SpriteRenderer healthBar;

    [SerializeField]
    private Animator _animator;

    [SerializeField]
    private GameObject model;

    [SerializeField]
    private GameObject deadAnim;

    public EcsPackedEntity PackedEntity;
    public EcsWorld World;

    public EnemyType enemyNumber;

    private void Start()
    {
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

    private void Update()
    {
        if (PackedEntity.Unpack(World, out int unpackedEntity))
        {
            EcsPool<Position> positionPool = World.GetPool<Position>();
            EcsPool<Health> healthPool = World.GetPool<Health>();
            ref Position position = ref positionPool.Get(unpackedEntity);
            ref Health health = ref healthPool.Get(unpackedEntity);

            // Update position
            transform.position = new Vector3(position.x, position.y, 0);

            // Update HealthBar
            healthBar.size = new Vector2(1, health.CurrentHealth / health.MaxHealth);
        }
    }

    private void OnDestroy()
    {
        var dead = Instantiate(deadAnim, transform.position, new Quaternion());
        Destroy(dead, 0.7f);
    }
}
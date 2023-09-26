using Leopotam.EcsLite;
using UnityEngine;
using UnityEngine.UI;

public class HealthBarUISystem : IEcsRunSystem, IEcsInitSystem
{

    private EcsPool<Health> _healthPool;

    private EcsFilter _towerFilter;
    private EcsFilter _enemyFilter;

    private EcsWorld _world;
    public void Init(IEcsSystems systems)
    {
        _world = systems.GetWorld();
        _towerFilter = _world.Filter<Tower>().Inc<Health>().End();
        _enemyFilter = _world.Filter<Enemy>().Inc<Health>().End();
        _healthPool = _world.GetPool<Health>();
    }

    public void Run(IEcsSystems systems)
    {
        foreach (var tower in _towerFilter)
        {
            ref Health towerHealth = ref _healthPool.Get(tower);
            towerHealth.healthBar.value = towerHealth.CurrentHealth / towerHealth.MaxHealth;
            ((Image)towerHealth.healthImage).color = Color.Lerp(new Color32(0x95, 0x43, 0x50, 0xFF),
                new Color32(0x58, 0x95, 0x43, 0xFF), towerHealth.CurrentHealth / towerHealth.MaxHealth);
        }

        foreach (var enemy in _enemyFilter)
        {
            ref Health enemyHealth = ref _healthPool.Get(enemy);
            ((SpriteRenderer)enemyHealth.healthImage).size = new Vector2(1, enemyHealth.CurrentHealth / enemyHealth.MaxHealth);
        }
    }
}

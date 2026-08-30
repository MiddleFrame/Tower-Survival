using Leopotam.EcsLite;
using UnityEngine;
using UnityEngine.UI;

public class World : MonoBehaviour
{
    

    [SerializeField]
    private Transform _spawnTowerPoint;

    [SerializeField]
    private Image _healthBar;
    [SerializeField]
    private Slider _healthBarValue;
    [SerializeField]
    private AudioSource _wordSound;

    [SerializeField]
    private GameplayViewPools _viewPools;

    [SerializeField]
    private DayNightController _dayNightController;

    [SerializeField]
    private CombatSpellController _combatSpells;
    [SerializeField]
    private TutorialRunController _tutorial;
    
    private EcsWorld _world;
    public IEcsSystems System => _systems;
    private IEcsSystems _systems;

    void Awake()
    {

        _world = new EcsWorld();

        SharedData sharedData = InitData.sharedData;
        if (_viewPools == null)
        {
            var poolsGo = new GameObject("GameplayViewPools");
            _viewPools = poolsGo.AddComponent<GameplayViewPools>();
        }
        sharedData.SetViewPools(_viewPools);
        sharedData.SetDayNightController(_dayNightController);
        if (_combatSpells == null)
            _combatSpells = FindFirstObjectByType<CombatSpellController>();
        sharedData.SetCombatSpells(_combatSpells);
        if (_tutorial == null)
            _tutorial = FindFirstObjectByType<TutorialRunController>();
        sharedData.SetTutorial(_tutorial);
        
        _systems = new EcsSystems(_world, sharedData).Add(new TowerSpawnSystem(_spawnTowerPoint,_healthBar,_healthBarValue))
            .Add(new TowerUpgradeLoadingSystem())
            .Add(new EnemyAttackSystem())
            .Add(new HealthBarUISystem())
            .Add(new TowerTargetingSystem())
            .Add(new TowerFiringSystem(sharedData.Settings.shootingSound,_wordSound))
            .Add(new EnemySpawnSystem())
            .Add(new EnemyDamageSystem())
            .Add(new HealthRegenerationSystem())
            .Add(new DestroySystem(_combatSpells))
            .Add(new MovementSystem());

        Init();
    }

    private void Init()
    {
        _systems.Init();
        _combatSpells?.Bind(_world);
    }

    void Update()
    {
        if (!DataController.Instance.Paused)
        {
            _systems?.Run();
        }
    }

    void OnDestroy()
    {
        if (_systems != null) {
            _systems.Destroy ();
            _systems = null;
        }
        if (_world != null) {
            _world.Destroy ();
            _world = null;
        }
    }
}

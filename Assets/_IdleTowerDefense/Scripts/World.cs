using System.Collections;
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
    private AssetLease<EnemySpawnSettings> _localTierLease;
    public bool InitializationFailed { get; private set; }

    private IEnumerator Start()
    {
        SharedData sharedData = InitData.sharedData;
        if (sharedData == null || sharedData.Settings == null || sharedData.Settings.Tiers == null ||
            DataController.tier < 0 || DataController.tier >= sharedData.Settings.Tiers.Length)
        {
            InitializationFailed = true;
            Debug.LogError("Game tier is not configured.", this);
            yield break;
        }

        EnemySpawnSettings selectedTier = SceneTransitionController.Instance != null &&
                                          SceneTransitionController.Instance.LoadedTierIndex == DataController.tier
            ? SceneTransitionController.Instance.LoadedTierSettings
            : null;
        if (selectedTier == null)
        {
            var reference = sharedData.Settings.Tiers[DataController.tier].SpawnSettings;
            if (reference == null || !reference.RuntimeKeyIsValid())
            {
                InitializationFailed = true;
                Debug.LogError("Game tier Addressables reference is missing.", this);
                yield break;
            }
            _localTierLease = new AddressableAssetsLoader().Acquire<EnemySpawnSettings>(reference);
            yield return _localTierLease.Wait();
            selectedTier = _localTierLease.Asset;
        }
        if (selectedTier == null)
        {
            InitializationFailed = true;
            Debug.LogError($"Game tier could not load: {_localTierLease?.Error}", this);
            yield break;
        }

        sharedData.SetSelectedEnemyTier(selectedTier);
        _world = new EcsWorld();
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
        _localTierLease?.Dispose();
    }
}

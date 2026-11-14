using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneTransitionController : MonoBehaviour
{
    public static SceneTransitionController Instance { get; private set; }

    [Header("Animation")]
    [SerializeField] private GameObject _visualRoot;
    [SerializeField] private Animator _animator;
    [SerializeField] private string _closeStateName = "Close";
    [SerializeField] private string _openStateName = "Open";
    [SerializeField] private float _closeAnimationDuration = 1f;
    [SerializeField] private float _openAnimationDuration = 1f;

    private bool _isTransitionRunning;
    private AssetLease<EnemySpawnSettings> _tierLease;
    private AssetLease<EnemySpawnSettings> _previousTierLease;
    private int _loadedTierIndex = -1;
    private int _previousTierIndex = -1;

    public EnemySpawnSettings LoadedTierSettings => _tierLease?.Asset;
    public int LoadedTierIndex => _loadedTierIndex;

    private void Awake()
    {
        Application.targetFrameRate = 120;

        if (Instance != null && Instance != this)
        {
            Destroy(gameObject);
            return;
        }

        Instance = this;
        DontDestroyOnLoad(gameObject);

        if (_visualRoot != null)
            _visualRoot.SetActive(false);
    }

    private void OnEnable()
    {
        SceneManager.sceneLoaded += OnSceneLoaded;
    }

    private void OnDisable()
    {
        SceneManager.sceneLoaded -= OnSceneLoaded;
    }

    public void LoadScene(string sceneName)
    {
        if (_isTransitionRunning)
            return;

        StartCoroutine(LoadSceneRoutine(sceneName));
    }

    private IEnumerator LoadSceneRoutine(string sceneName)
    {
        _isTransitionRunning = true;
        if (_visualRoot != null)
            _visualRoot.SetActive(true);

        PlayState(_openStateName);
        bool acquiredNewTier = false;

        if (sceneName == "Game" && (_loadedTierIndex != DataController.tier || LoadedTierSettings == null))
        {
            GameSettings settings = InitData.sharedData?.Settings;
            if (settings == null || settings.Tiers == null || DataController.tier < 0 ||
                DataController.tier >= settings.Tiers.Length)
            {
                FailTransition("Selected game tier is not configured.");
                yield break;
            }

            var reference = settings.Tiers[DataController.tier].SpawnSettings;
            if (reference == null || !reference.RuntimeKeyIsValid())
            {
                FailTransition("Selected game tier has no Addressables reference.");
                yield break;
            }

            AssetLease<EnemySpawnSettings> nextLease = new AddressableAssetsLoader()
                .Acquire<EnemySpawnSettings>(reference);
            yield return nextLease.Wait();
            if (!nextLease.Succeeded || nextLease.Asset == null)
            {
                string error = nextLease.Error?.Message ?? "Unknown Addressables failure";
                nextLease.Dispose();
                FailTransition($"Selected game tier could not load: {error}");
                yield break;
            }
            _previousTierLease = _tierLease;
            _previousTierIndex = _loadedTierIndex;
            _tierLease = nextLease;
            _loadedTierIndex = DataController.tier;
            acquiredNewTier = true;
        }

        var operation = SceneManager.LoadSceneAsync(sceneName);
        if (operation == null)
        {
            if (acquiredNewTier)
            {
                _tierLease?.Dispose();
                _tierLease = _previousTierLease;
                _loadedTierIndex = _previousTierIndex;
                _previousTierLease = null;
                _previousTierIndex = -1;
            }
            FailTransition($"Scene could not load: {sceneName}");
            yield break;
        }
        operation.allowSceneActivation = false;

        yield return new WaitForSecondsRealtime(_closeAnimationDuration);

        while (operation.progress < 0.9f)
            yield return null;

        operation.allowSceneActivation = true;
    }

    private void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        if (!_isTransitionRunning)
            return;

        StartCoroutine(PlayOpenAndHideRoutine(scene.name == "Menu"));
    }

    private IEnumerator PlayOpenAndHideRoutine(bool releaseTier)
    {
        PlayState(_closeStateName);
        yield return new WaitForSecondsRealtime(_openAnimationDuration);
        if (_visualRoot != null)
            _visualRoot.SetActive(false);
        _previousTierLease?.Dispose();
        _previousTierLease = null;
        _previousTierIndex = -1;
        if (releaseTier)
        {
            _tierLease?.Dispose();
            _tierLease = null;
            _loadedTierIndex = -1;
        }
        _isTransitionRunning = false;
    }

    private void FailTransition(string message)
    {
        Debug.LogError(message, this);
        if (_visualRoot != null)
            _visualRoot.SetActive(false);
        _isTransitionRunning = false;
        if (SceneManager.GetActiveScene().name == "Menu")
            TutorialProgress.EndSession();
    }

    private void OnDestroy()
    {
        _tierLease?.Dispose();
        _previousTierLease?.Dispose();
        if (Instance == this)
            Instance = null;
    }

    private void PlayState(string stateName)
    {
        if (_animator == null || string.IsNullOrEmpty(stateName))
            return;

        _animator.Play(stateName, 0, 0f);
    }
}

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

    private void Awake()
    {
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

        var operation = SceneManager.LoadSceneAsync(sceneName);
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

        StartCoroutine(PlayOpenAndHideRoutine());
    }

    private IEnumerator PlayOpenAndHideRoutine()
    {
        PlayState(_closeStateName);
        yield return new WaitForSecondsRealtime(_openAnimationDuration);
        if (_visualRoot != null)
            _visualRoot.SetActive(false);
        _isTransitionRunning = false;
    }

    private void PlayState(string stateName)
    {
        if (_animator == null || string.IsNullOrEmpty(stateName))
            return;

        _animator.Play(stateName, 0, 0f);
    }
}

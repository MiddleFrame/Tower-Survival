using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

    [RequireComponent(typeof(Button))]
    public class UIElementSound : MonoBehaviour, IPointerClickHandler
    {
        private static SoundManager _defaultSoundManager;
        private static AudioSource _defaultAudioSource;
        private static bool _loggedMissingAudioSource;

        [Header("Resources")]
        [SerializeField]
        private SoundManager soundManager;

        [SerializeField]
        private AudioSource audioSource;

        [Header("Custom SFX")]
        public AudioClip clickSFX;

        [Header("Settings")]
        public bool enableClickSound = true;
        public bool checkForInteraction = true;

        [SerializeField]
        private Button _sourceButton;

        private void Awake()
        {
            if (_sourceButton == null)
                TryGetComponent(out _sourceButton);
        }

        public void OnPointerClick(PointerEventData eventData)
        {
            if (checkForInteraction && _sourceButton != null && !_sourceButton.interactable)
                return;

            if (!enableClickSound)
                return;

            AudioSource targetAudioSource = ResolveAudioSource();
            if (targetAudioSource == null)
                return;

            SoundManager targetSoundManager = ResolveSoundManager();
            AudioClip clip = clickSFX == null ? targetSoundManager?.clickSound : clickSFX;
            if (clip != null)
                targetAudioSource.PlayOneShot(clip);
        }

#if UNITY_EDITOR
        private void Reset()
        {
            TryGetComponent(out _sourceButton);
        }

        private void OnValidate()
        {
            if (_sourceButton == null)
                TryGetComponent(out _sourceButton);
        }
#endif

        private SoundManager ResolveSoundManager()
        {
            if (soundManager != null)
                return soundManager;

            if (_defaultSoundManager == null)
                _defaultSoundManager = Resources.Load<SoundManager>("Sound Setting");

            return _defaultSoundManager;
        }

        private AudioSource ResolveAudioSource()
        {
            if (audioSource != null)
                return audioSource;

            if (_defaultAudioSource != null)
                return _defaultAudioSource;

            GameObject audioObject = GameObject.Find("UI/UI Audio");
            if (audioObject != null)
                audioObject.TryGetComponent(out _defaultAudioSource);

            if (_defaultAudioSource == null && !_loggedMissingAudioSource)
            {
                Debug.LogWarning("<b>[UI Element Sound]</b> No UI Audio source found.");
                _loggedMissingAudioSource = true;
            }

            return _defaultAudioSource;
        }
    }

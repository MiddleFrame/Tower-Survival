using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;


    [RequireComponent(typeof(Button)),ExecuteInEditMode]
    public class UIElementSound : MonoBehaviour, IPointerClickHandler
    {
        [Header("Resources")]
        private static SoundManager _soundManager;

        private static AudioSource audioObject;

        [Header("Custom SFX")]
        public AudioClip clickSFX;

        [Header("Settings")]
        public bool enableClickSound = true;
        public bool checkForInteraction = true;

        private Button _sourceButton;

        void OnEnable()
        {
            if (_soundManager == null)
            {
                try
                {
                    _soundManager = Resources.Load<SoundManager>("Sound Setting");
                }
                catch
                {
                    Debug.Log("<b>[UI Element Sound]</b> No Sound Setting found.", this);
                    enabled = false;
                }
            }

            if (Application.isPlaying && audioObject == null)
            {
                try { audioObject = GameObject.Find("UI/UI Audio").GetComponent<AudioSource>(); }
                catch { Debug.Log("<b>[UI Element Sound]</b> No Audio Source found.", this); }
            }

            if (checkForInteraction) { _sourceButton = gameObject.GetComponent<Button>(); }
        }


        public void OnPointerClick(PointerEventData eventData)
        {
            if (checkForInteraction && _sourceButton != null && _sourceButton.interactable == false)
                return;

            if (enableClickSound)
                audioObject.PlayOneShot(clickSFX == null ? _soundManager.clickSound : clickSFX);
            
        }
    }

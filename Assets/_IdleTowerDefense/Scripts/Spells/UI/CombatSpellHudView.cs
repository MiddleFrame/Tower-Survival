using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.UI;

public sealed class CombatSpellHudView : MonoBehaviour
{
    [SerializeField] private TMP_Text _heading;
    [SerializeField] private RectTransform _activeContainer;
    [SerializeField] private CombatSpellButtonView _activeButtonPrefab;
    [SerializeField] private PassiveSpellBadgeView _passiveBadge;
    [SerializeField] private PassiveSpellPopupView _passivePopup;
    [SerializeField] private CanvasGroup _tutorialVisibilityGroup;
    [Header("Expanded spell information")]
    [SerializeField] private RectTransform _panelRoot;
    [SerializeField] private GameObject _detailsRoot;
    [SerializeField] private CanvasGroup _detailsCanvasGroup;
    [SerializeField] private RectTransform _detailsContainer;
    [SerializeField] private CombatSpellDetailView _detailPrefab;
    [SerializeField] private AssetReferenceGameObject _detailAsset;
    [SerializeField] private Button _expandButton;
    [SerializeField] private TMP_Text _expandLabel;
    [SerializeField] private Image _expandIndicator;
    [SerializeField] private Sprite _collapsedIndicatorIcon;
    [SerializeField] private Sprite _expandedIndicatorIcon;
    [SerializeField, Min(1f)] private float _collapsedHeight = 240f;
    [SerializeField, Min(1f)] private float _expandedHeight = 720f;
    [SerializeField, Min(0.05f)] private float _expandDuration = 0.45f;

    private readonly List<CombatSpellButtonView> _activeButtons = new();
    private readonly List<CombatSpellDetailView> _detailViews = new();
    private CombatSpellController _controller;
    private Coroutine _expandRoutine;
    private bool _isExpanded;
    private readonly IAssetsLoader _assetsLoader = new AddressableAssetsLoader();
    private AssetLease<GameObject> _detailLease;

    public void Bind(CombatSpellController controller)
    {
        if (_expandRoutine != null)
            StopCoroutine(_expandRoutine);
        _expandRoutine = null;
        _controller = controller;
        LightweightLocalization.Bind(_heading, "game.spells");

        foreach (CombatSpellButtonView button in _activeButtons)
        {
            if (button != null)
                Destroy(button.gameObject);
        }
        _activeButtons.Clear();
        ClearDetails();

        CombatSpellDefinition[] definitions = controller.ActiveSpells;
        for (int i = 0; i < definitions.Length; i++)
        {
            if (definitions[i] == null)
                continue;

            CombatSpellButtonView button = Instantiate(_activeButtonPrefab, _activeContainer);
            button.Bind(controller, i, definitions[i]);
            _activeButtons.Add(button);
        }

        _passivePopup.Bind(controller, controller.PassiveSpell);
        _passiveBadge.Bind(controller, controller.PassiveSpell, _passivePopup.Show);
        _expandButton.onClick.RemoveListener(ToggleExpanded);
        _expandButton.onClick.AddListener(ToggleExpanded);
        SetExpandedImmediate(false);
        RefreshRuntime();
    }

    public void RefreshRuntime()
    {
        foreach (CombatSpellButtonView button in _activeButtons)
            button.Refresh();
        _passiveBadge.Refresh();
        _passivePopup.Refresh();
        foreach (CombatSpellDetailView detail in _detailViews)
            detail.Refresh();
    }

    public void ToggleExpanded()
    {
        _isExpanded = !_isExpanded;
        if (_expandRoutine != null)
            StopCoroutine(_expandRoutine);
        _expandRoutine = StartCoroutine(AnimateExpanded(_isExpanded));
    }

    private void OnDisable()
    {
        if (_expandRoutine != null)
            StopCoroutine(_expandRoutine);
        _expandRoutine = null;
        _isExpanded = false;
        ClearDetails();
        if (_expandButton != null)
            _expandButton.onClick.RemoveListener(ToggleExpanded);
    }

    public void SetTutorialActiveSlot(int visibleSlot)
    {
        bool showActivePanel = visibleSlot >= 0;
        if (_tutorialVisibilityGroup != null)
        {
            _tutorialVisibilityGroup.alpha = showActivePanel ? 1f : 0f;
            _tutorialVisibilityGroup.interactable = showActivePanel;
            _tutorialVisibilityGroup.blocksRaycasts = showActivePanel;
        }
        if (_activeContainer != null)
            _activeContainer.gameObject.SetActive(showActivePanel);
        if (_heading != null)
            _heading.gameObject.SetActive(showActivePanel);
        if (_expandButton != null)
            _expandButton.gameObject.SetActive(showActivePanel);
        if (_detailsRoot != null)
            _detailsRoot.SetActive(false);

        foreach (CombatSpellButtonView button in _activeButtons)
        {
            if (button != null)
                button.gameObject.SetActive(showActivePanel && button.SlotIndex == visibleSlot);
        }
    }

    public RectTransform GetActiveButtonRect(int slotIndex)
    {
        foreach (CombatSpellButtonView button in _activeButtons)
        {
            if (button != null && button.SlotIndex == slotIndex)
                return button.TargetRect;
        }
        return null;
    }

    private IEnumerator AnimateExpanded(bool expanded)
    {
        if (expanded)
        {
            yield return LoadDetails();
            if (_detailViews.Count == 0)
            {
                _isExpanded = false;
                _expandRoutine = null;
                yield break;
            }
        }

        _detailsRoot.SetActive(true);
        _detailsCanvasGroup.alpha = 1f;
        _detailsCanvasGroup.blocksRaycasts = false;
        _detailsCanvasGroup.interactable = false;

        float startHeight = _panelRoot.sizeDelta.y;
        float targetHeight = expanded ? _expandedHeight : _collapsedHeight;
        float elapsed = 0f;

        LightweightLocalization.Bind(_expandLabel,
            expanded ? "spell.details.close" : "spell.details.open");
        _expandIndicator.sprite = expanded ? _expandedIndicatorIcon : _collapsedIndicatorIcon;

        while (elapsed < _expandDuration)
        {
            elapsed += Time.unscaledDeltaTime;
            float t = Mathf.Clamp01(elapsed / _expandDuration);
            float eased = expanded ? EaseOutBack(t) : Mathf.SmoothStep(0f, 1f, t);
            _panelRoot.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical,
                Mathf.LerpUnclamped(startHeight, targetHeight, eased));
            yield return null;
        }

        _panelRoot.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, targetHeight);
        _detailsCanvasGroup.alpha = 1f;
        _detailsCanvasGroup.blocksRaycasts = expanded;
        _detailsCanvasGroup.interactable = expanded;
        _detailsRoot.SetActive(expanded);
        if (!expanded)
        {
            foreach (CombatSpellDetailView detail in _detailViews)
            {
                if (detail != null)
                    Destroy(detail.gameObject);
            }
            _detailViews.Clear();
            // Destroy is deferred until the end of the frame; keep the bundle until then.
            yield return null;
            ReleaseDetailsAsset();
        }
        _expandRoutine = null;
    }

    private IEnumerator LoadDetails()
    {
        if (_detailViews.Count > 0)
            yield break;

        CombatSpellDetailView prefab = _detailPrefab;
        if (_detailAsset != null && _detailAsset.RuntimeKeyIsValid())
        {
            _detailLease ??= _assetsLoader.Acquire<GameObject>(_detailAsset);
            yield return _detailLease.Wait();
            if (!_detailLease.Succeeded)
            {
                Debug.LogError($"Spell details could not load: {_detailLease.Error}", this);
                ReleaseDetailsAsset();
                yield break;
            }
            prefab = _detailLease.Asset.GetComponent<CombatSpellDetailView>();
        }

        if (prefab == null)
        {
            Debug.LogError("Spell detail prefab is missing.", this);
            ReleaseDetailsAsset();
            yield break;
        }

        CombatSpellDefinition[] definitions = _controller.ActiveSpells;
        for (int i = 0; i < definitions.Length; i++)
        {
            if (definitions[i] == null)
                continue;
            CombatSpellDetailView detail = Instantiate(prefab, _detailsContainer);
            detail.Bind(_controller, definitions[i], i, false);
            _detailViews.Add(detail);
        }
    }

    private void ClearDetails()
    {
        foreach (CombatSpellDetailView detail in _detailViews)
        {
            if (detail != null)
                Destroy(detail.gameObject);
        }
        _detailViews.Clear();
        ReleaseDetailsAsset();
    }

    private void ReleaseDetailsAsset()
    {
        _detailLease?.Dispose();
        _detailLease = null;
    }

    private void SetExpandedImmediate(bool expanded)
    {
        _isExpanded = expanded;
        if (_panelRoot == null)
            _panelRoot = (RectTransform)transform;
        _panelRoot.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical,
            expanded ? _expandedHeight : _collapsedHeight);
        _detailsRoot.SetActive(expanded);
        _detailsCanvasGroup.alpha = 1f;
        _detailsCanvasGroup.blocksRaycasts = expanded;
        _detailsCanvasGroup.interactable = expanded;
        _expandIndicator.sprite = expanded ? _expandedIndicatorIcon : _collapsedIndicatorIcon;
        LightweightLocalization.Bind(_expandLabel,
            expanded ? "spell.details.close" : "spell.details.open");
    }

    private static float EaseOutBack(float t)
    {
        const float overshoot = 1.25f;
        float shifted = t - 1f;
        return 1f + (overshoot + 1f) * shifted * shifted * shifted
               + overshoot * shifted * shifted;
    }
}

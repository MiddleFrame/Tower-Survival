using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public sealed class CombatSpellHudView : MonoBehaviour
{
    [SerializeField] private TMP_Text _heading;
    [SerializeField] private RectTransform _activeContainer;
    [SerializeField] private CombatSpellButtonView _activeButtonPrefab;
    [SerializeField] private PassiveSpellBadgeView _passiveBadge;
    [Header("Expanded spell information")]
    [SerializeField] private RectTransform _panelRoot;
    [SerializeField] private GameObject _detailsRoot;
    [SerializeField] private CanvasGroup _detailsCanvasGroup;
    [SerializeField] private RectTransform _detailsContainer;
    [SerializeField] private CombatSpellDetailView _detailPrefab;
    [SerializeField] private Button _expandButton;
    [SerializeField] private TMP_Text _expandLabel;
    [SerializeField] private RectTransform _expandArrow;
    [SerializeField, Min(1f)] private float _collapsedHeight = 240f;
    [SerializeField, Min(1f)] private float _expandedHeight = 720f;
    [SerializeField, Min(0.05f)] private float _expandDuration = 0.45f;

    private readonly List<CombatSpellButtonView> _activeButtons = new();
    private readonly List<CombatSpellDetailView> _detailViews = new();
    private CombatSpellController _controller;
    private Coroutine _expandRoutine;
    private bool _isExpanded;

    public void Bind(CombatSpellController controller)
    {
        _controller = controller;
        LightweightLocalization.Bind(_heading, "game.spells");

        foreach (CombatSpellButtonView button in _activeButtons)
        {
            if (button != null)
                Destroy(button.gameObject);
        }
        _activeButtons.Clear();
        foreach (CombatSpellDetailView detail in _detailViews)
        {
            if (detail != null)
                Destroy(detail.gameObject);
        }
        _detailViews.Clear();

        CombatSpellDefinition[] definitions = controller.ActiveSpells;
        for (int i = 0; i < definitions.Length; i++)
        {
            if (definitions[i] == null)
                continue;

            CombatSpellButtonView button = Instantiate(_activeButtonPrefab, _activeContainer);
            button.Bind(controller, i, definitions[i]);
            _activeButtons.Add(button);

            CombatSpellDetailView detail = Instantiate(_detailPrefab, _detailsContainer);
            detail.Bind(controller, definitions[i], i, false);
            _detailViews.Add(detail);
        }

        if (controller.PassiveSpell != null)
        {
            CombatSpellDetailView passiveDetail = Instantiate(_detailPrefab, _detailsContainer);
            passiveDetail.Bind(controller, controller.PassiveSpell, -1, true);
            _detailViews.Add(passiveDetail);
        }

        _passiveBadge.Bind(controller, controller.PassiveSpell, ToggleExpanded);
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

    private IEnumerator AnimateExpanded(bool expanded)
    {
        _detailsRoot.SetActive(true);
        _detailsCanvasGroup.alpha = 1f;
        _detailsCanvasGroup.blocksRaycasts = false;
        _detailsCanvasGroup.interactable = false;

        float startHeight = _panelRoot.sizeDelta.y;
        float targetHeight = expanded ? _expandedHeight : _collapsedHeight;
        float startRotation = _expandArrow.localEulerAngles.z;
        float targetRotation = expanded ? 180f : 0f;
        float elapsed = 0f;

        LightweightLocalization.Bind(_expandLabel,
            expanded ? "spell.details.close" : "spell.details.open");

        while (elapsed < _expandDuration)
        {
            elapsed += Time.unscaledDeltaTime;
            float t = Mathf.Clamp01(elapsed / _expandDuration);
            float eased = expanded ? EaseOutBack(t) : Mathf.SmoothStep(0f, 1f, t);
            _panelRoot.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical,
                Mathf.LerpUnclamped(startHeight, targetHeight, eased));
            _expandArrow.localRotation = Quaternion.Euler(0f, 0f,
                Mathf.LerpAngle(startRotation, targetRotation, Mathf.SmoothStep(0f, 1f, t)));
            yield return null;
        }

        _panelRoot.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, targetHeight);
        _detailsCanvasGroup.alpha = 1f;
        _expandArrow.localRotation = Quaternion.Euler(0f, 0f, targetRotation);
        _detailsCanvasGroup.blocksRaycasts = expanded;
        _detailsCanvasGroup.interactable = expanded;
        _detailsRoot.SetActive(expanded);
        _expandRoutine = null;
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
        _expandArrow.localRotation = Quaternion.Euler(0f, 0f, expanded ? 180f : 0f);
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

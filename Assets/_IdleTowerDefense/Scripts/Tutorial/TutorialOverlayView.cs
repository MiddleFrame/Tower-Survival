using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public sealed class TutorialOverlayView : MonoBehaviour
{
    [SerializeField] private Canvas _canvas;
    [SerializeField] private Image _dimmer;
    [SerializeField] private Image _finger;
    [SerializeField] private RectTransform _hintPanel;
    [SerializeField] private TMP_Text _hint;
    [SerializeField] private Button _dismissButton;
    [SerializeField] private Vector2 _fingerOffset = new(-46f, 52f);
    [SerializeField] private Vector2 _uiFingerOffset = new(0f, 52f);
    [SerializeField, Min(0f)] private float _bobDistance = 5f;
    [SerializeField, Min(0f)] private float _bobSpeed = 3f;

    private Camera _worldCamera;
    private Transform _worldTarget;
    private RectTransform _uiTarget;
    private Vector2? _screenTarget;
    private Action _dismissed;

    private RectTransform Root => (RectTransform)transform;

    private void Awake()
    {
        if (_canvas == null)
            _canvas = GetComponentInParent<Canvas>();
    }

    public void ShowWorld(string localizationKey, Transform target, Camera worldCamera,
        bool allowAnywhereDismiss, Action dismissed = null)
    {
        _worldTarget = target;
        _uiTarget = null;
        _screenTarget = null;
        _worldCamera = worldCamera;
        ResetDimmerBounds();
        PositionHintPanel(false);
        Show(localizationKey, allowAnywhereDismiss, dismissed);
    }

    public void ShowUi(string localizationKey, RectTransform target, bool allowAnywhereDismiss,
        Action dismissed = null)
    {
        _worldTarget = null;
        _uiTarget = target;
        _screenTarget = null;
        ClearDimmerOverHud(target);
        PositionHintPanel(true);
        Show(localizationKey, allowAnywhereDismiss, dismissed);
    }

    public void ShowScreen(string localizationKey, Vector2 screenPosition,
        bool allowAnywhereDismiss, Action dismissed = null)
    {
        _worldTarget = null;
        _uiTarget = null;
        _screenTarget = screenPosition;
        ResetDimmerBounds();
        PositionHintPanel(false);
        Show(localizationKey, allowAnywhereDismiss, dismissed);
    }

    public void Hide()
    {
        _dismissButton.onClick.RemoveListener(Dismiss);
        _dismissed = null;
        gameObject.SetActive(false);
    }

    private void Show(string localizationKey, bool allowAnywhereDismiss, Action dismissed)
    {
        _dismissed = dismissed;
        if (_hint.font != null)
            _hint.font.TryAddCharacters(LightweightLocalization.Get(localizationKey));
        LightweightLocalization.Bind(_hint, localizationKey);
        _dismissButton.onClick.RemoveListener(Dismiss);
        _dismissButton.onClick.AddListener(Dismiss);
        _dismissButton.gameObject.SetActive(allowAnywhereDismiss);
        gameObject.SetActive(true);
        transform.SetAsLastSibling();
        UpdateFingerPosition();
    }

    private void PositionHintPanel(bool keepBottomClear)
    {
        if (_hintPanel == null)
            return;

        _hintPanel.anchorMin = keepBottomClear
            ? new Vector2(0.07f, 0.69f)
            : new Vector2(0.07f, 0.035f);
        _hintPanel.anchorMax = keepBottomClear
            ? new Vector2(0.93f, 0.885f)
            : new Vector2(0.93f, 0.23f);
        _hintPanel.offsetMin = Vector2.zero;
        _hintPanel.offsetMax = Vector2.zero;
    }

    private void LateUpdate()
    {
        if (gameObject.activeSelf)
            UpdateFingerPosition();
    }

    private void UpdateFingerPosition()
    {
        Vector2 targetScreen;
        if (_worldTarget != null && _worldCamera != null)
            targetScreen = _worldCamera.WorldToScreenPoint(_worldTarget.position);
        else if (_uiTarget != null)
        {
            Canvas targetCanvas = _uiTarget.GetComponentInParent<Canvas>();
            Camera uiCamera = targetCanvas != null && targetCanvas.renderMode != RenderMode.ScreenSpaceOverlay
                ? targetCanvas.worldCamera
                : null;
            var targetCorners = new Vector3[4];
            _uiTarget.GetWorldCorners(targetCorners);
            targetScreen = RectTransformUtility.WorldToScreenPoint(
                uiCamera, (targetCorners[0] + targetCorners[2]) * 0.5f);
        }
        else if (_screenTarget.HasValue)
            targetScreen = _screenTarget.Value;
        else
            return;

        Camera eventCamera = _canvas != null && _canvas.renderMode != RenderMode.ScreenSpaceOverlay
            ? _canvas.worldCamera
            : null;
        if (!RectTransformUtility.ScreenPointToLocalPointInRectangle(
                Root, targetScreen, eventCamera, out Vector2 localPoint))
            return;

        float bob = Mathf.Sin(Time.unscaledTime * _bobSpeed) * _bobDistance;
        Vector2 offset = _uiTarget != null ? _uiFingerOffset : _fingerOffset;
        _finger.rectTransform.anchoredPosition = localPoint + offset + new Vector2(0f, bob);
    }

    private void ResetDimmerBounds()
    {
        if (_dimmer == null)
            return;

        RectTransform dimmerRect = _dimmer.rectTransform;
        dimmerRect.offsetMin = Vector2.zero;
        dimmerRect.offsetMax = Vector2.zero;
    }

    private void ClearDimmerOverHud(RectTransform target)
    {
        ResetDimmerBounds();
        if (_dimmer == null || target == null)
            return;

        CombatSpellHudView hud = target.GetComponentInParent<CombatSpellHudView>();
        RectTransform clearRegion = hud != null ? (RectTransform)hud.transform : target;
        var corners = new Vector3[4];
        clearRegion.GetWorldCorners(corners);

        Canvas targetCanvas = clearRegion.GetComponentInParent<Canvas>();
        Camera targetCamera = targetCanvas != null && targetCanvas.renderMode != RenderMode.ScreenSpaceOverlay
            ? targetCanvas.worldCamera
            : null;
        float screenTop = Mathf.Max(
            RectTransformUtility.WorldToScreenPoint(targetCamera, corners[1]).y,
            RectTransformUtility.WorldToScreenPoint(targetCamera, corners[2]).y);

        Canvas overlayCanvas = _canvas != null ? _canvas : GetComponentInParent<Canvas>();
        Camera overlayCamera = overlayCanvas != null && overlayCanvas.renderMode != RenderMode.ScreenSpaceOverlay
            ? overlayCanvas.worldCamera
            : null;
        if (!RectTransformUtility.ScreenPointToLocalPointInRectangle(
                Root, new Vector2(0f, screenTop), overlayCamera, out Vector2 localPoint))
            return;

        RectTransform dimmerRect = _dimmer.rectTransform;
        Vector2 offsetMin = dimmerRect.offsetMin;
        offsetMin.y = Mathf.Clamp(localPoint.y - Root.rect.yMin, 0f, Root.rect.height);
        dimmerRect.offsetMin = offsetMin;
    }

    private void Dismiss()
    {
        Action callback = _dismissed;
        Hide();
        callback?.Invoke();
    }
}

using System.Collections;
using System.Globalization;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public sealed class PassiveSpellPopupView : MonoBehaviour
{
    [SerializeField] private RectTransform _popupRoot;
    [SerializeField] private CanvasGroup _canvasGroup;
    [SerializeField] private RectTransform _panel;
    [SerializeField] private Button _backdropButton;
    [SerializeField] private Button _closeButton;
    [SerializeField] private Image _icon;
    [SerializeField] private TMP_Text _popupTitle;
    [SerializeField] private TMP_Text _title;
    [SerializeField] private TMP_Text _description;
    [SerializeField] private TMP_Text _damageStat;
    [SerializeField] private TMP_Text _powerStat;
    [SerializeField] private TMP_Text _cooldownStat;
    [SerializeField] private TMP_Text _durationStat;
    [SerializeField] private TMP_Text _runtimeStatus;
    [SerializeField, Min(0.05f)] private float _animationDuration = 0.18f;

    private CombatSpellController _controller;
    private CombatSpellDefinition _definition;
    private Coroutine _animation;

    public bool IsVisible => gameObject.activeSelf;

    public void Bind(CombatSpellController controller, CombatSpellDefinition definition)
    {
        _controller = controller;
        _definition = definition;
        AttachToCanvas();

        _backdropButton.onClick.RemoveListener(Hide);
        _backdropButton.onClick.AddListener(Hide);
        _closeButton.onClick.RemoveListener(Hide);
        _closeButton.onClick.AddListener(Hide);

        bool hasDefinition = definition != null;
        if (hasDefinition)
        {
            _icon.sprite = definition.Icon;
            _icon.enabled = definition.Icon != null;
            LightweightLocalization.Bind(_popupTitle, "spell.passive.popup_title");
            LightweightLocalization.Bind(_title, definition.TitleKey);
            LightweightLocalization.Bind(_description, definition.DescriptionKey);
            RefreshStaticStats();
        }

        gameObject.SetActive(false);
    }

    public void Show()
    {
        if (_definition == null)
            return;

        if (_animation != null)
            StopCoroutine(_animation);

        gameObject.SetActive(true);
        transform.SetAsLastSibling();
        _canvasGroup.alpha = 1f;
        _canvasGroup.blocksRaycasts = true;
        _canvasGroup.interactable = true;
        _panel.localScale = new Vector3(0.86f, 0.86f, 1f);
        Refresh();
        _animation = StartCoroutine(AnimatePanel(Vector3.one, false));
    }

    public void Hide()
    {
        if (!gameObject.activeSelf)
            return;

        if (_animation != null)
            StopCoroutine(_animation);

        _canvasGroup.blocksRaycasts = false;
        _canvasGroup.interactable = false;
        _animation = StartCoroutine(AnimatePanel(new Vector3(0.86f, 0.86f, 1f), true));
    }

    public void Refresh()
    {
        if (!gameObject.activeSelf || _controller == null || _definition == null)
            return;

        float damage = _controller.GetPassiveResolvedDamage();
        bool showsDamage = damage > 0f;
        _damageStat.gameObject.SetActive(showsDamage);
        if (showsDamage)
            LightweightLocalization.Bind(_damageStat, "spell.passive.damage", Format(damage));

        float remaining = _controller.PassiveCooldownRemaining;
        if (remaining > 0.01f)
            LightweightLocalization.Bind(_runtimeStatus, "spell.passive.status_cooldown", Format(remaining));
        else
            LightweightLocalization.Bind(_runtimeStatus, "spell.passive.status_ready");
    }

    private void RefreshStaticStats()
    {
        LightweightLocalization.Bind(_powerStat, "spell.passive.power", Format(_definition.Magnitude));
        LightweightLocalization.Bind(_cooldownStat, "spell.passive.cooldown", Format(_definition.CooldownSeconds));

        bool hasDuration = _definition.DurationSeconds > 0f;
        _durationStat.gameObject.SetActive(hasDuration);
        if (hasDuration)
            LightweightLocalization.Bind(_durationStat, "spell.passive.duration", Format(_definition.DurationSeconds));
    }

    private void AttachToCanvas()
    {
        Canvas canvas = GetComponentInParent<Canvas>();
        if (canvas == null || transform.parent == canvas.transform)
            return;

        transform.SetParent(canvas.transform, false);
        _popupRoot.anchorMin = Vector2.zero;
        _popupRoot.anchorMax = Vector2.one;
        _popupRoot.pivot = new Vector2(0.5f, 0.5f);
        _popupRoot.offsetMin = Vector2.zero;
        _popupRoot.offsetMax = Vector2.zero;
    }

    private IEnumerator AnimatePanel(Vector3 targetScale, bool hideAfter)
    {
        Vector3 startScale = _panel.localScale;
        float elapsed = 0f;
        while (elapsed < _animationDuration)
        {
            elapsed += Time.unscaledDeltaTime;
            float t = Mathf.SmoothStep(0f, 1f, Mathf.Clamp01(elapsed / _animationDuration));
            _panel.localScale = Vector3.LerpUnclamped(startScale, targetScale, t);
            yield return null;
        }

        _panel.localScale = targetScale;
        _animation = null;
        if (hideAfter)
            gameObject.SetActive(false);
    }

    private static string Format(float value)
    {
        return value.ToString("0.##", CultureInfo.InvariantCulture);
    }
}

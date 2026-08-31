using System.Collections;
using TMPro;
using UnityEngine;

public class CurrencyDisplayElement : MonoBehaviour
{
    public TextMeshProUGUI TextObject;
    public CurrencyTypes currencyType;
    [Header("Collection feedback")]
    [SerializeField] private RectTransform _collectionTarget;
    [SerializeField] private TMP_Text _gainTextPrefab;
    [SerializeField, Min(0.1f)] private float _gainDuration = 0.7f;
    [SerializeField, Min(0f)] private float _gainRise = 48f;

    private Coroutine _pulseRoutine;
    private Vector3 _collectionTargetScale;

    public CurrencyTypes CurrencyType => currencyType;
    public RectTransform CollectionTarget => _collectionTarget != null
        ? _collectionTarget
        : (RectTransform)transform;

    private void Awake()
    {
        if (currencyType == CurrencyTypes.Gold)
        {
            gameObject.SetActive(false);
            return;
        }

        _collectionTargetScale = CollectionTarget.localScale;
    }

    private void Start()
    {
        TextObject.text = DataController.Currency[currencyType].value.ToString("N0");
        DataController.currencyText[currencyType] = TextObject;
    }

    private void OnDestroy()
    {
        if (DataController.currencyText.TryGetValue(currencyType, out TMP_Text registered)
            && registered == TextObject)
            DataController.currencyText.Remove(currencyType);
    }

    public void ShowGain(int amount)
    {
        if (amount <= 0)
            return;

        TMP_Text gainSource = _gainTextPrefab != null ? _gainTextPrefab : TextObject;
        if (gainSource != null)
        {
            TMP_Text gainText = Instantiate(gainSource, gainSource.transform.parent);
            Canvas rootCanvas = gainSource.canvas != null ? gainSource.canvas.rootCanvas : null;
            if (rootCanvas != null)
            {
                gainText.rectTransform.SetParent(rootCanvas.transform, true);
                gainText.transform.SetAsLastSibling();
            }
            gainText.text = $"+{amount:N0}";
            gainText.gameObject.SetActive(true);
            StartCoroutine(AnimateGain(gainText));
        }

        if (_pulseRoutine != null)
            StopCoroutine(_pulseRoutine);
        _pulseRoutine = StartCoroutine(PulseCollectionTarget());
    }

    private IEnumerator AnimateGain(TMP_Text gainText)
    {
        RectTransform rect = gainText.rectTransform;
        Vector2 startPosition = rect.anchoredPosition;
        Color startColor = gainText.color;
        float elapsed = 0f;

        while (elapsed < _gainDuration && gainText != null)
        {
            elapsed += Time.unscaledDeltaTime;
            float t = Mathf.Clamp01(elapsed / _gainDuration);
            float eased = 1f - Mathf.Pow(1f - t, 3f);
            rect.anchoredPosition = startPosition + Vector2.up * (_gainRise * eased);
            float popPhase = Mathf.Sin(Mathf.PI * Mathf.Min(1f, t * 1.35f));
            float pop = Mathf.LerpUnclamped(0.9f, 1.25f, popPhase);
            rect.localScale = Vector3.one * pop;
            Color color = startColor;
            color.a = 1f - Mathf.SmoothStep(0f, 1f, Mathf.InverseLerp(0.45f, 1f, t));
            gainText.color = color;
            yield return null;
        }

        if (gainText != null)
            Destroy(gainText.gameObject);
    }

    private IEnumerator PulseCollectionTarget()
    {
        RectTransform target = CollectionTarget;
        float duration = Mathf.Min(0.32f, _gainDuration);
        float elapsed = 0f;
        while (elapsed < duration)
        {
            elapsed += Time.unscaledDeltaTime;
            float t = Mathf.Clamp01(elapsed / duration);
            float scale = 1f + Mathf.Sin(Mathf.PI * t) * 0.18f;
            target.localScale = _collectionTargetScale * scale;
            yield return null;
        }

        target.localScale = _collectionTargetScale;
        _pulseRoutine = null;
    }
}

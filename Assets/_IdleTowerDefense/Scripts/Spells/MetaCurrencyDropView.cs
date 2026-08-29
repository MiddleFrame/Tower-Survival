using System;
using System.Collections;
using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(SpriteRenderer), typeof(Collider2D))]
public sealed class MetaCurrencyDropView : MonoBehaviour
{
    [SerializeField, Min(0.1f)] private float _blinkDuration = 4f;
    [SerializeField, Min(0f)] private float _pulseStrength = 0.05f;
    [SerializeField, Min(0.1f)] private float _pulseSpeed = 3f;
    [Header("Collection flight")]
    [SerializeField, Min(0.1f)] private float _flightDuration = 0.7f;
    [SerializeField, Min(0f)] private float _flightArcHeight = 1.4f;
    [SerializeField, Range(0.1f, 1f)] private float _arrivalScale = 0.5f;
    [SerializeField] private Image _flightImage;

    private SpriteRenderer _spriteRenderer;
    private Collider2D _collider;
    private Action<int> _onCollected;
    private CurrencyDisplayElement _collectionTarget;
    private Camera _worldCamera;
    private Camera _uiCamera;
    private Canvas _flightCanvas;
    private RectTransform _flightCanvasRect;
    private RectTransform _flightRect;
    private Vector3 _baseScale;
    private float _remainingLifetime;
    private int _amount;
    private bool _resolved;
    private bool _isFlying;
    private bool _usesFlightImage;

    public float RemainingLifetime => _remainingLifetime;
    public bool IsFlying => _isFlying;

    private void Awake()
    {
        CacheComponents();
    }

    private void CacheComponents()
    {
        _spriteRenderer = GetComponent<SpriteRenderer>();
        _collider = GetComponent<Collider2D>();
        _baseScale = transform.localScale;
        if (_flightImage != null)
        {
            _flightRect = _flightImage.rectTransform;
            _flightImage.gameObject.SetActive(false);
        }
    }

    public void Initialize(int amount, float lifetime, CurrencyDisplayElement collectionTarget,
        Camera worldCamera, Action<int> onCollected)
    {
        CacheComponents();
        _amount = Mathf.Max(0, amount);
        _remainingLifetime = Mathf.Max(0.1f, lifetime);
        _collectionTarget = collectionTarget;
        _worldCamera = worldCamera;
        Canvas canvas = collectionTarget != null ? collectionTarget.GetComponentInParent<Canvas>() : null;
        _uiCamera = canvas != null && canvas.renderMode != RenderMode.ScreenSpaceOverlay
            ? canvas.worldCamera
            : null;
        _onCollected = onCollected;
        _resolved = false;
        _isFlying = false;
        _usesFlightImage = false;
        _collider.enabled = true;
        _spriteRenderer.enabled = true;
        transform.localScale = _baseScale;
        SetAlpha(1f);
    }

    private void Update()
    {
        if (_resolved || _isFlying)
            return;

        _remainingLifetime -= Time.unscaledDeltaTime;
        if (_remainingLifetime <= 0f)
        {
            Resolve(false);
            return;
        }

        float pulse = 1f + Mathf.Sin(Time.unscaledTime * _pulseSpeed) * _pulseStrength;
        transform.localScale = _baseScale * pulse;

        if (_remainingLifetime <= _blinkDuration)
        {
            float alpha = Mathf.PingPong(Time.unscaledTime * 4f, 0.7f) + 0.3f;
            SetAlpha(alpha);
        }
    }

    private void OnMouseDown()
    {
        Collect();
    }

    public void Collect()
    {
        if (_resolved || _isFlying)
            return;

        _collider.enabled = false;
        SetAlpha(1f);
        if (_collectionTarget == null || _worldCamera == null)
        {
            Resolve(true);
            return;
        }

        _usesFlightImage = PrepareFlightImage();
        _isFlying = true;
        StartCoroutine(FlyToCollectionTarget());
    }

    private IEnumerator FlyToCollectionTarget()
    {
        Vector3 startWorldPosition = transform.position;
        Vector2 startScreenPosition = _worldCamera.WorldToScreenPoint(startWorldPosition);
        Vector3 startScale = _usesFlightImage ? _flightRect.localScale : transform.localScale;
        Vector2 arcPosition = _worldCamera.WorldToScreenPoint(
            startWorldPosition + Vector3.up * _flightArcHeight);
        float screenArcHeight = Mathf.Abs(arcPosition.y - startScreenPosition.y);
        float elapsed = 0f;

        while (elapsed < _flightDuration && _collectionTarget != null)
        {
            elapsed += Time.unscaledDeltaTime;
            float t = Mathf.Clamp01(elapsed / _flightDuration);
            float eased = 1f - Mathf.Pow(1f - t, 3f);
            float inverse = 1f - eased;
            if (_usesFlightImage)
            {
                Vector2 destination = GetTargetScreenPosition();
                Vector2 control = (startScreenPosition + destination) * 0.5f
                                  + Vector2.up * screenArcHeight;
                Vector2 position = inverse * inverse * startScreenPosition
                                   + 2f * inverse * eased * control
                                   + eased * eased * destination;
                SetFlightScreenPosition(position);
                _flightRect.localScale = Vector3.LerpUnclamped(
                    startScale, Vector3.one * _arrivalScale, eased);
            }
            else
            {
                Vector3 destination = GetTargetWorldPosition();
                Vector3 control = (startWorldPosition + destination) * 0.5f
                                  + Vector3.up * _flightArcHeight;
                transform.position = inverse * inverse * startWorldPosition
                                     + 2f * inverse * eased * control
                                     + eased * eased * destination;
                transform.localScale = Vector3.LerpUnclamped(
                    startScale, _baseScale * _arrivalScale, eased);
            }
            yield return null;
        }

        if (_collectionTarget != null)
        {
            if (_usesFlightImage)
                SetFlightScreenPosition(GetTargetScreenPosition());
            else
                transform.position = GetTargetWorldPosition();
        }
        Resolve(true);
    }

    private bool PrepareFlightImage()
    {
        if (_flightImage == null)
            return false;

        Canvas canvas = _collectionTarget.GetComponentInParent<Canvas>();
        _flightCanvas = canvas != null ? canvas.rootCanvas : null;
        _flightCanvasRect = _flightCanvas != null ? _flightCanvas.transform as RectTransform : null;
        _flightRect = _flightImage.rectTransform;
        if (_flightCanvasRect == null || _flightRect == null)
            return false;

        Bounds bounds = _spriteRenderer.bounds;
        Vector3 minScreen = _worldCamera.WorldToScreenPoint(bounds.min);
        Vector3 maxScreen = _worldCamera.WorldToScreenPoint(bounds.max);
        float width = Mathf.Abs(maxScreen.x - minScreen.x) * _flightCanvasRect.rect.width / Screen.width;
        float height = Mathf.Abs(maxScreen.y - minScreen.y) * _flightCanvasRect.rect.height / Screen.height;

        _flightImage.sprite = _spriteRenderer.sprite;
        _flightImage.color = _spriteRenderer.color;
        _flightImage.preserveAspect = true;
        _flightRect.SetParent(_flightCanvasRect, false);
        _flightRect.SetAsLastSibling();
        _flightRect.anchorMin = _flightRect.anchorMax = _flightRect.pivot = new Vector2(0.5f, 0.5f);
        _flightRect.sizeDelta = new Vector2(width, height);
        _flightRect.localScale = Vector3.one;
        SetFlightScreenPosition(_worldCamera.WorldToScreenPoint(transform.position));
        _flightImage.gameObject.SetActive(true);
        _spriteRenderer.enabled = false;
        return true;
    }

    private Vector2 GetTargetScreenPosition()
    {
        return RectTransformUtility.WorldToScreenPoint(
            _uiCamera, _collectionTarget.CollectionTarget.position);
    }

    private Vector3 GetTargetWorldPosition()
    {
        Vector2 screenPosition = GetTargetScreenPosition();
        float cameraDistance = Mathf.Abs(transform.position.z - _worldCamera.transform.position.z);
        Vector3 worldPosition = _worldCamera.ScreenToWorldPoint(
            new Vector3(screenPosition.x, screenPosition.y, cameraDistance));
        worldPosition.z = transform.position.z;
        return worldPosition;
    }

    private void SetFlightScreenPosition(Vector2 screenPosition)
    {
        Camera eventCamera = _flightCanvas.renderMode == RenderMode.ScreenSpaceOverlay
            ? null
            : _flightCanvas.worldCamera;
        if (RectTransformUtility.ScreenPointToLocalPointInRectangle(
                _flightCanvasRect, screenPosition, eventCamera, out Vector2 localPoint))
            _flightRect.anchoredPosition = localPoint;
    }

    private void Resolve(bool collected)
    {
        if (_resolved)
            return;

        _resolved = true;
        _isFlying = false;
        _collider.enabled = false;
        if (collected)
            _onCollected?.Invoke(_amount);
        if (_flightImage != null && !_flightImage.transform.IsChildOf(transform))
        {
            if (Application.isPlaying)
                Destroy(_flightImage.gameObject);
            else
                DestroyImmediate(_flightImage.gameObject);
        }
        if (Application.isPlaying)
            Destroy(gameObject);
        else
            DestroyImmediate(gameObject);
    }

    private void SetAlpha(float alpha)
    {
        Color color = _spriteRenderer.color;
        color.a = alpha;
        _spriteRenderer.color = color;
    }
}

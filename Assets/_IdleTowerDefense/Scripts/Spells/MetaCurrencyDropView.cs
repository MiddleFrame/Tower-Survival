using System;
using System.Collections;
using UnityEngine;

[RequireComponent(typeof(SpriteRenderer), typeof(Collider2D))]
public sealed class MetaCurrencyDropView : MonoBehaviour
{
    [SerializeField, Min(0.1f)] private float _blinkDuration = 4f;
    [SerializeField, Min(0f)] private float _pulseStrength = 0.1f;
    [SerializeField, Min(0.1f)] private float _pulseSpeed = 5f;
    [Header("Collection flight")]
    [SerializeField, Min(0.1f)] private float _flightDuration = 0.7f;
    [SerializeField, Min(0f)] private float _flightArcHeight = 1.4f;
    [SerializeField, Range(0.1f, 1f)] private float _arrivalScale = 0.5f;

    private SpriteRenderer _spriteRenderer;
    private Collider2D _collider;
    private Action<int> _onCollected;
    private CurrencyDisplayElement _collectionTarget;
    private Camera _worldCamera;
    private Camera _uiCamera;
    private Vector3 _baseScale;
    private float _remainingLifetime;
    private int _amount;
    private bool _resolved;
    private bool _isFlying;

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
        _collider.enabled = true;
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

        _isFlying = true;
        StartCoroutine(FlyToCollectionTarget());
    }

    private IEnumerator FlyToCollectionTarget()
    {
        Vector3 startPosition = transform.position;
        Vector3 startScale = transform.localScale;
        float elapsed = 0f;

        while (elapsed < _flightDuration && _collectionTarget != null)
        {
            elapsed += Time.unscaledDeltaTime;
            float t = Mathf.Clamp01(elapsed / _flightDuration);
            float eased = 1f - Mathf.Pow(1f - t, 3f);
            Vector3 destination = GetTargetWorldPosition();
            Vector3 control = (startPosition + destination) * 0.5f + Vector3.up * _flightArcHeight;
            float inverse = 1f - eased;
            transform.position = inverse * inverse * startPosition
                                 + 2f * inverse * eased * control
                                 + eased * eased * destination;
            transform.localScale = Vector3.LerpUnclamped(
                startScale, _baseScale * _arrivalScale, eased);
            yield return null;
        }

        if (_collectionTarget != null)
            transform.position = GetTargetWorldPosition();
        Resolve(true);
    }

    private Vector3 GetTargetWorldPosition()
    {
        RectTransform target = _collectionTarget.CollectionTarget;
        Vector2 screenPosition = RectTransformUtility.WorldToScreenPoint(_uiCamera, target.position);
        float cameraDistance = Mathf.Abs(transform.position.z - _worldCamera.transform.position.z);
        Vector3 worldPosition = _worldCamera.ScreenToWorldPoint(
            new Vector3(screenPosition.x, screenPosition.y, cameraDistance));
        worldPosition.z = transform.position.z;
        return worldPosition;
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

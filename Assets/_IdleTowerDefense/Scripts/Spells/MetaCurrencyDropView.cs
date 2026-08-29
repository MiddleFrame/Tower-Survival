using System;
using UnityEngine;

[RequireComponent(typeof(SpriteRenderer), typeof(Collider2D))]
public sealed class MetaCurrencyDropView : MonoBehaviour
{
    [SerializeField, Min(0.1f)] private float _blinkDuration = 4f;
    [SerializeField, Min(0f)] private float _pulseStrength = 0.1f;
    [SerializeField, Min(0.1f)] private float _pulseSpeed = 5f;

    private SpriteRenderer _spriteRenderer;
    private Collider2D _collider;
    private Action<int> _onCollected;
    private Vector3 _baseScale;
    private float _remainingLifetime;
    private int _amount;
    private bool _resolved;

    public float RemainingLifetime => _remainingLifetime;

    private void Awake()
    {
        _spriteRenderer = GetComponent<SpriteRenderer>();
        _collider = GetComponent<Collider2D>();
        _baseScale = transform.localScale;
    }

    public void Initialize(int amount, float lifetime, Action<int> onCollected)
    {
        _amount = Mathf.Max(0, amount);
        _remainingLifetime = Mathf.Max(0.1f, lifetime);
        _onCollected = onCollected;
        _resolved = false;
        _collider.enabled = true;
        SetAlpha(1f);
    }

    private void Update()
    {
        if (_resolved)
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
        Resolve(true);
    }

    private void Resolve(bool collected)
    {
        if (_resolved)
            return;

        _resolved = true;
        _collider.enabled = false;
        if (collected)
            _onCollected?.Invoke(_amount);
        Destroy(gameObject);
    }

    private void SetAlpha(float alpha)
    {
        Color color = _spriteRenderer.color;
        color.a = alpha;
        _spriteRenderer.color = color;
    }
}

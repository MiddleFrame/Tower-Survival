using System;
using System.Collections;
using UnityEngine;

public sealed class FallingDaggerEffect : MonoBehaviour
{
    [SerializeField] private Transform _dagger;
    [SerializeField] private ParticleSystem _bloodParticles;
    [SerializeField, Min(0.1f)] private float _fallDuration = 0.48f;
    [SerializeField, Min(0.1f)] private float _startHeight = 1.35f;
    [SerializeField, Min(0f)] private float _impactHold = 0.12f;

    public void Play(Transform target, Action onImpact)
    {
        StartCoroutine(Fall(target, onImpact));
    }

    private IEnumerator Fall(Transform target, Action onImpact)
    {
        if (target == null)
        {
            Destroy(gameObject);
            yield break;
        }

        Vector3 impact = target.position + Vector3.up * 0.2f;
        Vector3 start = impact + Vector3.up * _startHeight;
        transform.position = impact;
        _dagger.position = start;
        float elapsed = 0f;

        while (elapsed < _fallDuration && target != null)
        {
            elapsed += GetAnimationDeltaTime();
            impact = target.position + Vector3.up * 0.2f;
            start = impact + Vector3.up * _startHeight;
            float t = Mathf.Clamp01(elapsed / _fallDuration);
            float accelerated = t * t;
            _dagger.position = Vector3.LerpUnclamped(start, impact, accelerated);
            yield return null;
        }

        if (_dagger != null)
            _dagger.gameObject.SetActive(false);
        onImpact?.Invoke();
        _bloodParticles?.Play();
        elapsed = 0f;
        while (elapsed < _impactHold)
        {
            elapsed += GetAnimationDeltaTime();
            yield return null;
        }
        if (_bloodParticles != null)
            yield return new WaitWhile(() => _bloodParticles.IsAlive(true));
        Destroy(gameObject);
    }

    private static float GetAnimationDeltaTime()
    {
        return Time.timeScale > 0f ? Time.deltaTime : Time.unscaledDeltaTime;
    }
}

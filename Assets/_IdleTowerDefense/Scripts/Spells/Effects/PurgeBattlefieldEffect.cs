using System;
using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public sealed class PurgeBattlefieldEffect : MonoBehaviour
{
    private static readonly int OriginId = Shader.PropertyToID("_Origin");
    private static readonly int AspectId = Shader.PropertyToID("_Aspect");
    private static readonly int ProgressId = Shader.PropertyToID("_Progress");
    private static readonly int ChargeId = Shader.PropertyToID("_Charge");

    [SerializeField] private RawImage _flashImage;
    [SerializeField, Min(0f)] private float _chargeDuration = 0.5f;
    [SerializeField, Min(0.05f)] private float _waveDuration = 0.55f;

    private Material _runtimeMaterial;

    public void Play(Transform origin, Camera worldCamera, Action impact)
    {
        if (_flashImage == null || _flashImage.material == null)
        {
            impact?.Invoke();
            Destroy(gameObject);
            return;
        }

        Vector2 screenPosition = worldCamera != null && origin != null
            ? (Vector2)worldCamera.WorldToScreenPoint(origin.position)
            : new Vector2(Screen.width * 0.5f, Screen.height * 0.5f);
        Vector2 normalizedOrigin = new(
            Mathf.Clamp01(screenPosition.x / Screen.width),
            Mathf.Clamp01(screenPosition.y / Screen.height));

        _runtimeMaterial = new Material(_flashImage.material);
        _flashImage.material = _runtimeMaterial;
        _flashImage.raycastTarget = false;
        _runtimeMaterial.SetVector(OriginId, normalizedOrigin);
        _runtimeMaterial.SetFloat(AspectId, (float)Screen.width / Screen.height);
        _runtimeMaterial.SetFloat(ProgressId, 0f);
        _runtimeMaterial.SetFloat(ChargeId, 0f);
        StartCoroutine(PlaySequence(impact));
    }

    private IEnumerator PlaySequence(Action impact)
    {
        float elapsed = 0f;
        while (elapsed < _chargeDuration)
        {
            elapsed += Time.unscaledDeltaTime;
            _runtimeMaterial.SetFloat(ChargeId, Mathf.Clamp01(elapsed / _chargeDuration));
            yield return null;
        }

        elapsed = 0f;
        while (elapsed < _waveDuration)
        {
            elapsed += Time.unscaledDeltaTime;
            float progress = Mathf.Clamp01(elapsed / _waveDuration);
            _runtimeMaterial.SetFloat(ProgressId, 1f - Mathf.Pow(1f - progress, 3f));
            yield return null;
        }

        impact?.Invoke();
        Destroy(gameObject);
    }

    private void OnDestroy()
    {
        if (_runtimeMaterial != null)
            Destroy(_runtimeMaterial);
    }
}

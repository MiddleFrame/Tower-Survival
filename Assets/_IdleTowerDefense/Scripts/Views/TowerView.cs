using UnityEngine;

public class TowerView : MonoBehaviour
{
    [SerializeField]
    private GameObject _destroyAnim;    
    
    [SerializeField]
    private GameObject _defaultSprite;    
    
    [SerializeField]
    private GameObject _destroyedSprite;
    [SerializeField]
    private GameObject _invulnerabilityVisual;

    private SpriteRenderer[] _shimmerRenderers;
    private Material[] _defaultMaterials;

    public LineRenderer radiusLine;
    public void Init()
    {
        if (_destroyAnim.activeSelf)
            _destroyAnim.SetActive(false);
        SetInvulnerable(false);
    }

    public void DestroyAnim()
    {
        _destroyAnim.SetActive(true);
        
        _defaultSprite.SetActive(false);
        _destroyedSprite.SetActive(true);
    }

    public void SetInvulnerable(bool active, Material shimmerMaterial = null)
    {
        if (_invulnerabilityVisual != null && _invulnerabilityVisual.activeSelf)
            _invulnerabilityVisual.SetActive(false);

        CacheShimmerRenderers();
        for (int i = 0; i < _shimmerRenderers.Length; i++)
        {
            if (_shimmerRenderers[i] == null)
                continue;

            _shimmerRenderers[i].sharedMaterial = active && shimmerMaterial != null
                ? shimmerMaterial
                : _defaultMaterials[i];
        }
    }

    private void CacheShimmerRenderers()
    {
        if (_shimmerRenderers != null)
            return;

        _shimmerRenderers = _defaultSprite != null
            ? _defaultSprite.GetComponentsInChildren<SpriteRenderer>(true)
            : System.Array.Empty<SpriteRenderer>();
        _defaultMaterials = new Material[_shimmerRenderers.Length];
        for (int i = 0; i < _shimmerRenderers.Length; i++)
            _defaultMaterials[i] = _shimmerRenderers[i].sharedMaterial;
    }
}

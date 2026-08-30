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

    public void SetInvulnerable(bool active)
    {
        if (_invulnerabilityVisual != null && _invulnerabilityVisual.activeSelf != active)
            _invulnerabilityVisual.SetActive(active);
    }
}

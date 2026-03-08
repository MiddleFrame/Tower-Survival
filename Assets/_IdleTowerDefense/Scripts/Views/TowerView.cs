using UnityEngine;

public class TowerView : MonoBehaviour
{
    [SerializeField]
    private GameObject _destroyAnim;

    public LineRenderer radiusLine;
    public void Init()
    {
        if (_destroyAnim.activeSelf)
            _destroyAnim.SetActive(false);
    }

    public void DestroyAnim()
    {
        _destroyAnim.SetActive(true);
    }
}
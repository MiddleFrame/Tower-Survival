using UnityEngine;

public class VillageController : MonoBehaviour
{
    [SerializeField]
    private VillageElement[] _villageElements;

    public void Initialize()
    {
        _villageElements.Initialize();
    }
}

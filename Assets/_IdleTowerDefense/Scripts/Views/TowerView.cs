using System.Collections;
using Leopotam.EcsLite;
using UnityEngine;

public class TowerView : MonoBehaviour
{
    [SerializeField] 
    private LineRenderer RadiusRenderer;

    public AudioClip shootingSound;
    private float _targetingRange = -1;

    public EcsPackedEntity PackedEntity;

    IEnumerator Start()
    {
        yield return null;
        TemporaryUpgradeManager.Instance.UpdateEnemySpawnRange(_targetingRange);
    }

    private void Update()
    {
        if (!PackedEntity.Unpack(GameManager.Instance.World, out int unpackedTower))
        {
            Debug.Log($"{nameof(TowerView)}.{nameof(Update)}() - Attempted to get an invalid packed entity!");
            return;
        }

        EcsPool<TowerTargetSelector> targetSelectorPool = GameManager.Instance.World.GetPool<TowerTargetSelector>();
        ref TowerTargetSelector towerTargetSelector = ref targetSelectorPool.Get(unpackedTower);
        
        if (!_targetingRange.Equals(towerTargetSelector.TargetingRange))
        {
            _targetingRange = towerTargetSelector.TargetingRange;
            UpdateTargetingRange(_targetingRange);
        }
    }

    private void UpdateTargetingRange(float range)
    {
        int numSegments = 80;
        float deltaTheta = (2 * Mathf.PI) / numSegments;
        float theta = 0f;

        RadiusRenderer.positionCount = numSegments + 1;

        for (int i = 0; i < numSegments + 1; i++)
        {
            float x = range * Mathf.Cos(theta);
            float y = range * Mathf.Sin(theta);

            RadiusRenderer.SetPosition(i, new Vector3(x, y, 0f));

            theta += deltaTheta;
        }
    }
}
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameplayViewPools : MonoBehaviour
{
    private class PoolData
    {
        public GameObject Prefab;
        public readonly Stack<GameObject> Inactive = new Stack<GameObject>();
    }

    private readonly Dictionary<int, PoolData> _poolsByPrefabId = new Dictionary<int, PoolData>();
    private readonly Dictionary<GameObject, PoolData> _instanceToPool = new Dictionary<GameObject, PoolData>();
    private readonly Dictionary<GameObject, int> _instanceVersions = new Dictionary<GameObject, int>();

    public T Spawn<T>(T prefab, Vector3 position, Quaternion rotation) where T : Component
    {
        if (prefab == null)
            return null;

        GameObject instance = SpawnInternal(prefab.gameObject, position, rotation);
        return instance.GetComponent<T>();
    }

    public GameObject Spawn(GameObject prefab, Vector3 position, Quaternion rotation)
    {
        if (prefab == null)
            return null;

        return SpawnInternal(prefab, position, rotation);
    }

    public void Release(Component instance)
    {
        if (instance != null)
            Release(instance.gameObject);
    }

    public void Release(GameObject instance)
    {
        if (instance == null)
            return;

        if (!_instanceToPool.TryGetValue(instance, out var pool))
        {
            instance.SetActive(false);
            return;
        }

        _instanceToPool.Remove(instance);
        instance.SetActive(false);
        instance.transform.SetParent(transform, false);
        pool.Inactive.Push(instance);
    }

    public void SpawnTimed(GameObject prefab, Vector3 position, Quaternion rotation, float lifetime)
    {
        GameObject instance = Spawn(prefab, position, rotation);
        if (instance == null)
            return;

        int version = _instanceVersions.TryGetValue(instance, out int currentVersion)
            ? currentVersion
            : 0;

        StartCoroutine(ReleaseAfterDelay(instance, version, lifetime));
    }

    private IEnumerator ReleaseAfterDelay(GameObject instance, int version, float lifetime)
    {
        yield return new WaitForSeconds(Mathf.Max(0f, lifetime));

        if (instance == null)
            yield break;

        if (_instanceVersions.TryGetValue(instance, out int currentVersion)
            && currentVersion == version
            && _instanceToPool.ContainsKey(instance))
        {
            Release(instance);
        }
    }

    private GameObject SpawnInternal(GameObject prefab, Vector3 position, Quaternion rotation)
    {
        PoolData pool = GetOrCreatePool(prefab);
        GameObject instance = pool.Inactive.Count > 0 ? pool.Inactive.Pop() : Instantiate(prefab, transform);
        instance.transform.SetPositionAndRotation(position, rotation);
        instance.SetActive(true);
        _instanceToPool[instance] = pool;
        _instanceVersions[instance] = _instanceVersions.TryGetValue(instance, out int version) ? version + 1 : 1;
        return instance;
    }

    private PoolData GetOrCreatePool(GameObject prefab)
    {
        int prefabId = prefab.GetInstanceID();
        if (_poolsByPrefabId.TryGetValue(prefabId, out var pool))
            return pool;

        pool = new PoolData { Prefab = prefab };
        _poolsByPrefabId[prefabId] = pool;
        return pool;
    }
}

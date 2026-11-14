using System;
using System.Collections;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;

public interface IAssetsLoader
{
    AssetLease<T> Acquire<T>(AssetReference reference) where T : UnityEngine.Object;
}

public sealed class AddressableAssetsLoader : IAssetsLoader
{
    public AssetLease<T> Acquire<T>(AssetReference reference) where T : UnityEngine.Object
    {
        if (reference == null || !reference.RuntimeKeyIsValid())
            throw new ArgumentException("An addressable asset reference is required.", nameof(reference));

        // Each acquire owns one Addressables handle. Addressables itself counts shared dependencies.
        return new AssetLease<T>(Addressables.LoadAssetAsync<T>(reference.RuntimeKey));
    }
}

public sealed class AssetLease<T> : IDisposable where T : UnityEngine.Object
{
    private AsyncOperationHandle<T> _handle;
    private bool _released;

    internal AssetLease(AsyncOperationHandle<T> handle)
    {
        _handle = handle;
    }

    public bool IsDone => !_released && _handle.IsDone;
    public bool Succeeded => IsDone && _handle.Status == AsyncOperationStatus.Succeeded;
    public T Asset => Succeeded ? _handle.Result : null;
    public Exception Error => IsDone ? _handle.OperationException : null;

    public IEnumerator Wait()
    {
        while (!_released && !_handle.IsDone)
            yield return null;
    }

    public void Dispose()
    {
        if (_released)
            return;

        _released = true;
        if (_handle.IsValid())
            Addressables.Release(_handle);
    }
}

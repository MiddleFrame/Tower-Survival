using UnityEngine;
using UnityEngine.UI;

[ExecuteInEditMode]
[RequireComponent(typeof(GridLayoutGroup))]
public class AdjustGridLayoutCellSize : MonoBehaviour
{
    public enum Axis
    {
        X,
        Y
    };

    public enum RatioMode
    {
        Free,
        Fixed
    };

    [SerializeField]
    Axis expand;

    [SerializeField]
    RatioMode ratioMode;

    [SerializeField]
    float cellRatio = 1;

    [SerializeField]
    private GridLayoutGroup grid;

    new RectTransform transform;

    void Awake()
    {
        transform = (RectTransform) base.transform;
        ValidateReferences();
    }

    // Start is called before the first frame update
    void Start()
    {
        UpdateCellSize();
    }

    void OnRectTransformDimensionsChange()
    {
        transform ??= (RectTransform) base.transform;
        UpdateCellSize();
    }

#if UNITY_EDITOR
    [ExecuteAlways]
    void Update()
    {
        UpdateCellSize();
    }
#endif

    void OnValidate()
    {
        transform ??= (RectTransform) base.transform;
#if UNITY_EDITOR
        if (grid == null)
            TryGetComponent(out grid);
#endif
        UpdateCellSize();
    }

    void UpdateCellSize()
    {
        if (grid == null)
            return;

        var count = grid.constraintCount;
        if (count <= 0)
            return;

        if (expand == Axis.X)
        {
            float spacing = (count - 1) * grid.spacing.x;
            float contentSize = transform.rect.width - grid.padding.left - grid.padding.right - spacing;
            float sizePerCell = contentSize / count;
            grid.cellSize = new Vector2(sizePerCell,
                ratioMode == RatioMode.Free ? grid.cellSize.y : sizePerCell * cellRatio);
        }
        else //if (expand == Axis.Y)
        {
            float spacing = (count - 1) * grid.spacing.y;
            float contentSize = transform.rect.height - grid.padding.top - grid.padding.bottom - spacing;
            float sizePerCell = contentSize / count;
            grid.cellSize = new Vector2(ratioMode == RatioMode.Free ? grid.cellSize.x : sizePerCell * cellRatio,
                sizePerCell);
        }
    }

    private void ValidateReferences()
    {
        if (grid != null)
            return;

        Debug.LogError($"{nameof(AdjustGridLayoutCellSize)} on {name} has no GridLayoutGroup reference.", this);
        enabled = false;
    }
}

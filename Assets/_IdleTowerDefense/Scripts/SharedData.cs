public class SharedData 
{
    public GameSettings Settings { get; private set; }
    public TowerView TowerView;

    public void InitDefaultValues(GameSettings inputSettings)
    {
        Settings = inputSettings;
    }
}

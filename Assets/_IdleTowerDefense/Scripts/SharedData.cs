public class SharedData 
{
    public GameSettings Settings { get; private set; }

    public void InitDefaultValues(GameSettings inputSettings)
    {
        Settings = inputSettings;
    }
}

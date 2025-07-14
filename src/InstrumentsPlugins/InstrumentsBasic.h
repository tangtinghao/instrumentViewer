class InstrumentsBasic
{
public:
    InstrumentsBasic() = default;
    virtual ~InstrumentsBasic() = default;

    // Add any common methods or properties for all instruments here
    virtual void initialize() = 0; // Pure virtual function for initialization
    virtual void connect() = 0;     // Pure virtual function for updating instrument state
    virtual void disconnect() = 0;  // Pure virtual function for disconnecting from the instrument
    virtual void doCommand(const char* cmd) = 0; // Pure virtual function for sending commands to the instrument
};
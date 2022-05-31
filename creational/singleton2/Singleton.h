class Singleton {
    static Singleton *ins;
    int data;
public:
    static Singleton* getInstance();
    int getData();
    void setData(int value);
};
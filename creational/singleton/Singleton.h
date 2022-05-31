class Singleton {
  int data;
  static Singleton* instance;
private:
    Singleton();
public:
    Singleton(Singleton &other) = delete;
    void operator=(const Singleton &) = delete;
    static Singleton *GetInstance();
    int getData() {
        return data;
    } 
    void setData(int data) {
        this->data = data;
    } 
};

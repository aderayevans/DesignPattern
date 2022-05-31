#include <iostream>
#include <thread>
#include <mutex> 
using namespace std;

class Singleton {
private:
    string value;
    static Singleton * pinstance;
    Singleton(const string value){
        this->value = value;
    }

public:
    Singleton(Singleton &other) = delete;
    void operator=(const Singleton &) = delete;
    static Singleton *GetInstance(const string& value);
    string getValue() const{
        return this->value;
    } 
};

Singleton* Singleton::pinstance = nullptr;

Singleton *Singleton::GetInstance(const string& value)
{
    if (pinstance == nullptr)
    {
        pinstance = new Singleton(value);
    }
    return pinstance;
}

void Thread1(){
     std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    Singleton* singleton = Singleton::GetInstance("Thread1");
    cout << "addr: " << singleton << ". Value: " << singleton->getValue() << "\n" << std::flush;
}

void Thread2(){
     std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    Singleton* singleton = Singleton::GetInstance("Thread2");
    cout << "addr: " << singleton << ". Value: " << singleton->getValue() << "\n" << std::flush;
}

int main()
{   
    thread t1(Thread1);
    thread t2(Thread2);
    t1.join();
    t2.join();
    
    return 0;
}


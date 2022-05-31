#include <iostream>
#include <thread>
#include <mutex> 
using namespace std;

class Singleton {
private:
    static Singleton * pinstance_;
    static std::mutex mutex_;
    Singleton(const std::string value): value_(value)
    {
    }
protected:
    ~Singleton() {}
    std::string value_;

public:
    Singleton(Singleton &other) = delete;
    void operator=(const Singleton &) = delete;
    static Singleton *GetInstance(const std::string& value);
    std::string value() const{
        return value_;
    } 
};

Singleton* Singleton::pinstance_{nullptr};
std::mutex Singleton::mutex_;

Singleton *Singleton::GetInstance(const std::string& value)
{
    std::lock_guard<std::mutex> lock(mutex_);
    if (pinstance_ == nullptr)
    {
        pinstance_ = new Singleton(value);
    }
    return pinstance_;
}

void Thread1(){
     std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    Singleton* singleton = Singleton::GetInstance("Thread1");
    std::cout << singleton->value() << "\n";
}

void Thread2(){
     std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    Singleton* singleton = Singleton::GetInstance("Thread2");
    std::cout << singleton->value() << "\n";
}

int main()
{   
    std::thread t1(Thread1);
    std::thread t2(Thread2);
    t1.join();
    t2.join();
    
    return 0;
}


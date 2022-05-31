#include "Singleton.h"
#include <iostream>


using namespace std;

Singleton* Singleton::instance = nullptr;

Singleton::Singleton() {
}
Singleton *Singleton::GetInstance(){
    if(instance ==nullptr){
        instance = new Singleton();
    }
    return instance;
}
int main(){
    Singleton* instance1 = Singleton::GetInstance();
    instance1->setData(34);
    Singleton* instance2 = Singleton::GetInstance();
    Singleton* instance3 = Singleton::GetInstance();
    Singleton* instance4 = Singleton::GetInstance();
    Singleton* instance5 = Singleton::GetInstance();
    Singleton* instance6 = Singleton::GetInstance();

    instance2->setData(15);
    printf("%d\n", instance1->getData());
    printf("%p=%p\n", instance5, instance2);
    return 0;
}
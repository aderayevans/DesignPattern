#include "Singleton.h"

Singleton* Singleton::ins = nullptr;

Singleton* Singleton::getInstance() {
    if (ins == nullptr) {
        ins = new Singleton();
    }
  return ins;
}

 int Singleton::getData() {
     return data;
 }

void Singleton::setData(int value) {
    data = value;
}
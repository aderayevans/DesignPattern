#ifndef __FACTORYMAKER__
#define __FACTORYMAKER__
#include "milk.h"
#include "abstractfactory.h"
enum FactoryType {
    VN,
    US
};
class FactoryMaker {
public:
    Abstractfactory* getFactory(FactoryType type);
    
};
#endif
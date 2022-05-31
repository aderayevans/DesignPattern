#ifndef __ABSTRACTFACTORY__
#define __ABSTRACTFACTORY__
#include "milk.h"
class Abstractfactory {
public:
    virtual Milk* getMilk(MilkType type)=0;
    
};
#endif
#include "milk.h"
#include "abstractfactory.h"
class USFactory: public Abstractfactory {
public:
    Milk* getMilk(MilkType type);
    
};
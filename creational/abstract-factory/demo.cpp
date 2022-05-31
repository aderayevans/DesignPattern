#include "USFactory.h"
#include "milk.h"
#include "factoryMaker.h"

Abstractfactory* getFactory() {
  FactoryType type = US;
  FactoryMaker *factory = new FactoryMaker();
  return factory->getFactory(type);
}

int main() {
  Abstractfactory* factory = getFactory(); 
  Milk * a =  factory->getMilk(MilkType::Orange);
  a->showInfo();
}
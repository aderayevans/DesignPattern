#include "factorymethod.h"
#include "milk.h"

MilkType getType() {
  return MilkType::Orange;
}
int main() {
  FactoryMethod *factory = new FactoryMethod();
  Milk * a =  factory->getMilk(getType());
  a->showInfo();
}
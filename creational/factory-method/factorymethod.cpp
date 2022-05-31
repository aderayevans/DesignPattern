#include "factorymethod.h"
#include "orangemilk.h"
#include "strawberrymilk.h"

Milk* FactoryMethod::getMilk(MilkType type) {
  Milk *milk = nullptr;
  switch (type)
  {
  case Orange:
    milk = new OrangeMilk();
    break;
  
  case Strawberry:
    milk = new StrawberryMilk();
    break;
  default:
      break;
  }
  return milk;
}
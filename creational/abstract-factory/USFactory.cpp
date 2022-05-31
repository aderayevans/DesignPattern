#include "abstractfactory.h"
#include "USOrangemilk.h"
#include "USStrawberrymilk.h"
#include "USFactory.h"

Milk* USFactory::getMilk(MilkType type) {
  Milk *milk = nullptr;
  switch (type)
  {
  case Orange:
    milk = new USOrangeMilk();
    break;
  
  case Strawberry:
    milk = new USStrawberryMilk();
    break;
  default:
      break;
  }
  return milk;
}
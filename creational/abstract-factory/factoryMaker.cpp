#include "factoryMaker.h"
#include "USOrangemilk.h"
#include "USStrawberrymilk.h"
#include "USFactory.h"
#include "abstractfactory.h"

Abstractfactory* FactoryMaker::getFactory(FactoryType type) {
  Abstractfactory *factory = nullptr;
  switch (type)
  {
  case US:
    factory = new USFactory();
    break;
  default:
      break;
  }
  return factory;
}
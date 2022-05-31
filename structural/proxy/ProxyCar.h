#pragma once
#include "ICar.h"
#include "Car.h"
#include "Driver.h"

class ProxyCar : public ICar {
	Driver* driver;
	ICar* realCar;
public:
	ProxyCar(Driver* driver);
	void MoveCar();
};


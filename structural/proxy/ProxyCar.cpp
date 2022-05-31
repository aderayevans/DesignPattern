#include "ProxyCar.h"
#include <iostream>
using namespace std;
ProxyCar::ProxyCar(Driver* driver)
{
	this->driver = driver;
	realCar = new Car();
}

void ProxyCar::MoveCar() {
	if (driver->getAge() <= 16)
		cout << "Sorry the driver is too young to drive" << endl;
	else
		realCar->MoveCar();
}

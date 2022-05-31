// proxy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ProxyCar.h"
#include "ICar.h"
#include "Driver.h"
int main()
{
	ICar* car = new ProxyCar(new Driver(36));
	car->MoveCar();

	//car = new ProxyCar(new Driver(25));
	//car->MoveCar();

}


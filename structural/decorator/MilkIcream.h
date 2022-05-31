#pragma once
#include <iostream>
#include "IceCreamDecorator.h"
using namespace std;

class MilkIcream : public IceCreamDecorator {
public:
	MilkIcream(IIcecream* icecream);
	double price();
	string toString();

};


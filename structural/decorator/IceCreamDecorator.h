#pragma once
#include <iostream>
using namespace std;

#include "IIcecream.h"
class IceCreamDecorator : public IIcecream {
protected:
	IIcecream* icecream;
public:
	IceCreamDecorator(IIcecream* icecream);
	double price();
	string toString();

};


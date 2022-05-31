#pragma once
#include "IceCreamDecorator.h"
class CoconutIceCream :
	public IceCreamDecorator
{
public:
	CoconutIceCream(IIcecream* icecream);
	double price();
	string toString();
};


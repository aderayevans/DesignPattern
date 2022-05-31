#pragma once
#include "IceCreamDecorator.h"
class ChocolateCream :
	public IceCreamDecorator
{
public:
	ChocolateCream(IIcecream* icecream);
	double price();
	string toString();
};


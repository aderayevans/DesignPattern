// decorator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Icecream.h"
#include "MilkIcream.h"
#include "CoconutIceCream.h"
#include "ChocolateCream.h"

int main()
{
	IIcecream *ice = new Icecream();
	ice = new MilkIcream(ice);
	ice = new CoconutIceCream(ice);
	ice = new ChocolateCream(ice);
	std::cout << ice->toString() << ". Price: " << ice->price() << endl;
}

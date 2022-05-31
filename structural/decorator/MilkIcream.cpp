#include "MilkIcream.h"
#include "IIcecream.h"
#include <iostream>
using namespace std;

MilkIcream::MilkIcream(IIcecream* icecream):IceCreamDecorator(icecream) {
}

double MilkIcream::price() {
	return icecream->price() + 0.2;
}

string MilkIcream::toString() {
	return IceCreamDecorator::toString() + "+ milk";
}


#include "IceCreamDecorator.h"
#include <iostream>
using namespace std;

IceCreamDecorator::IceCreamDecorator(IIcecream* ice):icecream(ice) {
	
}

double IceCreamDecorator::price() {
	return icecream->price();
}

string IceCreamDecorator::toString() {
	return icecream->toString();
}

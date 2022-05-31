#include "CoconutIceCream.h"


CoconutIceCream::CoconutIceCream(IIcecream* icecream) :IceCreamDecorator(icecream) {
}

double CoconutIceCream::price() {
	return IceCreamDecorator::price() + 0.5;
}

string CoconutIceCream::toString() {
	return IceCreamDecorator::toString() + "+ coconut";
}


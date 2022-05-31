#include "ChocolateCream.h"


ChocolateCream::ChocolateCream(IIcecream* icecream) :IceCreamDecorator(icecream) {
}

double ChocolateCream::price() {
	return IceCreamDecorator::price() + 0.3;
}

string ChocolateCream::toString() {
	return IceCreamDecorator::toString() + " + ChocolateCream";
}


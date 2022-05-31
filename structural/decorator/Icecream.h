#pragma once
#include <iostream>
#include <string>
using namespace std;

#include "IIcecream.h"
class Icecream : public IIcecream {
public:
	double price();
	string toString();
};


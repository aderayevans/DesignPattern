#include "pch.h"
#include "Engineer.h"

#include <iostream>
#include <string>
using namespace std;

Engineer::Engineer(string name, string position): Employee(name, position) {
}

void Engineer::showInfo() {
	std::cout << getName() << ": " <<  getPosition();
}
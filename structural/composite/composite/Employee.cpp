#include "pch.h"
#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee(string name, string position) {
	this->name = name;
	this->position = position;
}

string Employee::getName() {
	return name;
}

void Employee::setName(string name) {
	this->name = name;
}

string Employee::getPosition() {
	return position;
}

void Employee::setPosition(string position) {
	this->position = position;
}

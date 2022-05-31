#include "Driver.h"

int Driver::getAge() {
	return age;
}

void Driver::setAge(int age) {
	this->age = age;
}

Driver::Driver(int age) {
	this->age = age;
}

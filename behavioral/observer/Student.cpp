#include "Student.h"
#include <iostream>
#include <string>

void Student::getMessage(std::string msg) {
	std::cout << name << ":" << msg << std::endl;

}

Student::Student(std::string name) {
	this->name = name;
}
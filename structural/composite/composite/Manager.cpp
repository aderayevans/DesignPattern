#include "pch.h"
#include <iostream>
#include <string>
#include <list>
#include <algorithm>
#include "Manager.h"
#include "Employee.h"

using namespace std;


Manager::Manager(string name, string position) : Employee(name, position) {
}


Manager::~Manager()
{
}

bool contains(std::list<Employee*> & listOfElements, const Employee* & element)
{
	auto it = std::find(listOfElements.begin(), listOfElements.end(), element);
	return it != listOfElements.end();
}

void Manager::addEmployee(Employee *e) {
	l.push_back(e);
}

void Manager::removeEmployee(Employee *e) {
	l.remove(e);
}

void Manager::showInfo() {
	for (Employee *e : l)
		cout << "name:" << e->getName() << ", Pos:" << e->getPosition() << endl;
}


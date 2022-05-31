#pragma once
#include "Employee.h"
#include <iostream>
#include <list>
using namespace std;

class Manager :
	public Employee{
	list<Employee*> l;

public:
	Manager(string name, string position);
	~Manager();
	void addEmployee(Employee* e);
	void removeEmployee(Employee* e);
	void showInfo();

};


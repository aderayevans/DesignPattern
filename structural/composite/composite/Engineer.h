#pragma once
#include "Employee.h"
class Engineer :
	public Employee
{
public:
	Engineer(string name, string position);
	void showInfo();
};


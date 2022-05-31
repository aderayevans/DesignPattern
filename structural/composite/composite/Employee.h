#pragma once
#include <iostream>
using namespace std;
class Employee
{
	string name;
	string position;

public:
	Employee(string name, string position);
	string getName();
	void setName(string name);
	string getPosition();
	void setPosition(string position);
	virtual void showInfo() = 0;
};


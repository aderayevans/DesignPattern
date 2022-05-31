#include <iostream>
#include <string>
#include "Employee.h"
#include "Engineer.h"
#include "Manager.h"
#include "Director.h"
using namespace std;
int main()
{
	Employee *e1 = new Engineer("Tom Le", "Engineer");
	Employee *e2 = new Engineer("Mary", "Engineer");
	Employee *e3 = new Engineer("Paul", "Engineer");
	Employee *e4 = new Engineer("Richard", "Engineer");


	Manager *m = new Manager("John", "Manager");

	m->addEmployee(e1);
	m->addEmployee(e2);
	m->addEmployee(e3);
	m->addEmployee(e4);

	Director *d = new Director("Hopkins", "Director");
	d->addEmployee(e4);
	d->addEmployee(m);

	d->showInfo();
	//m->removeEmployee(e2);

}


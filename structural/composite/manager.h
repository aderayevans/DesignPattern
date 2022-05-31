#include <iostream>
#include "employee.h"
#include <list>
using namespace std;

class Manager: public Employee {
    list<Employee*> empList;
public:
  void addEmployee(Employee *e);
  void removeEmployee(Employee *e);
  void showEmployeeInfo();
};
#include <iostream>
#include <list>
#include <algorithm>
#include "employee.h"
#include "manager.h"
using namespace std;

void Manager::addEmployee(Employee *e) {
  empList.push_back(e);
}

void Manager::removeEmployee(Employee *e) {
   empList.remove(e);
}

void Manager::showEmployeeInfo() {
  for (Employee* n : empList) {
        n->showEmployeeInfo();
    }    
}
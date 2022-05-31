#include <iostream>
#include "employee.h"
#include "engineer.h"
#include "manager.h"

using namespace std;
int main() {
    Manager *m = new Manager();
    Employee *e = new Engineer("John");

    m->addEmployee(new Engineer("Tom"));
    m->addEmployee(new Engineer("Mary"));
    m->addEmployee(e);
    m->showEmployeeInfo();
    cout << endl;
    m->removeEmployee(e);
    m->showEmployeeInfo();
    
}
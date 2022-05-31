#include <iostream>
#include "employee.h"
using namespace std;

Employee::Employee() {

}
Employee::Employee(string name) {
        this->name = name;
}
void Employee::setName(string name) {
        this->name = name;
}
string Employee::getName() {
    return name;
}

void Employee::showEmployeeInfo() {
    cout << "Employee:" + name << endl;
}

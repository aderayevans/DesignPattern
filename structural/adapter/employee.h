#ifndef __EMPLOYEE__
#define __EMPLOYEE__
#include <iostream>
using namespace std;

class Employee {
    string name;
public:
    Employee();
    Employee(string name);
    void setName(string name);
    string getName();
    virtual void showEmployeeInfo();
};
#endif
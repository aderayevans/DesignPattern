#include <iostream>
#include "junior.h"
#include "JuniorToEmployee.h"
using namespace std;

 JuniorToEmployeeAdapter::JuniorToEmployeeAdapter(Junior* junior) {
    this->junior = junior;
 }

 void JuniorToEmployeeAdapter::showEmployeeInfo() {
  junior->showInfo();
 }

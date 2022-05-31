#include <iostream>
#include "employee.h"
#include "engineer.h"
#include "junior.h"
#include "JuniorToEmployee.h"

using namespace std;
int main() {
    Employee *e = new Engineer("John");
    Junior *junior = new Junior();
    junior->setName("Tom");
    Employee *juniorAdapter = new JuniorToEmployeeAdapter(junior);
    Employee * arr[] = {e, juniorAdapter};
    
    for (Employee *e: arr) {
      e->showEmployeeInfo();
    }
    
}
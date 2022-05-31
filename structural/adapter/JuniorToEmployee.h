#include <iostream>
#include "employee.h"
#include "junior.h"
using namespace std;

class JuniorToEmployeeAdapter : public Employee{
private:
  Junior* junior;
public:
   JuniorToEmployeeAdapter(Junior* junior);
   void showEmployeeInfo();
};
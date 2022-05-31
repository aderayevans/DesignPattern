#include <iostream>
#include "junior.h"
using namespace std;

void Junior::setName(string name) {
  this->name = name;
}

void Junior::showInfo() {
  cout << "this is from Junior: " << name << endl;
}
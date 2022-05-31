#pragma once
#include "Observer.h"
#include <iostream>
class Student :	public Observer {
private:
  std::string name;
public:
  Student(std::string name);
	void getMessage(std::string msg);
};


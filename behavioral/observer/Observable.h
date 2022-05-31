#pragma once
#include <iostream>
#include "Observer.h"
class Observable
{
public:
	virtual void attach(Observer* o) = 0;
	virtual void detach(Observer* o) = 0;
	virtual void notify(std::string msg) = 0;
};


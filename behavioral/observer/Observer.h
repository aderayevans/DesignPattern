#pragma once
#include <iostream>
class Observer
{
public:
	virtual void getMessage(std::string msg) = 0;
};


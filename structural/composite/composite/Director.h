#pragma once
#include "Manager.h"
class Director :
	public Manager
{
public:
	Director(string name, string position);
	~Director();
};


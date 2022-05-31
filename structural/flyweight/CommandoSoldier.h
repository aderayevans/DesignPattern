#pragma once
#include "Soldier.h"
class CommandoSoldier :
	public Soldier
{
public:
	CommandoSoldier(int level);
	void move(int x, int y);
};


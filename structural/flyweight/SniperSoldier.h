#pragma once
#include "Soldier.h"
class SniperSoldier :
	public Soldier
{
public:
	SniperSoldier(int level);
	void move(int x, int y);
};


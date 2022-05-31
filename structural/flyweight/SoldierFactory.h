#pragma once
#include <map>
#include "Soldier.h"

class SoldierFactory {
	static std::map<SoldierType, Soldier*> soldiers;
public:
	static Soldier* getSoldier(SoldierType type);
};


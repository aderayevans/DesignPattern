#pragma once

enum SoldierType {
	Commando, Sniper
};

class Soldier {
	int level;
public:
	Soldier(int level);
	virtual void move(int x, int y)=0;
};


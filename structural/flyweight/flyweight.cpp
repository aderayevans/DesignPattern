// flyweight.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "SoldierFactory.h"
#include "Soldier.h"
int main()
{
	Soldier* s1 = SoldierFactory::getSoldier(SoldierType::Commando);
	Soldier* s2 = SoldierFactory::getSoldier(SoldierType::Sniper);
	Soldier* s3 = SoldierFactory::getSoldier(SoldierType::Commando);
	Soldier* s4 = SoldierFactory::getSoldier(SoldierType::Sniper);

	s1->move(34, 56);
	s2->move(45, 657);
	s3->move(23434, 565546);
	s4->move(456, 678);

	std::cout << s2 << " " << s4 << std::endl;
}

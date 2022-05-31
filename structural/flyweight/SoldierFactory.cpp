#include "SoldierFactory.h"
#include "Soldier.h"
#include "CommandoSoldier.h"
#include "SniperSoldier.h"

std::map<SoldierType, Soldier*> SoldierFactory::soldiers;
Soldier* SoldierFactory::getSoldier(SoldierType type) {
	Soldier* soldier = soldiers[type];
	if (soldier == nullptr) {
		switch (type) {
		case Commando:
			soldier = new CommandoSoldier(2);
			break;
		case Sniper:
			soldier = new SniperSoldier(2);
			break;
		}
		soldiers[type] = soldier;
	}
	return soldier;
}
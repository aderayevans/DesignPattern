#include "CommandoSoldier.h"
#include <iostream>

CommandoSoldier::CommandoSoldier(int level) :Soldier(level) {

}
void CommandoSoldier::move(int x, int y) {
	std::cout << "Commando sodlier moved to (" << x << "," << y << ")" << std::endl;
};

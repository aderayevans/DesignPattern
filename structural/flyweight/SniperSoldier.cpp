#include "SniperSoldier.h"
#include <iostream>
SniperSoldier::SniperSoldier(int level) :Soldier(level) {

}
void SniperSoldier::move(int x, int y) {
	std::cout << "Sniper sodlier moved to (" << x << "," << y << std::endl;
};

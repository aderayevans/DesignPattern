#include "ChessGame.h"

void ChessGame::setPlayer(IComputerPlayer* player) {
	this->player = player;

}
void ChessGame::move() {
	player->move();
}

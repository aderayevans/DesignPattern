#pragma once
#include "IComputerPlayer.h"

class ChessGame {
	IComputerPlayer* player;
public:
	void setPlayer(IComputerPlayer* player);
	void move();

};


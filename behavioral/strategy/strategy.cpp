// strategy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ChessGame.h"
#include "MediumPlayer.h"
#include "HardPlayer.h"
#include "EasyPlayer.h"

int main()
{
	ChessGame* game = new ChessGame();
	game->setPlayer(new HardPlayer());
	game->move();

}


#include "Game.h"
#include <iostream>
void StartGame()
{
	std::cout << "The game has started!\n";
}

void Game::StartGame()
{
	std::cout << "The game has started!\n";
}

Car Game::car1(ECarType type, EColor color) 
{
	Car c(type, color);
	return c;
}

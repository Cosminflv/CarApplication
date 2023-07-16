#include "Game.h"
#include <iostream>
void StartGame()
{
	int op = -1;
	std::cout << "The game has started!\n 1-Deploy a car\n 2-Enter car's proprieties\n 3-Delete CAR\n";
	while (op)
	{
		switch (op)
		{
		case 1:
			std::cout << "Enter car's type:";
				//GenerateCarVector();
				break;
		case 2:
			std::cout << "Select propriety:";
			break;
		case 3:
			//DeleteCar();
			break;

		}
	}
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

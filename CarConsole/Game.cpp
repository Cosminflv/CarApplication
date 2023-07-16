#include "Game.h"
#include <iostream>

void Game::StartGame()
{
	int op = -1;
	std::cout << "The game has started!\n 1-Deploy a car\n 2-Enter car's proprieties\n 3-Delete car\n";
	while (op)
	{
		switch (op)
		{
		case 1:
			std::cout << "Enter car's type:";
				//GenerateCarVector();
				break;
		case 2:
			std::cout << "Select proriety:";
			break;
		case 3:
			//DeleteCar();
			break;

		}
	}
}

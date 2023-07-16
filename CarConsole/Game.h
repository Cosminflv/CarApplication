#pragma once
#include "Car.h"
class Game
{
public:
	void StartGame();
protected:
	Car car1(ECarType type, EColor color);
};


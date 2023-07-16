#pragma once
#include "ICar.h"

enum class ECarType
{
	Sedan,
	Wagon,
	Van,
	Hatchback,
	Truck
};

enum class EColor
{
	White,
	Red,
	Black,
	Silver
};

class Car :   public ICar
{
public:
	//Constructors
	Car(ECarType, EColor);

	//Getters

	ECarType GetType();
	EColor GetColor();
	int GetSpeed();

	//Methods

	bool Accelerate(int level);
	bool Break(int level);
	bool CruiseControl(int SetSpeed);
	int SpeedStatus();




protected:
	ECarType m_type;
	EColor m_color;
	int m_speed;

};


#pragma once
#include "Car.h"
class Sedan :   public Car
{
public:
	//Constructors
	Sedan(EColor);

	bool Accelerate(int level);


protected:
	ECarType m_type;
	EColor m_color;

};


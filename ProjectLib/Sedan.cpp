#include "Sedan.h"

Sedan::Sedan(EColor color) : Car(ECarType::Sedan, color)
{

}

bool Sedan::Accelerate(int level)
{
	if (level > 0 && level < 6)
	{
		m_speed = m_speed * level;
		return true;
	}
}

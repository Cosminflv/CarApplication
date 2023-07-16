#include "Car.h"

Car::Car(ECarType newType, EColor newColor) : m_type(newType), m_color(newColor)
{

}

ECarType Car::GetType()
{
    return m_type;
}

EColor Car::GetColor()
{
    return m_color;
}

int Car::GetSpeed()
{
    return m_speed;
}

bool Car::Accelerate(int level)
{
    return true;
}

bool Car::Break(int level)
{
    return true;
}

bool Car::CruiseControl(int SetSpeed)
{
    return true;
}

int Car::SpeedStatus()
{
    return 0;
}

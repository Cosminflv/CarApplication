#pragma once
class ICar
{
public:
	virtual bool Accelerate(int level) = 0;
	virtual bool Break(int level) = 0;
	virtual bool CruiseControl(int SetSpeed) = 0;
	virtual int SpeedStatus() = 0;
};


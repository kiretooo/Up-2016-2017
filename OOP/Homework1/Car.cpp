#include "Car.h"
#include "Tank.h"
#include "Engine.h"
#include "Transmission.h"

Car::Car()
{
	int numSeats = 0;
	int yearMade = 0;
}
Car::Car(int numSeats,int yearMade,Tank t,Engine e,Transmission tr)
{
	this->numSeats = numSeats;
	this->yearMade = yearMade;
	this->t = t;
	this->e = e;
	this->tr = tr;
}
Car::~Car()
{

}
int Car::getNumSeats()const
{
	return this->numSeats;
}
int Car::getYearMade()const
{
	return this->yearMade;
}
Tank Car::getTank()const
{
	return this->t;
}
Engine Car::getEngine()const
{
	return this->e;
}
Transmission Car::getTransmission()const
{
	return this->tr;
}
void Car::setNumSeats(int numSeats)
{
	this->numSeats = numSeats;
}
void Car::setYearMade(int yearMade)
{
	this->yearMade = yearMade;
}
void Car::setTank(Tank t)
{
	this->t = t;
}
void Car::setEngine(Engine e)
{
	this->e = e;
}
void Car::setTransmission(Transmission tr)
{
	this->tr = tr;
}
double Car::calcEmis()
{
	return e.getHp()*e.getVolume()*e.getType();
}
double Car::calcTax()
{
	if (e.getHp() <= 105)
	{
		return e.getHp()*0.80;
	}
	else
	{
		return e.getHp()*0.90;
	}
}
double Car::fuelCons()
{
	return (double)(tr.getGearLevel()*e.getHp()*e.getVolume() / 1000) / 100;
}
double Car::maxAvPath()
{
	return t.getCapacity()*fuelCons();
}
double Car::duty()
{
	int count = 2017-yearMade;
	if (count > 14)
	{
		return count * 1;
	}
	else if (count > 5 && count < 14)
	{
		return count * 1.5;
	}
	else
	{
		return count * 2.8;
	}
}
int Car::calcGear(int speed)
{
	if (speed > 0 && speed <= 20)
	{
		return 1;
	}
	else if(speed > 20 && speed <= 30)
	{
		return 2;
	}
	else if (speed > 30 && speed <= 50)
	{
		return 3;
	}
	else if (speed > 50 && speed <= 80)
	{
		return 4;
	}
	else if (speed > 80 && speed <= 200)
	{
		return 5;
	}
	else
	{
		return 6;
	}
}
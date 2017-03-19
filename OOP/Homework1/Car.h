#pragma once
#include <iostream>
#include <cstring>
#include "Tank.h"
#include "Engine.h"
#include "Transmission.h"
using namespace std;


class Car
{
private:
	int numSeats;
	int yearMade;
	Tank t;
	Engine e;
	Transmission tr;
public:
	Car();
	Car(int , int, Tank, Engine, Transmission);
	~Car();

	int getNumSeats()const;
	int getYearMade()const;
	Tank getTank()const;
	Engine getEngine()const;
	Transmission getTransmission()const;

	void setNumSeats(int);
	void setYearMade(int);
	void setTank(Tank);
	void setEngine(Engine);
	void setTransmission(Transmission);

	double calcEmis();
	double calcTax();
	double fuelCons();
	double maxAvPath();
	double duty();
	int calcGear(int speed);
};
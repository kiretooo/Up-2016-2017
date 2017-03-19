// HOMEWORK1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Tank.h"
#include "Engine.h"
#include "Transmission.h"
#include "Car.h"

int main()
{
	Tank tank(100);
	Engine engine(101, 2, diesel);
	Transmission transmission(Avtomatichna, 6);
	Car vw(5,2002,tank,engine,transmission);
	cout << "Calculate Emissions:";
	cout << vw.calcEmis() << endl;
	cout << "Calculate Tax:";
	cout << vw.calcTax() << endl;
	cout << "Fuel Consumption:";
	cout << vw.fuelCons() << endl;
	cout << "Max Available Path:";
	cout << vw.maxAvPath() << endl;
	cout << "Duty:";
	cout << vw.duty() << endl;
	cout << "Calculate Gear:";
	cout << vw.calcGear(187) << endl;


    return 0;
}


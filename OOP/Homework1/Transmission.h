#pragma once
#include <iostream>
#include <cstring>
#include "TransmissionType.h"
using namespace std;

class Transmission
{
private:
	TransmissionType type;
	int gearLevel;
public:
	Transmission();
	Transmission(TransmissionType type, int gearLevel);
	~Transmission();

	TransmissionType getType()const;
	int getGearLevel()const;

	void setType(TransmissionType);
	void setGearLevel(int);
};
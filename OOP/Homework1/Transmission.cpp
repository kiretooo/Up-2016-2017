#include "Transmission.h"

Transmission::Transmission()
{
	type = Avtomatichna;
	gearLevel = 0;
}
Transmission::Transmission(TransmissionType type,int gearLevel)
{
	this->type = type;
	this->gearLevel = gearLevel;
}
Transmission::~Transmission()
{

}
TransmissionType Transmission::getType()const
{
	return this->type;
}
int Transmission::getGearLevel()const
{
	return this->gearLevel;
}
void Transmission::setType(TransmissionType type)
{
	this->type = type;
}
void Transmission::setGearLevel(int gearLevel)
{
	this->gearLevel = gearLevel;
}
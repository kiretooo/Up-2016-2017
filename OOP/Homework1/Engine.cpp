#include "Engine.h"

Engine::Engine()
{
	hp = 0;
	volume = 0;
	type = diesel;
}
Engine::Engine(int hp, int volume, EngineType type)
{
	this->hp = hp;
	this->volume = volume;
	this->type = type;
}
Engine::~Engine()
{

}
int Engine::getHp()const
{
	return this->hp;
}
int Engine::getVolume()const
{
	return this->volume;
}
EngineType Engine::getType()const
{
	return this->type;
}
void Engine::setHp(int hp)
{
	this->hp = hp;
}
void Engine::setVolume(int volume)
{
	this->volume = volume;
}
void Engine::setType(EngineType type)
{
	this->type = type;
}
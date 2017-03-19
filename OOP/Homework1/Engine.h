#pragma once
#include <iostream>
#include <cstring>
#include "EngineType.h"
using namespace std;

class Engine
{
private:
	int hp;
	int volume;
	EngineType type;
public:
	Engine();
	Engine(int hp, int volume, EngineType type);
	~Engine();

	int getHp()const;
	int getVolume()const;
	EngineType getType()const;

	void setHp(int);
	void setVolume(int);
	void setType(EngineType);
};

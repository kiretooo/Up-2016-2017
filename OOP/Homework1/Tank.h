#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Tank
{
private:
	int capacity;
public:
	Tank();
	Tank(int capacity);
	~Tank();
	
	int getCapacity()const;
	
	void setCapacity(int);
	
};

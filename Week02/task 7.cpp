// task 7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	int x, y, r = 5;
	cout << "x=";
	cin >> x;
	cout << "y=";
	cin >> y;
	if ((pow((x - 0), 2) + pow((y - 0), 2)) < r*r)
	{
		cout << "The dot lays in the circle.";
	}
	else
	{
		cout << "The dot is out of the circle.";
	}

	return 0;
}


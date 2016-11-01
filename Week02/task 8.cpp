// task 7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int x, y;
	cin >> x >> y;
	if (x > 0 && y > 0)
	{
		cout << "First quadrant";
	}
	else if (x < 0 && y > 0)
	{
		cout << "Second quadrant";
	}
	else if (x < 0 && y < 0)
	{
		cout << "Third quadrant";
	}
	else if (x > 0 && y < 0)
	{
		cout << "Fourth quadrant ";
	}
	else if (x == 0 && y != 0)
	{
		cout << "ordinate";
	}
	else if (x != 0 && y == 0)
	{
		cout << "abcise";
	}
	else
	{
		cout << "zero";
	}
	cout << endl;

	return 0;
}


// Task1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int x, y, z;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	z = y % x;
	if (z == 0)
	{
		cout << x << " e delitel na " << y << endl;
	}
	else
	{
		cout << "Error" << endl;
	}

    return 0;
}


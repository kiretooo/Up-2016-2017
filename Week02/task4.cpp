// task3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int x;
	cin >> x;
	int First = x / 100;
	int Second = (x / 10) % 10;
	int Third = x % 10;
	if ((First < Second) && (Second < Third))
	{
		cout << "Yes!";
	}
	else
	{
		cout << "Error";
	}
	cout << endl;

	return 0;
}


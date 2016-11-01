// task5.cpp : Defines the entry point for the console application.
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
	if ((x > 999) || (x < 100))
	{
		cout << "Error";
	}
	else if ((First != Second) && (Second != Third) && (First != Third))
	{
		cout << "No repeating numbers";
	}
	else
	{
		cout << "repeating numbers";
	}
	cout << endl;

	return 0;
}


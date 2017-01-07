// task4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	double x;
	int operation;
	cout << "Press 1" << endl
		 << "Press 2" << endl
		 << "Press 3" << endl
		 << "Press 4" << endl;
	cin >> operation;
	cout << "x=";
	cin >> x;
	switch (operation) 
	{
		case 1: cout << "y=" << x - 5;
			break;
		case 2: cout << "y=" << sin(x);;
			break;
		case 3: cout << "y=" << cos(x);
			break;
		case 4: cout << "y=" << exp(x);
			break;
		default:     cout << "Sorry! The operation is not valid.";
			break;
	}
	cout << endl;
	
    return 0;
}


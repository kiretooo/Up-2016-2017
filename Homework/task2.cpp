// task2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	d = a*b*c;
	if (d > 0)
	{
		cout << "+";
	}
	else if (d == 0)
	{
		cout << "0";
	}
	else
		cout << "-";
	cout << endl;

    return 0;
}


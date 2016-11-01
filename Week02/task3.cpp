// task3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int a, b, c, D;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	D = b * b - 4 * a * c;
	if (D > 0)
	{
		cout << "2korena";
	}
	else if (D == 0)
	{
		cout << "1koren";
	}
	else
	{
		cout << "Error";
	}
	cout << endl;

	return 0;
}


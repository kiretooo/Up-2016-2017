// task4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	int variable;
	x > y ? variable = x : variable = y;
	if (variable < 0)
	{
		cout << variable * (-1);
	}
	else
		cout << variable;
	cout << endl;

    return 0;
}


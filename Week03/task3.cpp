// task3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int x;
	double a, b, c, d, h, r, P, S, pi = 3.14;
	cout << "Choose a figure" << endl
		<< "1 for triangle" << endl
		<< "2 for square" << endl
		<< "3 for circle" << endl
		<< "4 for rectangle" << endl
		<< "5 for trapeze" << endl;
	cin >> x;
	switch (x)
	{
	case 1: cin >> a >> b >> c >> h;
			S = (a * h) / 2;
			P = a + b + c;
			cout << "P=" << P << endl
				 << "S=" << S <<endl;
			break;
	case 2: cin >> a;
			S = a*a;
			P = 4 * a;
			cout << "P=" << P << endl
				 << "S=" << S << endl;
			break;
	case 3: cin >> r;
			S = r*r * pi;
			P = 2 * r * pi;
			cout << "P=" << P << endl
				 << "S=" << S << endl;
			break;
	case 4: cin >> a, b;
			S = a*b;
			P = 2 * (a + b);
			cout << "P=" << P << endl
				 << "S=" << S << endl;
			break;
	case 5: cin >> a, b, c, d, h;
			S = (a + b)*h / 2;
			P = a + b + c +d;
			cout << "P=" << P << endl
				 << "S=" << S << endl;
			break;
	}

	

    return 0;
}


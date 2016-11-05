// task3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	int sum = x + y;
	sum % 2 == 0 ? cout << sum * 2 : cout << sum / 2;
	cout << endl;

	return 0;
}


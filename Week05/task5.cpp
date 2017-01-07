// task5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int x;
	int sum = 0;
	do {
		cout << 'x=';
		cin >> x;
		if (x <= 30)
		{
			sum += x;
		}
	} while (sum < 100);
}


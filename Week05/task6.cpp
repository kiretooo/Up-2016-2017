// task6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int x;
	do
	{
		cout << "x=";
		cin >> x;

	} while (x<0 || x>10000);
	int sum = 0;
	for (int i = 0; i < x; i++)
	{
		sum += i*i;
		
	}
	cout << sum << endl;
	for (int i = 0; i < x; i++)
	{
		
		if (i % 2 == 0)
		{
			cout << i << endl;
		}
	}
}


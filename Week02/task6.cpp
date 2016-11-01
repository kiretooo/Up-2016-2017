// task5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int x;
	cin >> x;
	int First = x / 1000;
	int Second = x % 1000;
	if (First < Second)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	cout << endl;

	return 0;
}


// Task1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int x;
	cout << "x=";
	cin >> x;
	bool result = ((x % 2 == 0) && (x % 3 == 0) && (x % 5 != 0));
	cout << result << endl;

	return 0;
}


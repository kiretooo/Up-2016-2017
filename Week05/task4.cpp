// task1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

main()
{
	char x;
	cout << "x=";
	cin >> x;
	do
	{
		cout << "x=";
		cin >> x;
	} while (x != '!');

    return 0;
}


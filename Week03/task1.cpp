// task1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cout << "x=";
	cin >> x;
	cout << "y=";
	cin >> y;
	char symbol;
	cin >> symbol;
	switch (symbol)
	{
	case '+': cout << x + y;
		break;
	case '-': cout << x - y;
		break;
	case '*': cout << x * y;
		break;
	case '/': cout << x / y;
		break;
	case '%': cout << x % y;
		break;
	default: cout << "Invalid operation";
		break;
	}
	cout << endl;

    return 0;
}


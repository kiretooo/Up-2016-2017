// task2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int num = 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9 * 10;
	int x;
	cin >> x;
	x % num == 0 ? cout << "True" : cout << "False";
	cout << endl;
    return 0;
}


// task1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void swap(int* num1, int* num2) 
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
	cout << *num1 << " " << *num2;
}
int main() 
{
	cout << "Write 2 numbers:" << endl;
	int num1, num2;
	cin >> num1 >> num2;
	swap(&num1, &num2);
	cout << endl;

	return 0;
}


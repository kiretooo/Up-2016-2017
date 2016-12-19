// task6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int checkLastNum(float *arr, int size) 
{
	int lastNum = -1;
	if (arr[0] == arr[1]) 
	{
		lastNum = 0;
	}
	if (arr[size - 1] == arr[size - 2])
	{
		return lastNum = size - 1;
	}

	for (int i = 1; i < size - 1; i++) 
	{
		if (arr[i] == (arr[i - 1] + arr[i + 1]) / 2) 
		{
			lastNum = i;
		}
	}
	return lastNum;
}
int main() 
{
	float arr[8] = { 2.3,5.7,8.2,6.7,2.8,3.9,8.7,8.7 }; 		
	cout << checkLastNum(arr, 8);
	cout << endl;

	return 0;
}


// task7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const int SIZE = 100;
void inItArr(int* arr, int *size)
{
	for (int i = 0; i < *size; i++)
	{
		cout << "arr[" << i << "]=";
		cin >> *(arr + i);
	}
}
bool repeat(int* arr, int *size, int *n)
{
	int count = 0;
	for (int i = 0; i < *size; i++)
	{
		if (*(arr + i) == *n)
		{
			count++;
			continue;
		}
		else
			cout << *(arr + i) << " ";
	}
	cout << endl;
	if (count == 0)
		return false;
	else
		return true;
}
int main()
{
	int arr[SIZE];
	int size;
	cout << "Insert the size of the array:";
	cin >> size;
	inItArr(arr, &size);
	cout << "Insert a number: ";
	int n;
	cin >> n;
	cout << "The new array:" << endl;
	bool result = repeat(arr, &size, &n);
	cout << result << endl;

	return 0;
}

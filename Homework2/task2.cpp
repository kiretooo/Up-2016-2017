// task2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const int SIZE = 5;
void reverse(int *arr, int size) 
{
	for (int i = 0; i <= size / 2; i++) 
	{
		int temp = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = temp;
	}
	for (int i = 0; i < size; i++) 
	{
		cout << arr[i] << " ";
	}
}

int main() 
{
	cout << "Write array with " << SIZE << " nubmers:" << endl;
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	reverse(arr, SIZE);
	cout << endl;

	return 0;
}


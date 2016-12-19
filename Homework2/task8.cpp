// task7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int* removeNum(int *arr, int size, int n)
{
	int temp;
	for (int i = 0; i < size; i++) 
	{
		for (int j = 0; j < size - 1; j++) 
		{
			temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
		}
	}
	int left = 0, right = size - 1, middleNum;
	while (left < right) 
	{
		middleNum = (left + right) / 2;
		if (arr[middleNum] > n) 
		{
			right = middleNum - 1;
		}
		else if (arr[middleNum] < n)
		{
			left = middleNum + 1;
		}
		else if (arr[middleNum] == n) 
		{
			return &arr[middleNum];
		}
	}
	return NULL;
}
int main() 
{
	int arr[8] = { 5, 4, 10, 5, 4, 5, 8, 12 };
	int n;
	cout << "n=";
	cin >> n;
	cout << removeNum(arr, 10, n);
	cout << endl;

	return 0;
}
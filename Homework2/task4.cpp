// task4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const int COLS = 5;
void transSwap(int(*arr1)[COLS], int size1, int(*arr2)[COLS], int size2) 
{
	for (int i = 0; i < size1; i++) 
	{
		for (int j = 0; j < size1; j++) 
		{
			arr2[j][i] = arr1[i][j];
		}
	}
	for (int j = 0; j < size2; j++) 
	{
		for (int i = 0; i < size2; i++) 
		{
			cout << arr2[j][i] << " \t";
		}
		cout << endl;
	}
}
int main() {
	int arr1[5][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };
	int arr2[5][5] = { { 0, 0, 0, 0, 0 },{ 0, 0, 0, 0, 0 },{ 0, 0, 0, 0, 0 },{ 0, 0, 0, 0, 0 },{ 0, 0, 0, 0, 0 } };
	transSwap(arr1, 5, arr2, 5);

	return 0;
}


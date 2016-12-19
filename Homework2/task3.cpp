// task3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void combine(int *arr1, int size1, int *arr2, int size2, int *arr3, int size3) 
{
	for (int i = 0; i < size1; i++) 
	{
		arr3[i] = arr1[i];
	}
	int pos2 = 0, used3 = size1;
	int begin = 0, pos1;
	if (arr2[pos2] < arr3[begin]) 
	{
		for (int l = used3; l > begin; l--) 
		{
			arr3[l] = arr3[l - 1];
		}
		used3++;
		arr3[begin] = arr2[pos2];
		pos2++;
		begin++;
	}
	while (begin < size3 - 1) 
	{
		if (arr3[begin + 1] == 0) 
		{
			for (int l = used3; l < size3; l++) 
			{
				arr3[l] = arr2[pos2];
				pos2++;
			}
		}
		else 
		{
			if (arr2[pos2] >= arr3[begin] && arr2[pos2] <= arr3[begin + 1]) 
			{
				for (int l = used3; l > begin + 1; l--) 
				{
					arr3[l] = arr3[l - 1];
				}
				used3++;
				arr3[begin + 1] = arr2[pos2];
				pos2++;
			}
			begin++;
		}
	}

	for (int i = 0; i < size3; i++) 
	{
		cout << arr3[i] << " ";
	}
}
int main() 
{
	int arr1[4] = { 2, 4, 8, 9 };
	int arr2[8] = { 2, 3, 4, 7, 9, 9, 8, 7 };
	int arr3[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	combine(arr1, 4, arr2, 8, arr3, 12);
	cout << endl;

	return 0;
}


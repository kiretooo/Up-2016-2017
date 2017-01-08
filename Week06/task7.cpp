// task7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n, k;
	do {
		cout << "n = ";
		cin >> n;
		cout << "k = ";
		cin >> k;
	} while (n < 0 || k < 0 || (k >= n));
	long nFact = 1, kFact = 1, nkFact = 1;
	for (int i = n; i > 1; i--)
	{
		nFact *= i;
	}
	for (int i = k; i > 1; i--)
	{
		kFact *= i;
	}
	for (int i = (n - k); i > 1; i--)
	{
		nkFact *= i;
	}
	long result = (nFact / (kFact * nkFact));
	cout << "The binomial coefficient is equal to: " << result << endl;

	return 0;
}



// task1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
int a, b, c, d, e;
cout << "a=";
cin >> a;
cout << "b=";
cin >> b;
cout << "c=";
cin >> c;
cout << "d=";
cin >> d;
cout << "e=";
cin >> e;
if (a < b || a < c || a < d || a < e)
{
	if (b < c || b < d || b < e)
	{
		if (c < d || c < e)
		{
			if (d < e)
			{
				cout << e;
			}
			else
				cout << d;
		}
		else
			cout << c;
	}
	else
		cout << b;
}
else
cout << a;
cout << endl;

return 0;
}


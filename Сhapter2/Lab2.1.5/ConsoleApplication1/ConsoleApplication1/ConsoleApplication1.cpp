// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int a, b, c, d, e,year;
	cout << "Enter year number" << endl;
	cin >> year;
	a = year % 19;
	b = year % 4;
	c = year % 7;
	d = ((a * 19) + 24) % 30;
	e = (2*b + 4*c + 6*d + 5) % 7;
	if ((d + e) < 10)
	{
		cout << "East: " << (d + e + 22) << " March" << endl;
	}
	else {
		cout << "East: " << (d + e - 9) << " April" << endl;
	}
	system("pause");
    return 0;
}


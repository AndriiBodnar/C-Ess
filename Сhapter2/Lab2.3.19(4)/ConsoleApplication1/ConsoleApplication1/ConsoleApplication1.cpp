// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double i=0, n, power;
	cout << "Enter power n for 1/2^n" << endl;
	cin >> n;
	while (i <= n)
	{
		power = 1 / (pow(2, n));
		i++;
	}
	cout << "2 in power: -" << n << " = " << power << endl;
	system("pause");
    return 0;
}


// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;

int main()
{
	double i=0,n,power;
	cout << "Enter power:"<< endl;
	cin >> n;
	while (i <= n)
	{
		power = pow(2, i);
		i++;
	}
	cout <<fixed<<setprecision(0)<< power << endl;
	system("pause");
    return 0;
}


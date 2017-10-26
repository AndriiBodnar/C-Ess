// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float i=2.3, a = 2.123456, b = a, c = a;
	cout << i << endl ;
	cout << fixed << setprecision(2) << i << endl;
	cout << setprecision(6) <<a << endl;
	cout << setprecision(2) << b << endl;
	cout << (int)a;
	system("pause");
	return 0;
}


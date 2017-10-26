// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	cout << "Enter first oktet";
	cin >> a;
	cout << "Enter secound octet";
	cin >> b;
	cout << "Enter third octet";
	cin >> c;
	cout << "Enter fourth octet";
	cin >> d;
	if ((a >= 1 && a <= 255) && (b >= 1 && b <= 255) && (c >= 1 && c <= 255) && (d >= 1 && d <= 255))
	{
		cout << a << "." << b << "." << c << "." << d << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	system("pause");
	return 0;
}


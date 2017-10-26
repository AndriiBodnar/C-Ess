// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int i, k;

	cout << "Enter first number:";
	cin >> i;
	cout << "Enter secound number";
	cin >> k;
	if (1 / (float)i == 1 /(float) k)
	{
		cout << "equal";
	}
	else
	{
		cout << "non equal";
	}
	system("pause");
    return 0;
}


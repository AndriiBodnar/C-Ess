// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int n;
	double result = 1;

	do {
		cout << "Enter n: ";
		cin >> n;
	} while (n < 0);

	if (n == 0) {
		result = 0;
	}
	else {
		for (int i = 1; i <= n; i++)
		{
			result *= i;
		}
	}
	cout << "Result: "<< cout.precision(0) << fixed << result << endl;
	system("pause");
    return 0;
}

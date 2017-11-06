// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//


#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	unsigned long digit = 1, x1 = 0, x2 = digit;

	do {
		cout << "Enter number of digit: ";
		cin >> n;
	} while (n < 1);

	for (int i = 0; i < n - 1; i++) {
		digit = x1 + x2;
		x1 = x2;
		x2 = digit;
		
	}

	cout << digit << endl;
	system("pause");
	return 0;
}
// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	unsigned long n, mask = 1;
	short bitsCount = 0;

	do {
		cout << "Enter value: ";
		cin >> n;
	} while (n < 0);

	for (short i = 0; i < 30; i++)
	{
		if (mask & n) bitsCount += 1;
		mask *= 2;
	}

	cout << "Result: " << bitsCount << endl;

	return 0;
}
// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main(void) {
	short n;

	do {
		cout << "Enter the size (1 < n < 28): ";
		cin >> n;
	} while (n < 1 || n > 28);

	cout << '+';

	for (int i = 0; i < n; i++)
		cout << '-';

	cout << '+' << endl;

	for (int i = 0; i < n; i++) {

		cout << '|';

		for (int j = 0; j < n; j++)
			cout << ' ';

		cout << '|' << endl;
	}

	cout << '+';

	for (int i = 0; i < n; i++)
		cout << '-';

	cout << '+' << endl;
	system("pause");
	return 0;
}
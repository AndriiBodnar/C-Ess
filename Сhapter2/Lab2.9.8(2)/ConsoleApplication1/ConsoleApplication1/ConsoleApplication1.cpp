// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int summ;
	// for saving data
	int plussars[5][2];

	plussars[0][0] = 50;
	plussars[1][0] = 20;
	plussars[2][0] = 10;
	plussars[3][0] = 5;
	plussars[4][0] = 1;

	do {
		cout << "Enter the summ: ";
		cin >> summ;
	} while (summ <= 0);

	for (int i = 0; i < 5; i++) {
		if (summ >= plussars[i][0]) {
			plussars[i][1] = summ / plussars[i][0];
			summ -= plussars[i][1] * plussars[i][0];
		}

		if (summ == 0) break;
	}

	for (int i = 0; i < 5; i++)
		for (int j = 0; j < plussars[i][1]; j++)
			cout << plussars[i][0] << ' ';
	cout << endl;
	system("pause");

	return 0;
}
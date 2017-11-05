// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main(void) 
{
	int i;
	double pi4 = 0.;
	long n;
	do
	{
		cout << "Number of iterations (n > 0): ";
		cin >> n;
	} 
	while (!n);

	for (unsigned long i = 0; i < n; i++) {

		pi4 += pow(-1, i) / (2 * i + 1);
	}
		cout.precision(20);
		cout << "Pi = " << (pi4 * 4.) << endl;
		system("pause");
	
	return 0;
}
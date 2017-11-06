// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//


#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	short h;

	do {
		cout << "Enter height: ";
		cin >> h;
	} while (h < 2 || h > 9);

	for (short i = 0; i < h; i++) 
	{
		

	}
	system("pause");
	return 0;
}
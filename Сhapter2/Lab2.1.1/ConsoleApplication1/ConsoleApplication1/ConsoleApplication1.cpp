// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int main(void) {

	int year;
	string message;

	cout << "Enter a year: ";
	cin >> year;

	if (year % 4 != 0) {
		cout << "Common year";
	}
	else if (year % 100 != 0) {
		cout << "Leap year";
	}
	else if (year % 400 != 0) {
		cout << "Common year";
	}
	else {
		cout << "Leap year";
	}
	system("pause");
	return 0;
}

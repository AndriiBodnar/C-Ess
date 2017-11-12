// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main(void) {
	int vector[] = { 1, 2,3,4,5,6,7,8,9,10,11,10,9,8,7,6,5,4,3,2,1};
	bool ispalindrome = true;
	int n = sizeof(vector) / sizeof(vector[0]);

	for (int i = 1; i < n ; i++)
	{
		if (vector[-1 + i] == vector[n - i])
		{
			ispalindrome = true;
		}
		else
			ispalindrome = false;
	}


	if (ispalindrome)
		cout << "It's a palindrome";
	else
		cout << "It isn't a palindrome";
	cout << endl;
	system("pause");
	return 0;}
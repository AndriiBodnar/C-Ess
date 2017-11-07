// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
bool ispalindrom(unsigned short int val)
{ 
	int left=0, right = 31;
	for (int i = 0;i <= 31;i++)
	{
		{
			if ((val << left & 1) != (val << right & 1))
			return false;
	}
			left++, right--;
		
		
		
	}
	return true;

}
int main(void) {
	unsigned short int val;
	

	cout << "value = ";
	cin >> val;
	
	if (ispalindrom(val))
		cout << val << " is a bitwise palindrome" << endl;
	else
		cout << val << " is not a bitwise palindrome" << endl;
	system("pause");
	return 0;
}
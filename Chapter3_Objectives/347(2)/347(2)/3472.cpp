// 3472.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
bool isLeap(int year)
{
	int result;
	result = year % 4;
		if (result = 0)
		{
			return true;
		}
		else { return false; }

}
int monthLength(int year, int month) 
{
	int monthlenghleap[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, };
	int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, };
	if (isLeap) 
	{

		
	}

}
int main(void) {
	for (int yr = 2000; yr < 2002; yr++) {
		for (int mo = 1; mo <= 12; mo++)
			cout << monthLength(yr, mo) << " ";
		cout << endl;
	}
	system("pause");
	return 0;
}
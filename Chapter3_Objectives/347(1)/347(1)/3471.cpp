// 3471.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
bool isLeap(int year)
{
	int result;
	result = year % 4;
	if (result > 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main(void) {
	for (int yr = 1995; yr < 2017; yr++)
		cout << yr << " -> " << isLeap(yr) << endl;
	system("pause");
	return 0;
}
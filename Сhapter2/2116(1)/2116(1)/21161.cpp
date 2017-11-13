// 21161.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int value;
	struct TIME
	{
		int hours;
		int minutes;
	};
	TIME time = { 11,58};
	cout << "Enter minutes value: "<< endl;
	cin >> value;
	value += time.minutes;
	time.hours +=(value/ 60);
	time.minutes =(value%60);
	if (time.hours >= 24)
	{
		time.hours %= 24;
	}
	cout << time.hours<<":" << time.minutes<< endl;
	system("pause");
    return 0;
}


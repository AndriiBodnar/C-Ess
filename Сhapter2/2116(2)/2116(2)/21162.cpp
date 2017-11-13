// 21162.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int minutes, hours;
	struct StartTime
	{
		int hours;
		int minutes;
	}starttime{};
	struct FinishTime
	{
		int hours;
		int minutes;
	}finishtime{};
	cout << "Enter start time hours " << endl;
	cin >> starttime.hours;
	cout << "Enter minutes " << endl;
	cin >> starttime.minutes;
	cout << "Enter finish time hours " << endl;
	cin >> finishtime.hours;
	cout << "Enter minutes " << endl;
	cin >> finishtime.minutes;
	starttime.minutes += (starttime.hours * 60);
	finishtime.minutes += (finishtime.hours * 60);
	minutes = finishtime.minutes - starttime.minutes;
	if (minutes > 59)
	{
		hours = minutes / 60;
		minutes %= 60;
	}
	if (hours > 24)
	{
		hours %= 24;
	}
		cout << "Difference between start and finish time: " << hours << ":" << minutes << endl;
	system("pause");
	return 0;
}


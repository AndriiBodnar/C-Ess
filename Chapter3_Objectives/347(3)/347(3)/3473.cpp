// 3473.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
struct Date {
	int year;
	int month;
	int day;
};
bool isLeap(int year) 
{
	if (year % 4 != 0) {
		return false;
	}
	else if (year % 100 != 0) {
		return true;
	}
	else if (year % 400 != 0) {
		return false;
	}
	else {
		return true;
	}
}
int monthLength(int year, int month) {
	int monthlengh[] = { 29, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, };
	if (isLeap(year) && month == 2)
		return monthlengh[0];
	else
	{
		return monthlengh[month];
	}
}
int dayOfYear(Date date) {
	int sumofday=0;
	for (int i = 1; i < date.month;i++)
	{
		sumofday+=monthLength(date.year,i);
		
	}
	sumofday += date.day;
	return sumofday;
}
int main(void) {
	Date d;
	cout << "Enter year month day: ";
	cin >> d.year >> d.month >> d.day;
	cout << dayOfYear(d) << endl;
	system("pause");
	return 0;
}

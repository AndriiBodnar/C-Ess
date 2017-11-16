// 3475.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;

struct Date {
	int year;
	int month;
	int day;
};

Date today(void) {

	time_t timeInSeconds = time(NULL);
	// localtime is marked unsafe by the MS-Compiler because it returns 
	// a pointer to a statically allocated struct tm. This is obviously a bad idea.
	// Project -> Properties -> C/C++ -> Preprocessor -> Preprocessor Definitions ->
	// Edit -> Add at the end _CRT_SECURE_NO_WARNINGS
	tm convertedTime = *localtime(&timeInSeconds);
	Date date = { convertedTime.tm_year + 1900, convertedTime.tm_mon + 1, convertedTime.tm_mday };

	return date;
}

int main(void) {

	Date todaysDate = today();
	cout << todaysDate.year << "-" << todaysDate.month << "-" << todaysDate.day << endl;

	return 0;
}
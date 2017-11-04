
#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	int year_number, month_number, day_number;
	cout << "Enter year number"<<endl;
	cin >> year_number;
	cout << "Enter month_number"<<endl;
	cin >> month_number;
	cout << "Enter day number"<<endl;
	cin >> day_number;
	month_number -= 2;
	if (month_number < 0)
	{
		month_number += 12;
		year_number -= 1;
	}
	month_number = (month_number * 83) / 32;
	month_number += day_number;
	month_number += year_number;
	month_number += (year_number / 4);
	month_number -= (year_number/100);
	month_number += (year_number / 400);
	month_number %= 7;
	cout << month_number << endl;
	system("pause");
    return 0;
}


// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int n = 1, a, b;
	double result , c, d;
	while (n != 0)	{		cout << "MENU: " << endl << "0 - exit " << endl << "1 - addition" << endl << "2 - subtraction" << endl << "3 - multiplication" << endl << "4 - division" << endl << "Your choice ?" << endl;		cin >> n;
		switch (n)
		{
		case 1:
		{
			cout << "Enter first value: " << endl;
			cin >> a;
			cout << "Enter secound value: " << endl;
			cin >> b;
			cout << a << "+" << b << "=" << a + b << endl;
			break;
		}
		case 2:
		{
			cout << "Enter first value: " << endl;
			cin >> a;
			cout << "Enter secound value: " << endl;
			cin >> b;
			cout << a << "-" << b << "=" << a - b << endl;
			break;
		}
		case 3:
		{
			cout << "Enter first value: " << endl;
			cin >> a;
			cout << "Enter secound value: " << endl;
			cin >> b;
			cout << a << "*" << b << "=" << a * b << endl;
			break;
		}
		case 4: 
		{
			
			cout << "Enter first value: " << endl;
			cin >> c;
			cout << "Enter secound value: " << endl;;
			cin >> d;
			if (d != 0)
			{
				result = c / d;
				cout << c << "/" << d << " = " << result << endl;
			}
			else
			{
				cout << "You can't divide on 0! Try again. " << endl;
				
			}
			break;
		}
		default: cout << "You enter false value,try again." << endl;
			break;
		}
	}
	system("pause");
	return 0;
}


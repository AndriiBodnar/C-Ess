// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>


using namespace std;
int main(void)
{
	float grossprice, taxrate, netprice, taxvalue;
	cout << "Enter a gross price: ";
	cin >> grossprice;
	cout << "Enter a tax rate: ";
	cin >> taxrate;
	if (taxrate > 0 && taxrate < 100)
	{
		netprice = grossprice/(1+ taxrate / 100);

		taxvalue = grossprice - netprice;

	}
	cout << "Net price: " << netprice << endl;
	cout << "Tax value: " << taxvalue << endl;
	system("pause");
	return 0;
}


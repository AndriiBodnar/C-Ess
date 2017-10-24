#include "stdafx.h"
#include <iostream>
using namespace std;
int main(void)
{
	float pi = 3.14159265359;
	float x, y;
	float squredX, squredPI, squredXS;
	cout << "Enter value for x: ";
	cin >> x;
	squredX = x*x;
	squredPI = pi*pi;
	squredXS = (squredX - .5)*(squredX - .5);
	y = squredX / (squredPI * (squredX + .5))  * (1 + (squredX / (squredPI * squredXS)));
	cout << "y = " << y;
	cout << endl;
	system("pause");
	return 0;
}


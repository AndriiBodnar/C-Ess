// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;
int main(void)
{
	int sys;
	float m, ft, in;
	double value;
	cout << "Введіть ссистему вимірюваня, де 0 - метрична, 1 - імперська " << endl;
	cin >> sys;
	if (sys = 1)
	{
		cout << "Введіть значення у футах " << endl;
		cin >> ft;
		cout << "Введіть значення в дюймах" << endl;
		cin >> in;
		m = (ft*0.3048) + (in*0.0254);
		cout << m << endl;
	}
	else {
		cout << "Введіть значення в метрах ";
		cin >> m;
		in = m / 0.0254; 
		ft = (int)in / 12; 
		in = in - ft * 12; 

		cout << ft << "'" << fixed << setprecision(5) << in << "''" << endl;
	}
	system("pause");
	return 0;
}

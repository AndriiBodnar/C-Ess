// 32121.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int main(void)
{
	int *ptr1, min=0;
	int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13,15,16 };
	int n = sizeof(vector) / sizeof(vector[0]);
	ptr1 = vector;
	for (int i = 0;i < n;i++) {
		if (min > *ptr1)
		{
			min=*ptr1;
		}
		*ptr1++;
	}

	cout << min << endl;
	system("pause");
	return 0;
}


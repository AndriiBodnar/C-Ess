#include "stdafx.h"
#include <iostream>
using namespace std;
int main(void)
{
	int vector1[7] = { 4, 7, 2, 8, 1, 3, 0 };
	int vector2[7];
	for (int j = 0;j < 7;j++)
	{
		vector2[0] = vector1[6];
		vector2[j+1] = vector1[j];
		
	}
	

	for (int i = 0; i < 7; i++)
		
		cout << vector2[i] << ' ';
	cout << endl;
	system("pause");
	return 0;
}



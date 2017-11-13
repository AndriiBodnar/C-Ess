// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main(void)
{
	double matrix[][4] = {
	{ 1, 2, 3, 4 },
	{ 2, 2, 3, 1 },
	{ 3, 3, 3, 2 },
	{ 4, 1, 2, 2 } };
	int side = sizeof(matrix[0]) / sizeof(matrix[0][0]);
	bool issymmetric = true;

	for (int i = 0; i < side && issymmetric; i++)
	{
		for (int j = 0; j < side && issymmetric; j++)
		{
			if (matrix[i][j] == matrix[j][i])
			{
				issymmetric = true;
			}
			else
			{
				issymmetric = false;
			}
		}
	}

	if (issymmetric)
		cout << "The matrix is symmetric" << endl;
	else
		cout << "The matrix is not symmetric" << endl;
	system("pause");
	return 0;
}

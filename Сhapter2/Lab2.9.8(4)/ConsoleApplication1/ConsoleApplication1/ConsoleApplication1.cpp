// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
	double vector[] = { 1., 2., 3., 4., 5. };
	int n = sizeof(vector) / sizeof(vector[0]);

	double ArithmeticMean = 0;
	double HarmonicMean = 0;
	double GeometricMean = 1;
	double RootMeanSquare = 0;

	for (int i = 0; i < n; i++) {
		ArithmeticMean += vector[i] / n;
	}

	for (int i = 0; i < n; i++) {
		HarmonicMean += 1 / vector[i];
	}
	HarmonicMean = n / HarmonicMean;

	for (int i = 0; i < n; i++) {
		GeometricMean *= pow(vector[i], 1. / n);
	}

	for (int i = 0; i < n; i++) {
		RootMeanSquare += pow(vector[i], 2) / n;
	}
	RootMeanSquare = sqrt(RootMeanSquare);

	cout << "Arithmetic Mean = " << ArithmeticMean << endl;
	cout << "Harmonic Mean = " << HarmonicMean << endl;
	cout << "Geometric Mean = " << GeometricMean << endl;
	cout << "RootMean Square = " << RootMeanSquare << endl;
	cout << endl;
	system("pause");

	return 0;
}
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main() {
	double E, P;
	int j, i;
	E = 0;
	j = 2;
	while (j <= 20)

	{
		P = 1;
		i = pow(j, 2);
		while (i <= 400)

		{
			P *= i;
			i++;

		}
		E += j / (pow(j, 2) + P);
		j++;

	}
	cout << E << endl;
	E = 0;
	j = 2;
	do
	{
		P = 1;
		i = pow(j, 2);
		do
		{
			P *= i;
			i++;
		} while (i <= 400);
		E += j / (pow(j, 2) + P);
		j++;
	} while (j <= 20);
	cout << E << endl;
	E = 0;
	for (j = 2; j <= 20; j++)

	{
	P = 1;
		for (i = pow(j, 2); i <= 400; i++)

		{
			P *= i;

		}
		E += j / (pow(j, 2) + P);

	}
	cout << E << endl;
	E = 0;
	for (j = 20; j >= 2; j--
		)

	{
		P = 1;
		for (i = 400; i >= pow(j, 2); i--)

		{
			P *= i;

		}
		E += j / (pow(j, 2) + P);

	}
	cout << E << endl;
	return 0;
}

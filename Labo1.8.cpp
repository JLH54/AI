#include <iostream>
#include <math.h>
#include <cmath>
#include "Header.h"
using namespace std;

void main8()
{
	int nombre = 8;
	int nombredebut = nombre;
	if (nombre > 0)
	{
		while (nombre % 2 == 0)
		{
			nombre /= 2;
		}
		if (nombre == 1)
		{
			cout << nombredebut << " est une multiple de 2" << endl;
		}
	}
	if (nombre == 0 || nombre != 1)
	{
		cout << nombredebut << " n'est pas une multiple de 2" << endl;
	}
}
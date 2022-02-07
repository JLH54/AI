#include <iostream>
#include "Header.h"
using namespace std;


void main6()
{
	int nombre = 43;
	int compteur = 0;
	int x;
	x = log2(nombre) + 1;
	for (int i = 0; i < x; i++)
	{
		if (nombre << i & 1)
		{
			compteur++;
		}
	}
	cout << compteur << endl;
}
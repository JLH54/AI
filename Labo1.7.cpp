#include <iostream>
#include "Header.h"
using namespace std;


void main7()
{
	int nombre = 43;
	int x;
	x = log2(nombre) + 1;
	for (int i = 0; i < x; i++)
	{
		nombre = (nombre ^ (1 << i));
		
	}
	cout << nombre << endl;
}
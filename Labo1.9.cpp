#include <iostream>
#include <time.h>
#include "Header.h"
using namespace std;

void seed()
{
	srand(time(0));
}


void main9()
{
	seed();
	int nombre1 = rand() % 9;
	int nombre2 = rand() % 9;
	int nombre3 = rand() % 9;
	int total = 0;
	cout << nombre1 << nombre2 << nombre3 << endl;
	total = nombre1 + nombre2 + nombre1;
	cout << total << endl;
}
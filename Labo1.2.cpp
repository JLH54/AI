#include <iostream>
#include "Header.h"

using namespace std;

#define PI 3.14159

float diametre(float r)
{
	return r * 2;
}

float circonference(float r)
{
	float leDiametre = diametre(r);
	float laCirconference = PI * leDiametre;
	return laCirconference;
}

float air(float r)
{
	float lair = PI * (r * r);
	return lair;
}

int main2()
{

	float rayon;
	cin >> rayon;

	float leDiametre = diametre(rayon);
	float laCirconference = circonference(rayon);
	float lair = air(rayon);

	cout << "Diametre : " << leDiametre << endl;
	cout << "Circonference : " << laCirconference << endl;
	cout << "Air : " << lair << endl;


	return 0;
}
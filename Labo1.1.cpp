#include <iostream>
#include "Header.h"

using namespace std;

#define SIZE 4

/// <summary>
/// Fonction pour additioner la liste
/// </summary>
/// <param name="list">c'est la liste des numeros</param>
/// <returns>retourne l'addition</returns>
int addition(int list[SIZE])
{
	int total = 0;
	for (int i = 0; i < SIZE; i++)
	{
		total += list[i];
	}
	return total;
}

/// <summary>
/// Fonction pour faire la moyenne de la liste
/// elle va aussi utiliser la fonction addition()
/// </summary>
/// <param name="list">c'est la liste des numeros</param>
/// <returns>retourne la moyenne</returns>
float moyenne(int list[SIZE])
{
	float diviseur = SIZE;
	float total = addition(list);
	total /= diviseur;
	return total;
}

/// <summary>
/// Multiplie les nombres de la liste
/// </summary>
/// <param name="list">c'est la liste des numeros</param>
/// <returns>retourne le total de la multiplication</returns>
int produit(int list[SIZE])
{
	int total = list[0];
	for (int i = 1; i < SIZE; i++)
	{
		total *= list[i];
	}
	return total;
}

/// <summary>
/// Regarder quel est le nombre le plus grand
/// </summary>
/// <param name="list">c'est la liste des numeros</param>
/// <returns>retourne le nombre le plus grand</returns>
int lePlusGrand(int list[SIZE])
{
	int plusGrand = list[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (list[i] > plusGrand)
		{
			plusGrand = list[i];
		}
	}
	return plusGrand;
}

/// <summary>
/// Regarder quel est le nombre le plus petit
/// </summary>
/// <param name="list">c'est la liste des numeros</param>
/// <returns>retourne le nombre le plus petit</returns>
int lePlusPetit(int list[SIZE])
{
	int plusPetit = list[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (list[i] < plusPetit)
		{
			plusPetit = list[i];
		}
	}
	return plusPetit;
}

int main1()
{
	//initialise la liste des nombres
	int listNumero[SIZE] = { 0 };

	//prend les nombres
	for (int i = 0; i < SIZE; i++)
	{
		cin >> listNumero[i];
	}

	//Appelle toutes les fonctions
	int somme = addition(listNumero);
	float laMoyenne = moyenne(listNumero);
	int leProduit = produit(listNumero);
	int max = lePlusGrand(listNumero);
	int min = lePlusPetit(listNumero);

	//Affiche tous les resultats
	cout << "somme : " << somme << endl;
	cout << "moyenne : " << laMoyenne << endl;
	cout << "produit : " << leProduit << endl;
	cout << "max : " << max << endl;
	cout << "min : " << min << endl;

	return 0;
}
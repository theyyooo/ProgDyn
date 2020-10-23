#include <stdio.h>
#include "dichotomie.h"
#include "knapsack.h"
#include "assert.h"
#include "pgcb.h"

int main()
{
	int tab[20] = {1, 3, 4, 8, 10, 14, 18, 25, 26, 28, 29, 32, 35, 36, 37, 38, 39, 45, 49, 54};
	int taille = 20;
	int value = 53;

	int index = find_by_dichotomy(tab, taille, value);
	assert(index == -1);
   
    // exo 2

	Object o1,o2,o3;
	o1.valeur = 7;
	o1.poids = 6;

	o2.valeur = 5;
	o2.poids = 5;

	o3.valeur = 5;
	o3.poids = 5;


	Object tab_objects[] = {o1,o2,o3};
	int size = 3;

	int bag = 10;
	Object *objects_sorted = knapsack(tab_objects, size, bag);
	
	// exo 3

	int taille = 3;

	int matrice = create_matrice(taille);
	show_matrice(matrice, taille);

	return (0);
}
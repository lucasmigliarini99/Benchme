#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


void tabRandom (float *tab, int taille){
    srand(time(0));


	for (int i = 0; i < taille-1; i++)
	{
		tab[i] = (float) (rand()%RAND_MAX);
	};

}
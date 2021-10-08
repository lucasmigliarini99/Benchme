#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "../include/tabRandom.h"
#include "../include/triBulle.h"
#include "../include/triSelection.h"
#define MAX 1000000 

int main()
{
	int taille = rand()%MAX;
	float *tab = NULL,*tabBull = NULL,*tabSelection=NULL;
	tab = malloc(taille * sizeof(float));
	tabRandom(tab,taille);
	tabBull = malloc(taille * sizeof(float));
	tabSelection=malloc(taille * sizeof(float));

	for (int i = 0; i < taille-1; i++)
	{
		tabBull[i] = tab[i];
		tabSelection[i] = tab[i];
	}
	
	

    clock_t
    temps_initial, /* Temps initial en micro-secondes */
    temps_final; /* Temps final en micro-secondes */

    float
    temps_cpu; /* Temps total en secondes */

	printf("Tri par bulle :\n");
	temps_initial = clock ();
    triBulle(tabBull,taille);       
    temps_final = clock ();
    temps_cpu = (temps_final - temps_initial)/CLOCKS_PER_SEC;   
    printf("temps CPU : %f\n",temps_cpu);

	printf("Tri par selection :\n");
	temps_initial = clock ();
    triSelection(tabSelection,taille);        
    temps_final = clock ();
    temps_cpu = (temps_final - temps_initial)/CLOCKS_PER_SEC;   
    printf("temps CPU : %f\n",temps_cpu);
	
	
}
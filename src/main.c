#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "../include/tabRandom.h"
#include "../include/triBulle.h"
#include "../include/triSelection.h"
#include "../include/triInsertion.h"
#include "../include/triParTas.h"
#include "../include/createCSV.h"
#define MAX 10000

int main()
{
	createCSV("export_csv.csv");

	int taille = rand()%MAX; //Taille du tableau

	float *tab = NULL,*tabBull = NULL,*tabSelection=NULL,*tabInsertion=NULL,*tabParTas = NULL; //Initialisation des tableaux
	tab = malloc(taille * sizeof(float));
	tabRandom(tab,taille);

	//tailles des tableaux
	tabBull = malloc(taille * sizeof(float));
	tabSelection=malloc(taille * sizeof(float));
	tabInsertion=malloc(taille * sizeof(float));
	tabParTas=malloc(taille * sizeof(float));

	//Remplissage des tableaux
	for (int i = 0; i < taille-1; i++)
	{
		tabBull[i] = tab[i];
		tabSelection[i] = tab[i];
		tabInsertion[i] = tab[i];
		tabParTas[i] = tab[i];
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
	exportCSV("export_csv.csv","triBulle",taille,temps_cpu);

	printf("Tri par selection :\n");
	temps_initial = clock ();
    triSelection(tabInsertion,taille);        
    temps_final = clock ();
    temps_cpu = (temps_final - temps_initial)/CLOCKS_PER_SEC;   
    printf("temps CPU : %f\n",temps_cpu);

	printf("Tri par insertion :\n");
	temps_initial = clock ();
    triInsertion(tabSelection,taille);        
    temps_final = clock ();
    temps_cpu = (temps_final - temps_initial)/CLOCKS_PER_SEC;   
    printf("temps CPU : %f\n",temps_cpu);

	printf("Tri par tas :\n");
	temps_initial = clock ();
    triTas(tabParTas,taille);        
    temps_final = clock ();
    temps_cpu = (temps_final - temps_initial)/CLOCKS_PER_SEC;   
    printf("temps CPU : %f\n",temps_cpu);
	
	
}
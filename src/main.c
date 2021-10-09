/**
 * @file main.c
 * @author Julien Peyrol, Lucas Migliarini (peyrol.jul@gmail.com, l.migliarini@eleve.leschartreux.net)
 * @brief fichier qui lance le programme
 * @version 0.1
 * @date 2021-10-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include <unistd.h>
#include "../include/tabRandom.h"
#include "../include/triBulle.h"
#include "../include/triSelection.h"
#include "../include/triInsertion.h"
#include "../include/triParTas.h"
#include "../include/createCSV.h"

int main()
{
	createCSV("export_csv.csv");

	int tailleTab[6] = {100,1000,10000,100000,1000000,10000000};
	float *tab = NULL, *tabBull = NULL, *tabSelection = NULL, *tabInsertion = NULL, *tabParTas = NULL; //Initialisation des tableaux
	struct timeval
		temps_initial, /* Temps initial en micro-secondes */
		temps_final;   /* Temps final en micro-secondes */

	float temps_exe; /* Temps total en secondes */

	//Valeur moyennes
	float tpsTriBulle, tpstriSelection,tpstriInsertion, tpstriTas;

	for (int i = 0; i < 5; i++)
	{
		
	
		tab = malloc(tailleTab[i] * sizeof(float));	

		//tailles des tableaux
		tabBull = malloc(tailleTab[i] * sizeof(float));
		tabSelection = malloc(tailleTab[i] * sizeof(float));
		tabInsertion = malloc(tailleTab[i] * sizeof(float));
		tabParTas = malloc(tailleTab[i] * sizeof(float));

		//remise à 0
		tpsTriBulle = 0, tpstriSelection = 0,tpstriInsertion = 0, tpstriTas = 0;

		for (int j = 0; j < 2; j++)
		{

			//Remplissage du tableau avec des nombres aléatoires entre 0 et 10^6
			tabRandom(tab, tailleTab[i]);

			//Remplissage des tableaux
			for (int k = 0; k < tailleTab[i] - 1; k++)
			{
				tabBull[k] = tab[k];
				tabSelection[k] = tab[k];
				tabInsertion[k] = tab[k];
				tabParTas[k] = tab[k];
			}

			

			printf("Tri par bulle :\n");
			gettimeofday(&temps_initial,NULL);

			triBulle(tabBull, tailleTab[i]);
			
			gettimeofday(&temps_final,NULL);
			
			temps_exe = (temps_final.tv_sec - temps_initial.tv_sec);
			tpsTriBulle += temps_exe;
			printf("temps CPU : %f\n", temps_exe);
			

			printf("Tri par selection :\n");
			gettimeofday(&temps_initial,NULL);
			triSelection(tabInsertion, tailleTab[i]);
			gettimeofday(&temps_final,NULL);
			temps_exe = (temps_final.tv_sec - temps_initial.tv_sec);
			tpstriSelection += temps_exe;
			printf("temps CPU : %f\n", temps_exe);

			printf("Tri par insertion :\n");
			gettimeofday(&temps_initial,NULL);
			triInsertion(tabSelection, tailleTab[i]);
			gettimeofday(&temps_final,NULL);
			temps_exe = (temps_final.tv_sec - temps_initial.tv_sec);
			tpstriInsertion += temps_exe;
			printf("temps CPU : %f\n", temps_exe);

			printf("Tri par tas :\n");
			gettimeofday(&temps_initial,NULL);
			triTas(tabParTas, tailleTab[i]);
			gettimeofday(&temps_final,NULL);
			temps_exe = (temps_final.tv_sec - temps_initial.tv_sec);
			tpstriTas += temps_exe;
			printf("temps CPU : %f\n", temps_exe);
		}


		tpsTriBulle = tpsTriBulle/3;
		exportCSV("export_csv.csv", "triBulle", tailleTab[i], tpsTriBulle);

		tpstriSelection = tpstriSelection/3;
		exportCSV("export_csv.csv", "triSelection", tailleTab[i], tpstriSelection);

		tpstriInsertion = tpstriInsertion/3;
		exportCSV("export_csv.csv", "triInsertion", tailleTab[i], tpstriInsertion);

		tpstriTas = tpstriTas/3;
		exportCSV("export_csv.csv", "triTas", tailleTab[i], tpstriTas);
		
	}
}
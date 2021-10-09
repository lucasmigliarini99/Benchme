/**
 * @file tabRandom.c
 * @author Julien Peyrol, Lucas Migliarini (peyrol.jul@gmail.com, l.migliarini@eleve.leschartreux.net)
 * @brief remplis le tableau par des valeurs aléatoires
 * @version 0.1
 * @date 2021-10-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/**
 * @brief remplis le tableau aléatoirement
 * 
 * @param tab -> tableau à remplir 
 * @param taille -> taille du tableau
 */

void tabRandom(float *tab, int taille)
{
	srand(time(0));

	for (int i = 0; i < taille - 1; i++)
	{
		tab[i] = (float)(rand() % RAND_MAX);
	};
}
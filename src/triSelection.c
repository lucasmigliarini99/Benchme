/**
 * @file triSelection.c
 * @author Julien Peyrol, Lucas Migliarini (peyrol.jul@gmail.com, l.migliarini@eleve.leschartreux.net)
 * @brief fonction de tri par selection
 * @version 0.1
 * @date 2021-10-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/**
 * @brief tri un tableau en utilisant la méthode de tri par selection
 * 
 * @param tab -> tableau à trier 
 * @param nbrValeurs -> nombre de valeurs à trier 
 */

void triSelection(float *tab, int nbrValeurs)
{

    int compteur;
    float tmp;

    for (int i = 0; i < nbrValeurs; i++)
    {
        compteur = i;
        for (int j = i + 1; j <= nbrValeurs; j++)
        {
            if (tab[compteur] > tab[j])
            {
                compteur = j;
            }
        }
        if (compteur != i)
        {
            tmp = tab[compteur];
            tab[compteur] = tab[i];
            tab[i] = tmp;
        }
    }
}

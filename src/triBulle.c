/**
 * @file triBulle.c
 * @author Julien Peyrol, Lucas Migliarini (peyrol.jul@gmail.com, l.migliarini@eleve.leschartreux.net)
 * @brief fonction de tri à bulle
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
 * @brief tri un tableau en utilisant la méthode de tri à bulle
 * 
 * @param tab -> tableau à trier
 * @param nbrValeurs -> taille du tableau
 */

void triBulle(float *tab, int nbrValeurs)
{

    int i;
    int valTemporaire;
    bool changement = true;

    while (changement == true)
    {
        changement = false;
        for (i = 0; i < nbrValeurs; i++)
        {
            if (tab[i] > tab[i + 1]) //Si la valeur de i est inferieure à i+1
            {
                changement = true;
                valTemporaire = tab[i]; //inversement des valeurs
                tab[i] = tab[i + 1];
                tab[i + 1] = valTemporaire;
            }
        }
    }
}

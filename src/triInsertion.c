/**
 * @file triInsertion.c
 * @author Julien Peyrol, Lucas Migliarini (peyrol.jul@gmail.com, l.migliarini@eleve.leschartreux.net)
 * @brief fonction de tri par insertion
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
 * @brief tri un tableau en utilisant la méthode de tri par insertion
 * 
 * @param tab -> tableau à trier
 * @param nbrValeurs -> taille du tableau
 */

void triInsertion(float *tab, int nbrValeurs)
{
    int i, j, valTemporaire;
    for (i = 1; i < nbrValeurs + 1; i++)
    {
        j = i;
        while (j > 0 && tab[j - 1] > tab[j])
        {
            valTemporaire = tab[j];
            tab[j] = tab[j - 1];
            tab[j - 1] = valTemporaire;
            j--;
        }
    }
}

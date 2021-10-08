#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

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

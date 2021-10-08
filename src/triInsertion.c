#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

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

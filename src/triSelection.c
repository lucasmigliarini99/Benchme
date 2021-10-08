#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void triSelection(float *tab, int nbrValeurs){
    
    int compteur;
    float tmp;

    for ( int i = 0; i < nbrValeurs; i++)
    {
        compteur = i;
        for ( int j = i+1; j <= nbrValeurs; j++)
        {
            if(tab[compteur] > tab[j]){
                compteur = j;
            }
        }
        if(compteur != i){
            tmp = tab[compteur];
            tab[compteur] = tab[i];
            tab[i] = tmp;
        }
       
        
    }
    
    
}

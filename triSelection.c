#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 10
void triSelection(float *tab){
    
    int compteur;
    float tmp;

    for ( int i = 0; i < size; i++)
    {
        compteur = i;
        for ( int j = i+1; j < (size-1); j++)
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

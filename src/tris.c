#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int bintodec(char *val){
    
    int index = strlen(val)-1;
    int valeur = 0,nbPuissance = 1;


    for (int i = index; i >= 0; i--)
    {
        valeur += (val[i]-48)*nbPuissance;
        nbPuissance = nbPuissance*2;
    }
    return valeur;
    
}

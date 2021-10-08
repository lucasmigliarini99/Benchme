#include <stdio.h>

void createCSV(char *filename){
    FILE *fichier = fopen(filename, "a+");
    fprintf(fichier,"Algorithme, Taille tableau, Temps moyen\n");
    fclose(fichier);
}

void exportCSV(char *filename, char *name, int size, float average){
    FILE *fichier = fopen(filename,"a+");
    fprintf(fichier,"%s, %d, %f\n",name,size,average);
    fclose(fichier);
}
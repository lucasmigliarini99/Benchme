/**
 * @file createCSV.c
 * @author Julien Peyrol, Lucas Migliarini (peyrol.jul@gmail.com, l.migliarini@eleve.leschartreux.net)
 * @brief Crée le fichier csv et l'exporte
 * @version 0.1
 * @date 2021-10-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

/**
 * @brief crée un fichier csv
 * 
 * @param filename -> nom du fichier crée
 */

void createCSV(char *filename)
{
    FILE *fichier = fopen(filename, "a+");
    fprintf(fichier, "Algorithme, Taille tableau, Temps moyen\n");
    fclose(fichier);
}

/**
 * @brief exporte le fichier csv
 * 
 * @param filename -> nom du fichier
 * @param name -> nom du tri
 * @param size -> taille du tableau
 * @param average -> moyenne du temps pris
 */

void exportCSV(char *filename, char *name, int size, float average)
{
    FILE *fichier = fopen(filename, "a+");
    fprintf(fichier, "%s, %d, %f\n", name, size, average);
    fclose(fichier);
}
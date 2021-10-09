/**
 * @file triParTas.c
 * @author Julien Peyrol, Lucas Migliarini (peyrol.jul@gmail.com, l.migliarini@eleve.leschartreux.net)
 * @brief fonction de tri par tas
 * @version 0.1
 * @date 2021-10-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

/**
 * @brief permutation de deux variables d'un tableau
 * 
 * @param a -> premiere valeur du tableau
 * @param b -> deuxième valeur du tableau
 */

void echange(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

/**
 * @brief tri un tableau en utilisant la méthode de tri par tas
 * 
 * @param tab -> tableau à trier 
 * @param nbrValeurs -> nombre de valeurs à trier
 * @param i 
 */

void entassement(float *tab, int nbrValeurs, int i)
{
    int max = i;
    int leftChild = 2 * i + 1;
    int rightChild = 2 * i + 2;
    if (leftChild < nbrValeurs && tab[leftChild] > tab[max])
        max = leftChild;
    if (rightChild < nbrValeurs && tab[rightChild] > tab[max])
        max = rightChild;
    if (max != i)
    {
        echange(&tab[i], &tab[max]);
        entassement(tab, nbrValeurs, max);
    }
}

/**
 * @brief tri un tableau en utilisant la méthode de tri par tas
 * 
 * @param tab -> tableau à trier
 * @param nbrValeurs -> taille du tableau
 */

void triTas(float *tab, int nbrValeurs)
{

    nbrValeurs + 1;
    for (int i = nbrValeurs / 2 - 1; i >= 0; i--)
    {
        entassement(tab, nbrValeurs, i);
    }
    for (int i = nbrValeurs - 1; i >= 0; i--)
    {
        echange(&tab[0], &tab[i]);
        entassement(tab, i, 0);
    }
}
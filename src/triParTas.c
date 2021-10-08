#include <stdio.h>

void echange(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

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

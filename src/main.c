#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int choix;
	printf("Choisir un menu entre 1 et 4 : \n");
	scanf("%d", &choix);
	allMenu(choix);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int choix;
	printf("Choisir un menu: \n1: tri à bulle \n2: tri par sélection\n");
	scanf("%d", &choix);
	allMenu(choix);
	
	
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	/* int choix;
	printf("Choisir un menu entre 1 et 4 : \n");
	scanf("%d", &choix);
	allMenu(choix);
	*/

	float tab[] = {1, 4, 9, 2, 8, 6, 10, 7, 2, 3};
	triBulle(tab);
	for (int i = 0; i < 10; i++)
	{
		printf("%f\n", tab[i]);
	}
}
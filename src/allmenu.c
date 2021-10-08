#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ARRAY_SIZE 100

void allMenu(int choix){
    float tab[] = {1, 4, 9, 2, 8, 6, 10, 7, 2, 3};
    switch (choix)
    {
        case 1:
            triBulle(tab);
            for (int i = 0; i < 10; i++)
            {
                printf("%.0f, ", tab[i]);
            };
             printf("\n");
            break;
        
        case 2:
            triSelection(tab);
            for (int i = 0; i < 10; i++)
            {
                printf("%.0f, ", tab[i]);
            };
            printf("\n");
            break;
        
        default:
            break;
    }
}
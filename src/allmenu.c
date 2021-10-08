#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define ARRAY_SIZE 100

void allMenu(int choix){
    float tab[] = {1, 4, 9, 2, 8, 6, 10, 7, 2, 3, 1, 9, 2, 3};
    int nbrValeurs = (sizeof(tab)/sizeof(int))-1;
    clock_t
    temps_initial, /* Temps initial en micro-secondes */
    temps_final; /* Temps final en micro-secondes */
    float
    temps_cpu; /* Temps total en secondes */
    
    switch (choix)
    {
        case 1:
            temps_initial = clock ();
            triBulle(tab,nbrValeurs);
            for (int i = 0; i <= nbrValeurs; i++)
            {
                printf("%.0f, ", tab[i]);
            };
             printf("\n");
             temps_final = clock ();
            temps_cpu = (temps_final - temps_initial) * 1e-6;   
            printf("temps CPU : %f\n",temps_cpu);
            break;
        
        case 2:
            temps_initial = clock ();
            triSelection(tab,nbrValeurs);
            for (int i = 0; i <= nbrValeurs; i++)
            {
                printf("%.0f, ", tab[i]);
            };
            printf("\n");
            temps_final = clock ();
            temps_cpu = (temps_final - temps_initial) * 1e-6;   
            printf("temps CPU : %f\n",temps_cpu);
            break;
        
        default:
            break;
    }
}
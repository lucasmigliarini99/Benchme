#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ARRAY_SIZE 100

void allMenu(int choix){
    int dec,num;
    char *result;
    switch (choix)
    {
        case 1:
            char nbr_bin[ARRAY_SIZE];          
            printf("Entrez un nombre binaire : ");
            scanf("%s",&nbr_bin);
            dec = bintodec(nbr_bin);
            printf("Votre nombre en décimal est : %d\n", dec);
            break;
        case 2:
            char nbr_hexa[ARRAY_SIZE];           
            printf("Entrez un nombre hexadécimal : ");
            scanf("%s",&nbr_hexa);
            dec = hexatodec(nbr_hexa);
            printf("Votre nombre en décimal est : %d\n", dec);
            break;
        case 3 :
            num;
            printf("Saisir un nombre decimal: \n");
            scanf("%d",&num);
            result = dectohexa(num);
            int sizetab = sizeof(result)-1;
            for (int i = sizetab; i >= 0; i--)
            {
                printf("%c",result[i]);
            }
            printf("\n");
            break;
        case 4:
            num;
            printf("Saisir un nombre decimal: \n");
            scanf("%d",&num);
            result = dectobin_v1(num);
            printf("%s",result);
            break;
        case 5:
            num;
            printf("Saisir un nombre decimal: \n");
            scanf("%d",&num);
            result = dectobin_v2(num);
            for (int i = sizetab; i >= 0; i--)
            {
                printf("%c",result[i]);
            }
            break;
        default:
            break;
    }
}
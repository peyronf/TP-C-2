#include <stdio.h>
void main()
{
    char chiffre;
    printf("choisir un chiffre :");
    scanf(" %c",&chiffre);
    switch(chiffre)
    {
    case '0':
        printf("ZERO");
        break;
    case '1':
        printf("UN");
        break;
    case '2':
        printf("DEUX");
        break;
    case '3':
        printf("TROIS");
        break;
    case '4':
        printf("QUATRE");
        break;
    case '5':
        printf("CINQ");
        break;
    case '6':
        printf("SIX");
        break;
    case '7':
        printf("SEPT");
        break;
    case '8':
        printf("HUIT");
        break;
    case '9':
        printf("NEUF");
        break;
    }
}

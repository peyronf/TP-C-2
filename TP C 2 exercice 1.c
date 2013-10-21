#include <stdio.h>
void main()
{
    int saisie, chiffre, i;
    printf("Saisir un entier :");
    scanf("%d", &saisie);
    if (saisie>0)

        for (i=0;i<=100;i++)
        {
            chiffre=saisie*i;
            printf("%dx%d=%d\n\n", saisie, i, chiffre);
        }
    else
        printf("Valeur incorrecte!\n");

    if (saisie>0)
    i=0;
        while (i<=100)
    {
        chiffre=saisie*i;
        printf("%dx%d=%d\n\n", saisie, i, chiffre);
        i++;
    }
    else
        printf("Valeur incorrect!\n");
}

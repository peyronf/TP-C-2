#include <stdio.h>
void main()
{
    int entier, factorielle=1, i=1;
    do
    {
        printf("Saisir un entier :\n");
        scanf("%d", &entier);
    }while (entier<0);
    while (i<=entier)
    {
        factorielle=factorielle*i;
        i++;
    }
    printf("%d", factorielle);
}

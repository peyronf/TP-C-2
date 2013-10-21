#include <stdio.h>
void main()
{
    int annee;
    do
    {
        printf("Saisir une année comprise entre 1512 et 3999 : ");
        scanf("%d", &annee);
    }while(annee<1512 || annee>3999);
    if (annee%4==0 && annee%100!=0 || annee%400==0)
        printf("Cette annee est bissextile\n");

        else
        printf("Cette annee n'est pas bissextile\n");
}

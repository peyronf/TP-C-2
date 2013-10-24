#include <stdio.h>
void main()
{
    int date, jour, annee, mois;
    printf("Indiquer la date en format jjmmaa : ");//placer un test de variable
    scanf("%d", &date);
    annee = date%100;
    jour=date/10000;
    mois=(date/100)%100;
    switch(mois)
    {
    case 1:
        printf("%d Janvier 20%02d", jour, annee);
        break;
    case 2:
        printf("%d Fevrier 20%02d", jour, annee);
        break;
    case 3:
        printf("%d Mars 20%02d", jour, annee);
        break;
    case 4:
        printf("%d Avril 20%02d", jour, annee);
        break;
    case 5:
        printf("%d Mai 20%02d", jour, annee);
        break;
    case 6:
        printf("%d Juin 20%02d", jour, annee);
        break;
    case 7:
        printf("%d Juillet 20%02d", jour, annee);
        break;
    case 8:
        printf("%d Aout 20%02d", jour, annee);
        break;
    case 9:
        printf("%d Septembre 20%02d", jour, annee);
        break;
    case 10:
        printf("%d Octobre 20%d", jour, annee);
        break;
    case 11:
        printf("%d Novembre 20%d", jour, annee);
        break;
    case 12:
        printf("%d Decembre 20%d", jour, annee);
        break;
    }
}

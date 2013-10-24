#include <stdio.h>
void main()
{
    float a, b, c, delta, x1, x2, x3;
    printf("Saisir a : ");
    scanf("%f", &a);//condition a différent de 0
    printf("\nSaisir b : ", &b);
    scanf("%f", &b);
    printf("\nSaisir c : ", &c);
    scanf("%f", &c);
    delta=b*b-4*a*c;
    printf("Ainsi Delta = %f", delta);
    //vérifier quand a b c = 0 3 6; 0 0 6; 0 0 0
    if (delta>0)
    {
        x1=(-b-sqrt(delta))/(2*a);
        x2=(-b+sqrt(delta))/(2*a);
        printf("Les solutions sont : x = %f ou x = %f", x1, x2);
    }
    else if (delta=0)
    {
        x3=(-b)/(2*a);
        printf("La seule solution est : x = %f", x3);
    }
    else if (delta<0)
        printf("L'equation n'a pas de solution.");
}

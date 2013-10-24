#include <stdio.h>
void main()
{
    int un, i, j, somme_de_un=0;
    float vn, somme_de_vn=0;
    printf("Suite u(n) :\n");
    for (i=0;i<10;i++)
    {
        un=3*i+5;
        printf("u(%d) = %d\n",i, un);
        somme_de_un=somme_de_un+un;
    }
    printf("Suite v(n) :\n");
    for (j=0;j<10;j++)
    {
        vn=(3.0*j*j+5)/(j*j*j+1);
        printf("v(%d) = %f\n",j, vn);
        somme_de_vn=somme_de_vn+vn;
    }
    printf("Somme des entiers de la suite u(n)= %d et v(n)=%f\n", somme_de_un, somme_de_vn);
}

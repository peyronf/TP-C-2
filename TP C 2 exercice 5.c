#include <stdio.h>
void main()
{
    float meilleure_note_1, meilleure_note_2, meilleure_note_3, moyenne;
    printf("Saisir la premiere meilleure note : ");
    scanf("%f", &meilleure_note_1);
    printf("\nSaisir la deuxieme meilleure note : ");
    scanf("%f", &meilleure_note_2);
    printf("\nSaisir la troisieme meilleure note : ");
    scanf("%f", &meilleure_note_3);
    if (meilleure_note_1<=meilleure_note_2 && meilleure_note_1<= meilleure_note_3)
    {
        printf("La moyenne est de : %f", (meilleure_note_2+meilleure_note_3)/2);
    }
    else

    {
        if (meilleure_note_2<=meilleure_note_1 && meilleure_note_2<=meilleure_note_3)
        {
            printf("La moyenne est de : %f", (meilleure_note_1+meilleure_note_3)/2);
        }
        else
            printf("La moyenne est de : %f", (meilleure_note_1+meilleure_note_2)/2);

    }
}

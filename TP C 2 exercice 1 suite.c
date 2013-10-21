#include <stdio.h>
void main()
{
    int i, j, multiple;
    printf("* 1  2  3  4  5  6  7  8  9  10\n");
    for(i=1;i<=10;i++)
    {
        printf("%3d", i);
        for (j=1;j<=10;j++)
        {
            multiple=i*j;
            printf("%3d", multiple);
        }
        printf("\n");
    }
}

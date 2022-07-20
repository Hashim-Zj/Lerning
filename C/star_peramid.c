#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int num, i, j, k;
    printf("enter a number :");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        printf("\t");
        for (j = num; j <= 1; j--)
        {
            printf("mmnnnnnnnnnn");
        }
        for (k = 0; k < i; k++)
        {
             printf("*\t\t");
        }

        printf("\n");
    }

    return 0;
}
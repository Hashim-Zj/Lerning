#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    for (int i = 0; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\t", i);
        }
    }
    printf("\n");
    return 0;
}
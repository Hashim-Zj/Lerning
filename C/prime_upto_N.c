#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("\n");
        }
        else

        {
            printf("%d\t", i)
        }
    }

    return 0;
}
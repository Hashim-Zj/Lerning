#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, flag = 0;
    printf("Enter a number : ");
    scanf("%d", &n);

    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("Prime Number\n");
    }
    else
    {
        printf("Note Prime Number\n");
    }

    return 0;
}
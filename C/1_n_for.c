#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, result = 0;
    printf("Enter a number : ");
    scanf("%d", &num);

    for (int i = 0; i <= num; i++)
    {
        result += i;
    }
    printf("%d\t", result);
    printf("\n");

    return 0;
}
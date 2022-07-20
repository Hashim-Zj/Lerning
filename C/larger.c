#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    printf("enter a number :");
    scanf("%d", &num1);
    printf("enter a nu\tmber :");
    scanf("%d", &num2);
    if (num1 == num2)
    {
        printf("the numbers are equal: %d = %d", num1, num2);
    }
    else if (num1 > num2)
    {
        printf("the %d is large", num1);
    }
    else
    {
        printf("the %d is smale", num1);
    }

    return 0;
}
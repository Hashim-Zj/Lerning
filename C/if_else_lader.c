#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, n;
    float result;
    printf("Enter two numbers");
    scanf("%d%d", &num1, &num2);

    printf("1:Addition\n2:Substraction\n3:Multiplication\n4:Division\n");
    scanf("%d", &n);
    if (n == 1)
    {
        result = num1 + num2;
        printf("REsult =%f", result);
    }
    else if (n == 2)
    {
        result = num1 - num2;
        printf("REsult =%f", result);
    }
    else if (n == 3)

    {
        result = num1 * num2;
        printf("REsult =%f", result);
    }
    else if (n == 4)
    {
        result = num1 / num2;
        printf("REsult =%f", result);
    }
    else
    {
        printf("Enter a valied number");
    }

    return 0;
}
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

    switch (n)
    {
    case 1:
        result = num1 + num2;
        break;
    case 2:
        result = num1 - num2;
        break;
    case 3:
        result = num1 * num2;
        break;
    case 4:
        result = num1 / num2;
        break;
    default:
        printf("Enter a valied number");
        break;
    }
    printf("REsult =%f", result);
    return 0;
}
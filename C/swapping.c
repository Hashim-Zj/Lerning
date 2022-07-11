#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1, num2, temp;
    printf("Enter First number :");
    scanf("%d", &num1);
    printf("Enter First number :");
    scanf("%d", &num2);
    //temp = num1;
    //num1 = num2;
    //num2 = temp;
    num1+=num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("First is :%d\n", num1);
    printf("First is :%d\n", num2);

    return EXIT_SUCCESS;
}

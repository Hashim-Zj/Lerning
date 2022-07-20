#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3;
    printf("enter First number :");
    scanf("%d", &num1);
    printf("enter secound number :");
    scanf("%d", &num2);
    printf("enter therd number :");
    scanf("%d", &num3);
    printf("\n");

        if (num1 == num2)
        {
            if (num1 == num3)
            {
                printf("The Three Numbers are 'Equals'\n");
            }
            else if (num1 > num3)
            {
                printf("The 'num1' & 'num2' are equal\n");
                printf("The Large is 'num1' & 'num2'\n");
            }
            else
            {
                printf("The 'num1' & 'num2' are equal\n");
                printf("The Large is 'num3'\n");
            }
        }

        else if (num2 == num3)
        {
            if (num2 == num1)
            {
                printf("The Three Numbers are 'Equals'\n");
            }
            else if (num2 > num1)
            {
                printf("The 'num1' & 'num3' are equal\n");
                printf("The Large is 'num2' & 'num3'\n");
            }
            else
            {
                printf("The 'num1' & 'num3' are equal\n");
                printf("The Large is 'num1'\n");
            }
        }

        else if (num1 == num3)
        {
            if (num1 == num2)
            {
                printf("The Three Numbers are 'Equals'\n");
            }
            else if (num1 > num2)
            {
                printf("The 'num1' & 'num3' are equal\n");
                printf("The Large is 'num1' & 'num3'\n");
            }
            else
            {
                printf("The 'num1' & 'num3' are equal\n");
                printf("The large is 'num2'\n");
            }
        }

        else if (num1 > num2)
        {
            if (num1 > num3)
            {
                printf("The Large is 'num1'\n");
            }
            else
            {
                printf("The Large is 'num3'\n");
            }
        }
        else
        {
            if (num2 > num3)
            {
                printf("The Large is 'num2'\n");
            }
            else
            {
                printf("The Large is 'num3'\n");
            }
        }

    printf("Number 1: %d\n", num1);
    printf("Number 2: %d\n", num2);
    printf("Number 3: %d\n", num3);
    return 0;
}
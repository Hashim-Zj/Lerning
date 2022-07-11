#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int a;
    char name[20];
    printf("Enter a Number:");
    scanf("%d", &a);
    printf("Enter a string :");
    scanf("%s", &name);
    printf("you have enterd :%d \n", a);
    printf("you have enterd :%s \n", name);
    // printf("Hello World \n");
    // printf("I Like Piza \n");

    return EXIT_SUCCESS;
}

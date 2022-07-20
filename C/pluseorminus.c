#include<stdio.h>
#include<stdlib.h>

int main(){
    int num;
printf("enter a number :");
scanf("%d",&num);
if (num<0)
{
printf("the number is negative");
}
else if (num==0)
{
    printf("the number is zero");
}
else
{
   printf("the number is positive");
}


    return 0;
}
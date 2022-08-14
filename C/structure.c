// #include <stdio.h>
// #include <string.h>

// typedef struct playar
// {
//     char name[30];

//     char pass[20];
//     int id;
// }ADS;

// int main()
// {

//     /*struct playar*/ADS playar1={"hashim","hasdhfjf",10110};

//     struct playar playar2={"brototype","br@123",10102};

//     // strcpy(playar1.name, "ahafdhj");
//     // playar1.score = 23;

//     // strcpy(playar2.name, "dghjkls;df");
//     // playar2.score = 34567;

//     printf("%s\n", playar1.name);
//     printf("%d\n", playar1.id);
//     printf("%s\n", playar2.name);
//     printf("%d\n", playar2.id);
//     return 0;
// }

// enum Day{sun=1,mon=2,tue=3,wed=4,the=5,fri=6,sat=7};
// int main(){

// enum Day today=sat;
// if (today==1||today==7)
// {
//    printf("Wekand\n");
// }
// else
// {
//     printf("DAys not leav\n");
// }

//     return 0;

// }

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // srand (time(0));

    // int n1=(rand()%6)+1;
    // int n2=(rand()%6)+1;
    // int n3=(rand()%6)+1;

    // printf("%d %d %d",n1,n2,n3);

    const int min = 1, max = 100;
    int guss, gesses = 0, ans;
    srand(time(0));
    ans = (rand() % max) + min;

    do
    {
        printf("enter a guss : ");
        scanf("%d", &guss);
        if (guss > ans)
        {
            printf("is too High!\n");
        }
        else if (guss < ans)
        {
            printf("is too low \n");
        }
        else
        {
            printf("CORECT!!!!\n");
        }
        gesses++;
    } while (guss != ans);
    printf("++++++++++++++++++++");
    printf("Answer %d\n", ans);
    printf("Total Gusses %d\n", gesses);
}
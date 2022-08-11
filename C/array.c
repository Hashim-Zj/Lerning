// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     unsigned int num[100],limit,i, k;
//   printf("enter a number :");
//     scanf("%d", &limit);

//     for (i = 0; i < limit; i++)
//     {
//         printf("enter a name: ");
//         scanf("%d", &num[i]);
//        } 
// for (i = 0; i < limit; i++)
//     {
//      printf("%d\n", num[i]);
//     }
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	unsigned int n,i,j,k;
	printf("Enter rows");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==1||j==1||i==n||j==n||i==j||j==n-i){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
}

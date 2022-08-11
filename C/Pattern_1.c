#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned int n=5,i,j;
    for (i=n;i>=1;i--){
        for (j=0;j<i;j++){
            printf("* ");
        }
        printf("\n");
    }
    
}
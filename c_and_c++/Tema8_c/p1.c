//
// Created by Radu on 07/12/2019.
//

#include <stdio.h>
#include <stdlib.h>
//#/include <math.h>
//#/include <string.h>
//#/include <stdbool.h>

int main() {
    int n,i,j;
    int *a;

    printf("n = ");
    scanf("%d", &n);
    if((a=(int*)malloc((1+n)*n/2* sizeof(int)))==NULL){
        printf("Insuficient memory\n");
        exit(EXIT_FAILURE);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            if(i==0 || j==0){
                *(a+(2*n-i+1)*i/2+j)=1;
            } else {
                *(a+(2*n-i+1)*i/2+j)=*(a+(2*n-i+2)*(i-1)/2+j)+*(a+(2*n-i+1)*i/2+j-1);
            }

        }
    }
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n-i;j++){
            printf("%d ",*(a+(2*n-i+1)*i/2+j));
        }
    }
    free(a);
    return 0;
}
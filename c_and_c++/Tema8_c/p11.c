//
// Created by Radu on 07/12/2019.
//

#include <stdio.h>
#include <stdlib.h>
//#/include <math.h>
#include <string.h>
//#/include <stdbool.h>

int main() {
    int m,n,i,j;
    char *a;

    printf("m = ");
    scanf("%d", &m);
    printf("n = ");
    scanf("%d", &n);
    if((a=(char*)malloc(m*n))==NULL){
        printf("Memorie insuficienta\n");
        exit(EXIT_FAILURE);
    }
    //reading and inserting the chars
    getchar();
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            //*(a+i*n+j)=getelem();
            *(a+i*n+j)=getchar();
            getchar();
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(j!=n-1 || *(a+i*n+j)!='-'){
                printf("%c",*(a+i*n+j));
            }
        }
    }
    free(a);
    return 0;
}
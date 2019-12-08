//
// Created by Radu on 07/12/2019.
//

#include <stdio.h>
#include <stdlib.h>
//#/include <math.h>
//#/include <string.h>
//#/include <stdbool.h>

int ones(int x){
    int i,s=0;

    for(i=sizeof(x)*8-1;i>=0;i--){
        s+=(x>>i)&1;
    }
    return s;
}

void create(int *p,int m, int n){
    int i,j,k;

    for(i=0;i<m;i++){
        k=0;
        for(j=0;j<n;j++){
            k+=ones(*(p+i*(n+1)+j));
        }
        *(p+i*(n+1)+n)=k;
    }
}

int main() {
    int m,n,*a,i,j;

    printf("m = ");
    scanf("%d", &m);
    printf("n = ");
    scanf("%d", &n);
    if((a=(int*)malloc(m*(n+1)* sizeof(int)))==NULL){
        printf("Memorie insuficienta\n");
        exit(EXIT_FAILURE);
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d", a+i*(n+1)+j);
        }
    }
    create(a,m,n);
    for(i=0;i<m;i++){
        printf("\n");
        for(j=0;j<n+1;j++){
            printf("%d ", *(a+i*(n+1)+j));
        }
    }
    free(a);
    return 0;
}
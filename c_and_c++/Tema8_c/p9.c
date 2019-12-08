//
// Created by Radu on 07/12/2019.
//

#include <stdio.h>
#include <stdlib.h>
//#/include <math.h>
//#/include <string.h>
#include <stdbool.h>

bool maimare(float *p,int m, int n, int i, int j){
    float med=0;
    int nr=0;

    if(i>0){
        med+=*(p+(i-1)*n+j);
        nr++;
    }
    if(j>0){
        med+=*(p+i*n+j-1);
        nr++;
    }
    if(i<m-1){
        med+=*(p+(i+1)*n+j);
        nr++;
    }
    if(j<n-1){
        med+=*(p+i*n+j+1);
        nr++;
    }
    med/=nr;
    if(*(p+i*n+j)>med){
        return true;
    }
    return false;
}

void tipar(float *buf, int n){
    int i;

    printf("\n");
    for(i=0;i<n;i++){
        printf("%g ", *(buf+i));
    }
}

void generare(float *p, int m, int n){
    int i,j,k=0;
    float *buf=NULL,
        *buf2;

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(maimare(p,m,n,i,j)){
                k++;
                if((buf2=(float*)realloc(buf, sizeof(float)*k))==NULL){
                    printf("Memorie insuficienta\n");
                    free(buf);
                    return;
                }
                buf=buf2;
                *(buf+k-1)=*(p+i*n+j);
            }
        }
    }
    tipar(buf,n);
    free(buf);
}

int main() {
    int i,j,m,n;
    float *a;

    printf("m = ");
    scanf("%d", &m);
    printf("n = ");
    scanf("%d", &n);
    if((a=(float*)malloc(m*n*sizeof(float)))==NULL){
        printf("Memorie insuficienta\n");
        exit(EXIT_FAILURE);
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%f", a+i*n+j);
        }
    }
    generare(a,m,n);
    free(a);
    return 0;
}
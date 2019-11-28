//
// Created by Radu on 27/11/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#/include <string.h>
//#/include <stdbool.h>

void prima(int *p,int n){
    int i,j;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            *(p+i*10+j)=-1;
        }
    }
}

void doua(int *p,int n){
    int i,j;

    for(i=0;i<n;i++){
        *(p+i*11)=0;
        *(p+9*i+n-1)=0;
    }
}

void treia(int *p,int n){
    int i,j;

    for(i=0;i<n/2;i++){
        for(j=i+1;j<n-i-1;j++){
            *(p+i*10+j)=1;
        }
    }
}

void patra(int *p,int n){
    int i,j;

    for(i=1;i<n-1;i++){
        for(j=n%2+n/2+abs(n/2-i);j<n;j++){
            *(p+i*10+j)=2;
        }
    }
}

void cincea(int *p,int n){
    int i,j;

    for(i=n/2+n%2;i<n;i++){
        for(j=n-i;j<i-1;j++){
            *(p+i*10+j)=3;
        }
    }
}

void sasea(int *p,int n){
    int i,j;

    for(i=1;i<n-1;i++){
        for(j=0;j<n%2+abs(n/2-i);j++){
            *(p+i*10+j)=4;
        }
    }
}

void saptea(int *p,int n){
    prima(p,n);
    doua(p,n);
    treia(p,n);
    patra(p,n);
    cincea(p,n);
    sasea(p,n);
}

void opta(int *p,int n){
    int i,j;

    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("%d ", *(p+i*10+j));
        }
    }
}

int main() {
    int n,a[10][10];

    printf("n = ");
    scanf("%d", &n);
    saptea(&a[0][0],n);
    opta(&a[0][0],n);
    return 0;
}
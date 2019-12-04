//
// Created by Radu on 30/11/2019.
//

#include <stdio.h>
#include <stdlib.h>
//#include <math.h>
//#include <string.h>
//#include <ctype.h>
//#/include <stdbool.h>

void prima(float *p,int m, int n){
    int i,j;
    float in=0;

    for(i=1;i<m-1;i++){
        for(j=1;j<n-1;j++){
            in+=*(p+10*i+j);
        }
    }
    printf("Suma este %.2f\n", in);
}

void doua(float *p,int m, int n){
    int i,j;
    float ex=0;

    for(i=0;i<n;i++){
        ex+=*(p+(m-1)*10+i)+*(p+i);
    }
    for(i=1;i<m-1;i++){
        ex+=*(p+i*10)+*(p+i*10+n-1);
    }
    ex/=2*(m+n-2);
    printf("Media aritmetica este %.2f\n", ex);
}

int main() {
    int n,m,i,j;
    float a[20][10],
        *p=&a[0][0];

    printf("m = ");
    scanf("%d", &m);
    printf("n = ");
    scanf("%d", &n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%f", p+10*i+j);
        }
    }
    prima(p,m,n);
    doua(p,m,n);
    return 0;
}
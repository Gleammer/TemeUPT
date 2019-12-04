//
// Created by Radu on 30/11/2019.
//

#include <stdio.h>
#include <stdlib.h>
//#/include <math.h>
//#/include <string.h>
//#/include <stdbool.h>

void princ(int *p, int n){
    int i,j;

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            *(p+20*i+j)+=*(p+20*j+i);
            *(p+20*j+i)=0;
        }
    }
}

void secund(int *p, int n){
    int i,j;

    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            *(p+i*20+j)+=*(p+20*(n-j-1)+n-i-1);
            *(p+20*(n-j-1)+n-i-1)=0;
        }
    }
}

void vert(int *p, int n){
    int i,j;

    for(i=0;i<n;i++){
        for(j=0;j<n/2;j++){
            *(p+20*i+j)+=*(p+20*i+n-j-1);
            *(p+20*i+n-j-1)=0;
        }
    }
}

int main(){
    //FILE *fr;
    //fr = fopen("input.in", "rt");
    int n,i,j,a[20][20],
        *p=&a[0][0];

    printf("n = ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", p+20*i+j);
        }
    }
    princ(p,n);
    secund(p,n);
    vert(p,n);
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("%d ", *(p+20*i+j));
        }
    }
    return 0;
}
//
// Created by Radu on 26/11/2019.
//

#include <stdio.h>
#include <stdlib.h>
//#/include <math.h>
//#/include <string.h>
//#/include <stdbool.h>

void citire(int *p,int n, int m){
    int i,j;

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d", p+50*i+j);
        }
    }
}

void afisare(int *p,int n, int m){
    int i,j;

    for(i=0;i<m;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("%d ", *(p+i*50+j));
        }
    }
}

int main() {
    int a[100][50],m,n;

    printf("n = ");
    scanf("%d", &n);
    printf("m = ");
    scanf("%d", &m);
    citire(&a[0][0],n,m);
    afisare(&a[0][0],n,m);
    return 0;
}
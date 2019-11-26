//
// Created by Radu on 26/11/2019.
//

#include <stdio.h>
#include <stdlib.h>
//#include <math.h>
//#include <string.h>
//#include <stdbool.h>

int vecini(int *p, int n){
    int k=0,i,j;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if((i==0||*(p+100*(i-1)+j)%2==0)&&
                (j==0||*(p+100*i+j-1)%2==0)&&
                (i==n-1||*(p+100*(i+1)+j)%2==0)&&
                (j==n-1||*(p+100*i+j+1)%2==0)){
                k++;
            }
        }
    }
    return k;
}

int main() {
    FILE *fr;
    fr = fopen("input.in","rt");
    int a[100][100],n,i,j,
        *p=&a[0][0];

    //printf("n = ");
    fscanf(fr,"%d", &n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            fscanf(fr, "%d", p+i*100+j);
        }
    }
    printf("Matricea are %d elemente care au ca vecini numai elemente numere pare", vecini(&a[0][0],n));
    return 0;
}
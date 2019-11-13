//
// Created by Radu on 08/11/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define max(x,y) ((x) >= (y)) ? (x) : (y)

int main(){
    float v[99];
    int i,j,n, *n1;

    n1=&n;
    printf("n = ");
    scanf("%d", n1);
    for(i=0;i<n;i++){
        printf("v[%d] = ", i);
        scanf("%f", v+i);
    }
    for(i=0;i<n-1;i++){
        if(*(v+i)-(*(v+i+1))<10){
            for(j=n;j>i;j--){
                *(v+j)=*(v+j-1);
            }
            *(v+i+1)=max(fabs(*(v+i+1)),fabs(*(v+i+2)));
            n++;
            i++;
        }
    }
    for(i=0;i<n;i++){
        printf("%g ", *(v+i));
    }
    return 0;
}
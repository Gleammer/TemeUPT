//
// Created by Radu on 25/11/2019.
//

#include <stdio.h>
#include <stdlib.h>

void srtFlt(float *x1, float *x2){
    float temp;
    scanf("%f%f", x1, x2);
    if(*x1>*x2){
        temp=*x1;
        *x1=*x2;
        *x2=temp;
    }
}

int main(){
    float a,b;

    printf("Citim 2 valori:\n");
    srtFlt(&a,&b);
    printf("%g %g", a, b);
    return 0;
}
//
// Created by Radu on 25/11/2019.
//

#include <stdlib.h>
#include <stdio.h>

void desOr(int x){
    int i;
    for(i=0;i<x;i++){
        printf("*");
    }
    printf("\n");
}
void desVe(int x){
    int i;

    printf("*");
    for(i=0;i<x-2;i++){
        printf(" ");
    }
    printf("*\n");
}

int main(){
    int n,i,j;

    printf("n = ");
    scanf("%d", &n);
    for(j=0;j<2;j++){
        desOr(n);
        for(i=0;i<(n-3)/2;i++){
            desVe(n);
        }
    }
    desOr(n);
    return 0;
}
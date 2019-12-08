//
// Created by Radu on 05/12/2019.
//

#include <stdio.h>
#include <stdlib.h>
//#/include <math.h>
#include <string.h>
//#/include <stdbool.h>

int * citire(int n){
    int i,
        *v;

    if((v=(int *)malloc(sizeof(int)*n))==NULL){
        printf("Nu poate fi alocata memorie\n");
        return NULL;
    }
    printf("Citim elementele vectorului cu %d elemente:\n", n);
    for(i=0;i<n;i++){
        scanf("%d", v+i);
    }
    return v;
}

int main() {
    int m,n,i,j,
        *v1,*v2;

    printf("m = ");
    scanf("%d", &m);
    printf("n = ");
    scanf("%d", &n);
    v1=citire(m);
    v2=citire(n);
    if(v2==NULL){
        free(v1);
        exit(EXIT_FAILURE);
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(*(v1+i)==*(v2+j)){
                printf("%d ", *(v1+i));
            }
        }
    }

    free(v1);
    free(v2);
    return 0;
}
//
// Created by Radu on 22/03/2020.
//

#include <stdio.h>
#include <stdlib.h>
//#/include <math.h>
//#/include <string.h>
//#/include <stdbool.h>

int cmp(const void * a, const void * b) {
    return ( *(float*)a - *(float*)b );
}

int main() {
    int n=0;
    float num[100],
        aux=1;
    FILE *fw;

    if((fw=fopen("out.txt","w"))==NULL){
        printf("eroare deschidere fisier\n");
        exit(EXIT_FAILURE);
    }
    scanf("%f", &aux);
    while(aux!=0){
        num[n]=aux;
        n++;
        scanf("%f", &aux);
    }
    qsort(num,n, sizeof(float),cmp);
    for(int i=0;i<n;i++){
        fprintf(fw, "%g|", num[i]);
    }

    fclose(fw);
    return 0;
}
//
// Created by Radu on 22/03/2020.
//

#include <stdio.h>
#include <stdlib.h>
//#/include <math.h>
//#/include <string.h>
//#/include <stdbool.h>

int main() {
    int m,n, *arr,*b,m1,n1,
        i,j;
    FILE *fis;

    if((fis=fopen("database.dat","w+"))==NULL){
        printf("Eroare, boss\n");
        exit(EXIT_FAILURE);
    }
    scanf("%d",&m);
    scanf("%d",&n);
    if((arr=(int*)malloc(sizeof(int)*m*n))==NULL){
        printf("Memorie insuficienta\n");
        fclose(fis);
        exit(EXIT_FAILURE);
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",arr+i*n+j);
        }
    }

    fwrite(&m,sizeof(int),1,fis);
    fwrite(&n,sizeof(int),1,fis);
    fwrite(arr,sizeof(int),m*n,fis);

    fread(&m1,sizeof(int),1,fis);
    fread(&n1,sizeof(int),1,fis);
    fread(b,sizeof(int)*m*n,1,fis);
    for(i=0;i<m1;i++) {
        for (j = 0; j < n1; j++) {
            printf("%d ", *(b + i * n1 + j));
        }
        printf("\n");
    }
    fclose(fis);
    return 0;
}
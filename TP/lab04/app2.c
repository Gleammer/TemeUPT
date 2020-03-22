//
// Created by Radu on 22/03/2020.
//

#include <stdio.h>
#include <stdlib.h>
//#/include <math.h>
//#/include <string.h>
//#/include <stdbool.h>

int main() {
    int i,j,m,n,*arr;
    FILE *fw;

    if((fw=fopen("out.txt","w"))==NULL){
        printf("eroare deschidere fisier\n");
        exit(EXIT_FAILURE);
    }
    scanf("%d",&m);
    scanf("%d",&n);
    if((arr=(int*)malloc(m*n*sizeof(int)))==NULL){
        printf("Bro, tu nu ai memorie :(\n");
        exit(EXIT_FAILURE);
    }
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d", arr+n*i+j);


    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            fprintf(fw,"%d ", *(arr+n*i+j));
        }
        fprintf(fw,"\n");
    }
    fprintf(fw,"\n");
    for(j=0;j<n;j++){
        for(i=0;i<m;i++){
            fprintf(fw,"%d ", *(arr+n*i+j));
        }
        fprintf(fw,"\n");
    }
    free(arr);
    fclose(fw);
    return 0;
}
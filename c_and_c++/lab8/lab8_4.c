//
// Created by Radu on 14/11/2019.
//
// QQ

#include <stdio.h>
#include <stdlib.h>

int main(){
    int m,a[50][50],i,j,
        *p;

    p=&a[0][0];
    printf("m = ");
    scanf("%d", &m);
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            scanf("%d", p+j*50+i);
        }
    }
    /*
    for(i=0;i<m;i++){
        for(j=i+1;j<n;j++){
            aux = *(p+i*50+j);
            *(p+i*50+j) = *(p+j*50+i);
            *(p+j*50+i) = aux;
        }
    }
     */
    printf("\n");
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            printf("%d ", *(p+i*50+j));
        }
        printf("\n");
    }
    return 0;
}
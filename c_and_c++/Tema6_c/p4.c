//
// Created by Radu on 30/11/2019.
//

#include <stdio.h>
#include <stdlib.h>
//#/include <math.h>
//#/include <string.h>
//#/include <stdbool.h>

void schimb(int *p, int n){
    int i,j,aux;

    for(i=0;i<n;i++){
        for(j=0;j<n/2;j++){
            aux=*(p+10*i+j);
            *(p+10*i+j)=*(p+10*i+n-1-j);
            *(p+10*i+n-1-j)=aux;
        }
    }
}

int main() {
    int i,j,n,a[10][10],
        *p=&a[0][0];

    printf("n = ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", p+10*i+j);
        }
    }
    schimb(p,n);
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("%d ", *(p+10*i+j));
        }
    }
    return 0;
}
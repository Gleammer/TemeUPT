//
// Created by Radu on 18/11/2019.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    int m,n, v1[20],v2[10],a[10][20],i,j,
        *p;

    p=&a[0][0];
    printf("m = ");
    scanf("%d", &m);
    printf("n = ");
    scanf("%d", &n);
    printf("Citim elementele vectorului 1:\n");
    for(i=0;i<n;i++) {
        scanf("%d", v1+i);
    }
    printf("Citim elementele vectorului 2:\n");
    for(i=0;i<m;i++){
        scanf("%d", v2+i);
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            *(p+i*20+j)=*(v1+j) * *(v2+i);
        }
    }
    printf("----------\n");
    for(i=0;i<n;i++){
        printf("%d ", *(v1+i));
    }
    printf("\n----------");
    for(i=0;i<m;i++){
        printf("\n%d", *(v2+i));
    }
    printf("\n----------");
    for(i=0;i<m;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("%d ", *(p+i*20+j));
        }
    }
    return 0;
}
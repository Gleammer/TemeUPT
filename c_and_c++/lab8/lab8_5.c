//
// Created by Radu on 14/11/2019.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    int m,n,a[20][20],v1[20],v2[20],
        *p,i,j;

    p=&a[0][0];
    v11=v1;
    v22=v2;
    printf("m = ");
    scanf("%d", &m);
    printf("n = ");
    scanf("%d", &n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d", p+i*20+j);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            *(v1+i)+=*(p+i*20+j);
            *(v2+j)+=*(p+i*20+j);
        }
    }
    printf("\n");
    for(i=0;i<m;i++){
        printf("%d ", *(v1+i));
    }
    printf("\n");
    for(i=0;i<n;i++){
        printf("%d ", *(v2+i));
    }
    return 0;
}
//
// Created by Radu on 14/11/2019.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j,m,n,a[20][10],
        *p,k=1;

    p=&a[0][0];
    printf("m = ");
    scanf("%d", &m);
    printf("n = ");
    scanf("%d", &n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            *(p+i*10+j)=k;k++;
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ", *(p+i*10+j));
        }
        printf("\n");
    }
    return 0;
}
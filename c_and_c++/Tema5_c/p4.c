//
// Created by Radu on 18/11/2019.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    int m,i,j,a[50][50],
        *p=&a[0][0];

    printf("m = ");
    scanf("%d", &m);
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            scanf("%d", p+i*50+j);
            *(p+i*50+j)+=i+j;
        }
    }
    for(i=0;i<m;i++){
        printf("\n");
        for(j=0;j<m;j++){
            printf("%d ", *(p+50*i+j));
        }
    }
    return 0;
}
//
// Created by Radu on 14/11/2019.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[9][9],n,i,j,
        *p;

    p=&a[0][0];
    printf("n = ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", p+i*9+j);
        }
    }
    for

    return 0;
}
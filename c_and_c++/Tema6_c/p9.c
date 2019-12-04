//
// Created by Radu on 04/12/2019.
//

#include <stdio.h>
#include <stdlib.h>
//#/include <math.h>
//#/include <string.h>
//#/include <stdbool.h>

void insert(unsigned int *p, int i, int x){
    *p=*p|(x<<i);
}

void show(unsigned int *p, int i){
    printf("%d", (*p>>i)&1);
}

int main() {
    int n,i,j,x;
    unsigned int v[10],
        *p=v;

    printf("n = ");
    scanf("%d", &n);
    for(i=0;i<=n/32;i++){
        *(p+i)=0; //initiere
    }
    for(i=0;i<n;i++){
        scanf("%d", &x);
        insert(p+i/32,i%32,x);
    }
    if(n%32){
        for(i=0;i<=n/32;i++){
            for(j=0;j<32;j++){
                show(p+i,j);
            }
            printf("\n");
        }
    }
    return 0;
}
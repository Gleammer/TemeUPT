//
// Created by Radu on 19/11/2019.
//

#include <stdio.h>
#include <stdlib.h>

unsigned schimb(unsigned x, int a, int b){
    int i;
    for(i=0;i<=a;i++) {
        x=x|(1<<i);
    }
    for(i=a+1;i<b;i++){
        x=x^(1<<i);
    }
    for(i= sizeof(x)*8-1;i>=b;i--){
        x=x&(~(1>>i));
    }
    return x;
}

int main(){
    unsigned a[16][16],y,
        *p=&a[0][0];
    int m,i,j;

    printf("m = ");
    scanf("%d", &m);
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            scanf("%u", &y);
            if(i<j){
                *(p+i*16+j)=schimb(y,i,j);
            } else {
                *(p+i*16+j)=schimb(y,j,i);
            }
        }
    }
    for(i=0;i<m;i++){
        printf("\n");
        for(j=0;j<m;j++){
            printf("%d ", *(p+i*16+j));
        }
    }
    return 0;
}
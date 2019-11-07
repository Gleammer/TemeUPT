//
// Created by Radu on 07/11/2019.
//

#include <stdlib.h>
#include <stdio.h>

int main(){
    char v[8],
        x=0;
    int i,aux;

    for(i=0;i<8;i++){
        printf("v[%d] = ",i);
        scanf("%d", &aux);
        v[i]=aux;
    }
    for(i=0;i<8;i++){
        x*=2;
        x+=1&(v[i]>>2);
    }
    printf("%d", x);
    return 0;
} //10, 76, 45, 89, 2, 199, 231 și 33.
//10, 76, 45, 89, 6, 199, 231 și 33
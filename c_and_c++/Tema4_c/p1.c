//
// Created by Radu on 07/11/2019.
//

#include <stdlib.h>
#include <stdio.h>

int main(){
    unsigned x;
    int i,k;

    for(;;){
        printf("x = ");
        scanf("%u", &x);
        if(x==0){
            break;
        }
        for(i=0;i<sizeof(x)*8;i++){
            k+=((x>>i)&1);
        }
    }
    if(k%2){
        printf("impar");
    } else {
        printf("par");
    }
    return 0;
}
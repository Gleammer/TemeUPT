//
// Created by Radu on 04/12/2019.
//

#include <stdio.h>
#include <stdlib.h>
//#/include <math.h>
//#/include <string.h>
//#/include <stdbool.h>

unsigned int schimb(unsigned int x){
    int i;

    if(x%2==0){
        for(i=sizeof(x)*8-1;i>7;i--){
            x=x|(1<<i);
        }
    }
    return x;
}

int main() {
    int n,i;
    unsigned int v[20],
        *p=v;

    printf("n = ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%u", p+i);
    }
    for(i=0;i<n;i++){
        *(p+i)=schimb(*(p+i));
    }
    for(i=0;i<n;i++){
        printf("%u ", *(p+i));
    }
    return 0;
}
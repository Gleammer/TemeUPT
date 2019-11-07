//
// Created by Radu on 07/11/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int main(){
    int v[]={7, -5, 4, 3, -9, -2, -8, 42},
        k=0,i;
    size_t n = sizeof(v)/ sizeof(*v);

    for(i=0;i<n;i++){
        if(*(v+i)<0){
            k++;
        }
    }
    printf("%d\n", k);
    return 0;
}
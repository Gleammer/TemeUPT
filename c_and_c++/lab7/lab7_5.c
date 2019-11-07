//
// Created by Radu on 07/11/2019.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    int v[]={7, -5, 4, 3, -9, -2, -8, 42},
            min,i;
    size_t n = sizeof(v)/ sizeof(*v);

    min=*v;
    for(i=1;i<n;i++){
        if(*(v+i)<min){
            min=*(v+i);
        }
    }
    printf("%d\n", min);
    return 0;
}
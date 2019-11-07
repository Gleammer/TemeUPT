//
// Created by Radu on 07/11/2019.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    int v[14]={7, -5, 4, 3, -9, 2, -8},i,j,n;
    //size_t n = sizeof(v)/ sizeof(*v);

    n=7;
    for(i=0;i<n;i++){
        for(j=n;j>i;j--){
            *(v+j)=*(v+j-1);
        }
        *(v+i)=-(*(v+i));
        n++;
        i++;
    }
    for(i=0;i<n;i++){
        printf("%d ", *(v+i));
    }
    return 0;
}
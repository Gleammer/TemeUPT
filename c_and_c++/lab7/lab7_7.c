//
// Created by Radu on 07/11/2019.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    int v[]={5, 8, -1, 4, -2, 6, 9, -42, 16, 88, 225, -11, 0},
            i,j;
    size_t n = sizeof(v)/ sizeof(*v);

    for(i=0;i<n;i++){
        if(!(*(v+i)%2)){
            for(j=i;j<n-1;j++){
                *(v+j)=*(v+j+1);
            }
            n--;
            i--;
        }
    }
    for(i=0;i<n;i++){
        printf("%d ", *(v+i));
    }
    return 0;
}
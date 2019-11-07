//
// Created by Radu on 08/11/2019.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned v[20];
    int i,j,n;

    printf("n = ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("v[%d] = ", i);
        scanf("%u", v+i);
    }
    for(i=0;i<n;i++){
        if(!(*(v+i)%2)){
            for(j=sizeof(*(v+i))*8-1;j>7;j--){
                *(v+i)=*(v+i)|(1 << j);
            }
        }
        printf("%u ", *(v+i));
    }
    return 0;
}
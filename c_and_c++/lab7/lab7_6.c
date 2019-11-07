//
// Created by Radu on 07/11/2019.
//

#include <stdio.h>
#include <stdlib.h>
int main(){
    int v[10],
        n,i,s,aux;

    printf("n = ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        printf("v[%d] = ", i);
        scanf("%d", (v+i));
    }
    do{
        s=0;
        for(i=0;i<n-1;i++){
            if(*(v+i)<*(v+i+1)){
                aux=*(v+i);
                *(v+i)=*(v+i+1);
                *(v+i+1)=aux;
                s=1;
            }
        }
    } while (s);
    for(i=0;i<n;i++){
        printf("%d ", *(v+i));
    }
    return 0;
}
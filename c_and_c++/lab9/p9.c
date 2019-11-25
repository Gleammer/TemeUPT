//
// Created by Radu on 26/11/2019.
//

#include <stdio.h>
#include <stdlib.h>

void min_max(int *p, int n){
    int i,min_i=0,max_i=0;

    for(i=1;i<n;i++){
        if(*(p+i)>*(p+max_i)){
            max_i=i;
        }
        if(*(p+i)<*(p+min_i)){
            min_i=i;
        }
    }
    printf("Minimul are indicele: %d\nMaximul are indicele: %d", min_i,max_i);
}


int main() {
    int n,v[100],i;

    printf("Numarul de elemente din vector = ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", v+i);
    }
    min_max(v,n);
    return 0;
}
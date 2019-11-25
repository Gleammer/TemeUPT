//
// Created by Radu on 25/11/2019.
//

#include <stdio.h>
#include <stdlib.h>

void citire(int *p, int n){
    int i;

    for(i=0;i<n;i++){
        scanf("%d", p+i);
    }
}

int egal(int *v1, int *v2, int n){
    int i;

    for(i=0;i<n;i++){
        if(*(v1+i)!=*(v2+i)){
            return 0;
        }
    }
    return 1;
}

int main(){
    int v1[9],v2[9],n;

    printf("n = ");
    scanf("%d", &n);
    citire(v1,n);
    citire(v2,n);
    if(egal(v1,v2,n)){
        printf("Sunt egale");
    } else {
        printf("Nu sunt egale");
    }
    return 0;
}
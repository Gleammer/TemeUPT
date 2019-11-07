//
// Created by Radu on 07/11/2019.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    int v[200],v1[200],v2[200],v3[200],
        i,n, *p1, *p2, *p3;

    p1=v1;p2=v2;p3=v3;
    printf("n = ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        printf("v[%d] = ", i);
        scanf("%d", v+i);
    }
    for(i=0;i<n;i++){
        if(*(v+i)%2){
            *p1=*(v+i);
            p1++;
        } else {
            *p2=*(v+i);
            p2++;
        }
    }
    i=j=0;
    while(i<p1-v1 || i<p2-v2){
        if(i<p1-v1){
            *p3=*(v1+i);
            p3++;
        }
        if(i<p2-v2){
            *p3=*(v2+i);
            p3++;
        }
        i++;
    }
    for(i=0;i<n;i++){
        printf("%d ", *(v3+i));
    }
    return 0;
} //v=[8,7,9,0,2,4,1,5,3,6]
//v=[8,7,9,1,3,4,1,5,3,6]
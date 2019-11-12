//
// Created by Radu on 08/11/2019.
//

#include <stdlib.h>
#include <stdio.h>

int main(){
    int a[50],b[50],
        n,m, *n1=&n, *m1=&m,i,j,k=0;

    printf("n = ");
    scanf("%d", n1);
    for(i=0;i<n;i++){
        printf("a[%d] = ", i);
        scanf("%d", a+i);
    }
    printf("m = ");
    scanf("%d", m1);
    for(i=0;i<m;i++){
        printf("b[%d] = ", i);
        scanf("%d", b+i);
    }
    if(n != m){
        printf("Vectori diferiti.");
    } else {
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(*(a+i) == *(b+j)){
                    k++;
                }
            }
        }
        if(k==n){
            printf("Vectorii contin aceleasi elemente.");
        } else {
            printf("Vectori diferiti.");
        }
    }
    return 0;
}
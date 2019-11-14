//
// Created by Radu on 14/11/2019.
//

#include <stdlib.h>
#include <stdio.h>

int main(){
    int i,j,n,s=0,a[10][10];

    printf("n = ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if((i!=j && a[i][j]!=0) || (i==j && a[i][j]!=1)){
                s=1;break;
            }
        }
        if(s){
            break;
        }
    }
    if(s){
        printf("Nu e matrice unitate");
    } else {
        printf("Este o matrice unitate");
    }
    return 0;
}
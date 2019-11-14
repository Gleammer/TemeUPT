//
// Created by Radu on 14/11/2019.
//

#include <stdlib.h>
#include <stdio.h>

int main(){
    int m,n,a[10][10],i,j;

    printf("m = ");
    scanf("%d", &m);
    printf("n = ");
    scanf("%d", &n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i>j){
                a[i][j]=i;
            } else {
                a[i][j]=j;
            }
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
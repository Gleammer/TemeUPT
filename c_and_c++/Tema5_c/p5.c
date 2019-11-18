//
// Created by Radu on 18/11/2019.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    int m,i,j,a[20][20],
        *p=&a[0][0];

    printf("m = ");
    scanf("%d", &m);
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            scanf("%d", p+i*20+j);
            if(i==j){
                *(p+i*20+j)*=*(p+i*20+j);
            } else if(i<j){
                *(p+i*20+j)+=20;
            } else {
                *(p+i*20+j)-=10;
            }
        }
    }
    for(i=0;i<m;i++){
        printf("\n");
        for(j=0;j<m;j++){
            printf("%d ", *(p+i*20+j));
        }
    }
    return 0;
}
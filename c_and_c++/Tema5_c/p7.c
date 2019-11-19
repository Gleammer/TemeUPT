//
// Created by Radu on 19/11/2019.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,a[10][10],i,j,
        *p=&a[0][0];

    printf("n = ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", p+i*10+j);
        }
    }
    for(i=0;i<n;i++){
        *(p+i*9+n-1)*=*(p+i*11);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            *(p+i*10+j)+=*(p+(n-1-j)*10+(n-1-i));
            *(p+(n-1-j)*10+(n-1-i))=*(p+i*10+j);
        }
    }
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("%d ", *(p+i*10+j));
        }
    }
    return 0;
}
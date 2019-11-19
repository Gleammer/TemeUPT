//
// Created by Radu on 19/11/2019.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,a[255][255],i,j,
        *p=&a[0][0];

    printf("n = ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", p+i*255+j);
            if((i+j)%2==0){
                *(p+i*255+j)=0;
            } else if((i+j+*(p+i*255+j))%2==0){
                *(p+i*255+j)=1;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("%d ", *(p+i*255+j));
        }
    }
    return 0;
}
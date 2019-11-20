//
// Created by Radu on 18/11/2019.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, a[100][100],s=0,t=1,i,j,
        *p;

    p=&a[0][0];
    printf("n = ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", p+100*i+j);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(*(p+100*i+j)>=0){
                s+=*(p+100*i+j);
            } else {
                t*=*(p+100*i+j);
            }
        }
    }
    printf("Suma = %d\nProdus = %d", s, t);
    return 0;
}
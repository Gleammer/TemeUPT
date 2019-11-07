//
// Created by Radu on 07/11/2019.
//

#include <stdlib.h>
#include <stdio.h>

int main(){
    int v[9],
        *p,i,j,k,n,s;

    p=v;
    printf("n = ");
    scanf("%d", &n);
    if(n==0){
        printf("Nu se introduc valori");
    } else {
        for (i=0;i<n;i++) {
            printf("v[%d]=", i);
            scanf("%d", v+i);
        }
        for(i=0;i<n;i++){
            s=0;
            for(j=i+1;j<n;j++){
                if(*(v+i)==*(v+j)){
                    for(k=j;k<n-1;k++){
                        *(v+k)=*(v+k+1);
                    }
                    j--;
                    n--;
                    s=1;
                }
            }
            if(s==0){
                for(k=i;k<n-1;k++){
                    *(v+k)=*(v+k+1);
                }
                i--;
                n--;
            }
        }
        for(i=0;i<n;i++){
            printf("%d ", *(v+i));
        }
    }
}
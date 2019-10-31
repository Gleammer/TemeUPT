#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float v[5],f;
    int n,i,k=0;

    printf("n = ");
    scanf("%d", &n);
    if(n==0){
        printf("Vector vid");
    } else {
        for(i=0;i<n;i++){
            printf("v[%d] = ", i);
            scanf("%f", &f);
            if(abs(f)>10){
                v[k]=f;
                k++;
            }
        }
        for(i=0;i<k;i++){
            printf("%g ", v[i]);
        }
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int divide_by_16(int x){
    int i,y=0;

    for(i=sizeof(x)*8-1;i>=4;i--){
        y=y*2;
        y=y|(x>>i);
    }
    return y;
}

int main(){
    int v[50],v2[50],
        i,n;

    printf("n = ");
    scanf("%d", &n);
    if(n==0){
        printf("Vector vid");
    } else {
        for(i=0;i<n;i++){
            printf("v[%d]=", i);
            scanf("%d", &v[i]);
        }
        for(i=0;i<n;i++){
            v2[i]=divide_by_16(v[i]);
        }
        for(i=0;i<n;i++){
            printf("%d ", v2[i]);
        }
    }
    return 0;
}

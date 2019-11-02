#include <stdio.h>
#include <stdlib.h>

void changer(unsigned int x, unsigned int y){
    int i,j,k=0;

    for(i=sizeof(x)*8-1;i>=0;i--){
        printf("%d", (x>>i)&1);
        if((x>>i)&1){
            k++;
        }
    }
    printf(" ");
    for(i=sizeof(y)*8-1;i>=0;i--){
        printf("%d", (y>>i)&1);
    }
    for(j=0;j<k;j++){
        y=y|(1<<j);
    }
    printf(" ");
    for(i=sizeof(y)*8-1;i>=0;i--){
        printf("%d", (y>>i)&1);
    }
}

int main(){
    unsigned int v[20];
    int i,n;

    printf("n = ");
    scanf("%d", &n);
    n*=2;
    if(n==0){
        printf("Vector vid");
    } else {
        for(i=0;i<n;i++){
            printf("v[%d]=", i);
            scanf("%u", &v[i]);
        }
        for(i=0;i<n;i+=2){
            changer(v[i],v[i+1]);
            printf("\n");
        }
    }
    return 0;
}

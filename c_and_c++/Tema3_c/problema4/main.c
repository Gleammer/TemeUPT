#include <stdio.h>
#include <stdlib.h>

void create_y(int x){
    int i,k=0,y=0;

    for(i=sizeof(x)*8-1;i>=0;i--){
        if((x>>i)&1){
            y=y|(1<<k);
            k++;
        }
        printf("%d", (x>>i)&1);
    }
    printf(" ");
    for(i=sizeof(y)*8-1;i>=0;i--){
        printf("%d", (y>>i)&1);
    }
}

int main(){
    int v[100],
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
            create_y(v[i]);
            printf("\n");
        }
    }
    return 0;
}

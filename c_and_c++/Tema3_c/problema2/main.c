#include <stdio.h>
#include <stdlib.h>

void to_base_8(unsigned int x){
    int k[12],
        i=0,j;
    do{
        k[i]=x%8;
        x/=8;
        i++;
    } while(x!=0);
    for(j=i-1;j>=0;j--){
        printf("%d",k[j]);
    }
}

void to_base_16(unsigned int x){
    int k[9],
        i=0,j;
    do{
        k[i]=x%16;
        x/=16;
        i++;
    } while(x!=0);
    for(j=i-1;j>=0;j--){
        if(k[j]<10){
            printf("%d",k[j]);
        } else {
            printf("%c",k[j]+55);
        }
    }
}

void to_base_2(unsigned int x){
    int i;

    for(i=sizeof(x)*8-1;i>=0;i--){
        printf("%d", (x>>i)&1);
    }
}

int main(){
    unsigned int v[25];
    int i,n;

    printf("n = ");
    scanf("%d", &n);
    if(n==0){
        printf("Vector vid");
    } else {
        for(i=0;i<n;i++){
            printf("v[%d] = ", i);
            scanf("%u", &v[i]);
        }
        for(i=0;i<n;i++){
            printf("%d ", v[i]);
            to_base_8(v[i]);
            printf(" ");
            to_base_16(v[i]);
            printf(" ");
            to_base_2(v[i]);
            printf("\n");
        }
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int v[10],
        n,i;
    bool k=false;

    printf("n = ");
    scanf("%d", &n);
    if(n==0){
        printf("Lista vida");
    } else {
        for(i=0;i<n;i++){
            printf("v[%d] = ",i);
            scanf("%d", &v[i]);
            if(v[i]>=0 && v[i]%2==1){
                k=true;
            }
        }
        if(!k){
            printf("Toate valorile pozitive sunt pare.");
        } else {
            printf("Nu toate valorile pozitive sunt pare.");
        }
    }
    return 0;
}

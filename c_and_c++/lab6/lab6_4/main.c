#include <stdio.h>
#include <stdlib.h>

int main(){
    int v[]= {7, -5, 4, 3, -9, 2, -8},
        k,i,n=7;

    printf("k = ");
    scanf("%d", &k);
    for(i=0;i<n;i++){
        if(v[i]>k){
            break;
        }
    }
    if(i<n){
        printf("Exista cel putin un element mai mare decat k");
    } else {
        printf("Nu exista nici un element mai mare decat k");
    }
    return 0;
}

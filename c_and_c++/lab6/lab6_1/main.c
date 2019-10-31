#include <stdio.h>
#include <stdlib.h>

int main(){
    int v[]={7, -5, 4, 3, -9, 2, -8},
        n=7,k=0,i;

    for(i=0;i<n;i++){
        if(v[i]<0){
            k++;
        }
    }
    printf("%d", k);
    return 0;
}

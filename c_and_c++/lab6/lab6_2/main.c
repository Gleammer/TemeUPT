#include <stdio.h>
#include <stdlib.h>

int main(){
    int v[]={7, -5, -14, 3, -9, 2, -8},
        i,n=7,imax=v[0];

    for(i=1;i<n;i++){
        if(v[i]<imax){
            imax=v[i];
        }
    }
    printf("%d", imax);
    return 0;
}

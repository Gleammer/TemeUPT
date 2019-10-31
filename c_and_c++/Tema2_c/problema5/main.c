#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    unsigned long int n;
    unsigned k=0,i,j;

    printf("n = ", n);
    scanf("%lu", &n);
    for(i=sizeof(n);i>0;i--){
        for(j=1;j<=8;j++){
            if(j!=8){
                k+=pow(2*((n>>(i*8-j))&1),8-j);
            } else{
                k+=(n>>(i*8-j))&1;
            }
        }
        printf("%d\n", k);
        k=0;
    }
    return 0;
}

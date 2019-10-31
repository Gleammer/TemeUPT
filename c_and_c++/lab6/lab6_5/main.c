#include <stdio.h>
#include <stdlib.h>

int main(){
    int v[]={7, -5, 4, 3, -9, 2,-8},
        n=7,min,i,x,y;

    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);
    min=y+1;
    for(i=0;i<n;i++){
        if(v[i]<min&&v[i]<=y&&v[i]>=x){
            min=v[i];
        }
    }
    if(min==y+1){
        printf("Nu exista elemente in acest interval");
    } else {
        printf("%d\n", min);
    }
    return 0;
}

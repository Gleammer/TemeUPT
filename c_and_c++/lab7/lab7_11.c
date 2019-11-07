//
// Created by Radu on 07/11/2019.
//

#include <stdio.h>

int main(){
    int v[100],
        *p,i,j,x;

    p=v;
    for(;;){
        printf("x = ");
        scanf("%d", &x);
        if(x==0){
            break;
        }
        i=0;
        while(*(v+i)<x && v+i<p){
            i++;
        }
        for(j=p-v;j>i;j--){
            *(v+j)=*(v+j-1);
        }
        *(v+i)=x;
        p++;
        for(i=0;i<p-v;i++){
            printf("%d ", *(v+i));
        }
        printf("\n");
    }
    return 0;
}
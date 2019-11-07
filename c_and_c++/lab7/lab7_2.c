//
// Created by Radu on 07/11/2019.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,*p;

    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    if(a>b){
        p=&a;
    } else {
        p=&b;
    }
    printf("%d", *p);
    return 0;
}
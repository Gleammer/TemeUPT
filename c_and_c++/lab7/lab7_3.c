//
// Created by Radu on 07/11/2019.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a=42,b=22,aux,*p=&a,*q=&b;

    aux=*p;
    *p=*q;
    *q=aux;
    printf("a=%d si b=%d\n", a,b);
    return 0;
}
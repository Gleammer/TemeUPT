//
// Created by Radu on 25/11/2019.
//

#include <stdlib.h>
#include <stdio.h>

int cmmdc(int a, int b){
    if(a==b){
        return a;
    } else if(a>b){
        return cmmdc(a-b,b);
    } else {
        return cmmdc(a,b-a);
    }
} //Doar ca e putin optimizat
// Pentru teste a=1000000 si b=1 necesita prea multa memorie
// Mai eficient ar fi sa folosim formula lui Euclid

int main(){
    int a,b;

    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("%d",cmmdc(a,b));
    return 0;
}
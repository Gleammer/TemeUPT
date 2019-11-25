//
// Created by Radu on 26/11/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int ack(int a, int b){
    if(a==0){
        return b+1;
    } else if(a>0 && b==0){
        return ack(a-1,1);
    } else {
        return ack(a-1,ack(a,b-1));
    }
}

int main() {
    int a,b;

    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("%d",ack(a,b));
    return 0;
}
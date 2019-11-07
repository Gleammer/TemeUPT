//
// Created by Radu on 07/11/2019.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    double a,b;

    if(&a < &b){
        printf("a");
    } else {
        printf("b");
    }
    return 0;
}
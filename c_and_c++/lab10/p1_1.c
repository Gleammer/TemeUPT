//
// Created by Radu on 28/11/2019.
//

#include <stdio.h>
#include <stdlib.h>
//#/include <math.h>
//#/include <string.h>
//#/include <stdbool.h>

int main() {
    char c;

    scanf("%c", &c);
    if(c-48<10 && c-48>=0){
        printf("Cifra\n");
    } else if(c>=97 && c<=122){
        printf("E o litera mica; forma sa mare - %c\n", c-32);
    } else if(c>=65 && c<=90){
        printf("E o litera mare\n");
    } else {
        printf("E altceva\n");
    }
    return 0;
}
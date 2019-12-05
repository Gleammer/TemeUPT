//
// Created by Radu on 04/12/2019.
//
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//#/include <math.h>
#include <string.h>
//#/include <stdbool.h>

void how_many(char *p,char c){
    int i=0;

    printf("%c:  ", c);
    while(*(p+i)){
        if(*(p+i)==c){
            printf("*");
        }
        i++;
    }
    printf("\n");
}

int main() {
    char s[81],
        *p=s;

    printf("Introduceti stringul:\n");
    fgets(s,80,stdin);
    how_many(p,97);
    how_many(p,101);
    how_many(p,105);
    how_many(p,111);
    how_many(p,117);
    return 0;
}
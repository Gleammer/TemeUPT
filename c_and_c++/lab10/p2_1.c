//
// Created by Radu on 28/11/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//#/include <math.h>
#include <string.h>
//#/include <stdbool.h>

int main() {
    char c[256];
    int i;

    printf("Citim un sir de caractere:\n");
    fgets(c,255,stdin);
    for(i=0;c[i];i++){
        c[i]=toupper(c[i]);
    }
    printf("%s\n", c);
    return 0;
}
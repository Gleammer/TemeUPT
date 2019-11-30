//
// Created by Radu on 28/11/2019.
//

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
//#/include <math.h>
#include <string.h>
//#/include <stdbool.h>

int main() {
    char s[256];
    int i;

    printf("Citim o propozitie:\n");
    fgets(s,255,stdin);
    for(i=0;s[i];i++){
        if(!isalpha(s[i-1])){
            s[i] = toupper(s[i]);
        }
    }
    printf("Sirul obtinut:\n%s", s);
    return 0;
}
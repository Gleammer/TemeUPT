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
    int v[65],i,j;

    printf("Citim sirul:\n");
    fgets(s,255,stdin);
    strcpy(&s[strlen(s)-1],"\0");
    for(i=0;s[i+1];i++){
        for(j=i+1;s[j];j++){
            
        }
    }
    return 0;
}
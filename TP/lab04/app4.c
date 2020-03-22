//
// Created by Radu on 22/03/2020.
//

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
//#/include <math.h>
//#/include <string.h>
//#/include <stdbool.h>

int main() {
    char c;
    FILE *fr;
    int i,arr[26];

    for(i=0;i<26;i++)
        arr[i]=0;
    if((fr=fopen("in1.txt","r"))==NULL){
        printf("eroare deschidere fisier\n");
        exit(EXIT_FAILURE);
    }
    c=getc(fr);
    while (c != EOF) {
        if(isalpha(c))
            arr[toupper(c)-65]++;
        c = getc(fr);
    }
    fclose(fr);
    for(i=0;i<26;i++)
        printf("%c apare de %d ori\n",i+65,arr[i]);
    return 0;
}
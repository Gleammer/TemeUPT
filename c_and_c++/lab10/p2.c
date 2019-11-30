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
    int n,i,l_max=0;
    char s[10][30], aux[30];

    printf("n = ");
    scanf("%d", &n);
    getchar();
    for(i=0;i<n;i++){
        fgets(s[i],29,stdin);
    }
    for(i=0;i<n;i++){
        if(strlen(s[i])>l_max){
            l_max=strlen(s[i]);
            strcpy(aux,s[i]);
        }
    }
    printf("Cel mai lung sir este:\n%s\nSi are %d caractere", aux, l_max-1);
    return 0;
}
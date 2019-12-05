//
// Created by Radu on 04/12/2019.
//

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
//#/include <math.h>
#include <string.h>
//#/include <stdbool.h>

void unic(char *str){
    int x[52],i;

    for(i=0;i<52;i++){
        x[i]=0;
    }
    for(i=0;i<strlen(str);i++){
        if(isupper(*(str+i)) && !*(x+*(str+i)-65)){
            printf("%c",*(str+i));
            *(x+*(str+i)-65)=1;
        } else if(islower(*(str+i)) && !*(x+*(str+i)-71)){
            printf("%c",*(str+i));
            *(x+*(str+i)-71)=1;
        }
    }
}

int main() {
    char str[101];

    printf("Introduceti un string:\n");
    fgets(str,100,stdin);
    unic(str);
    return 0;
}
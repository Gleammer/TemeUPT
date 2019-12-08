//
// Created by Radu on 07/12/2019.
//

#include <stdio.h>
#include <stdlib.h>
//#/include <math.h>
#include <string.h>
//#/include <stdbool.h>

int main() {
    char str[20];


    fgets(str,10,stdin);
    *(str+strlen(str)-1)='\0';
    if(!strcmp(str,"gata")){
        printf("Da, functioneaza\n");
    }
    return 0;
}
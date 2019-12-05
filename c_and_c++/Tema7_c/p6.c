//
// Created by Radu on 03/12/2019.
//

#include <stdio.h>
#include <stdlib.h>
//#/include <math.h>
#include <string.h>
#include <ctype.h>
//#/include <stdbool.h>

void oper(char *str){
    int i,k=0,n;

    printf("n = ");
    scanf("%d", &n);
    getchar();
    for(;;){
        printf("Introduceti un sir:\n");
        fgets(str,200,stdin);
        if(!strcmp(str,"\n")){
            break;
        }
        for(i=0;i<strlen(str);i++){
            if(isalpha(*(str+i))){
                if(k<n){
                    printf("%c", *(str+i));
                    k++;
                }
            } else {
                printf("%c", *(str+i));
                k=0;
            }
        }
    }
}

int main(){
    char str[201];

    oper(str);
    return 0;
}

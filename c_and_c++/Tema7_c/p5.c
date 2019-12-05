//
// Created by Radu on 03/12/2019.
//

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
//#/include <math.h>
#include <string.h>
//#/include <stdbool.h>

char * inject(char *p, int poz, int lun){
    int i,j;

    for(i=poz;i<strlen(p)-lun;i++){
        *(p+i)=*(p+i+lun);
    }
    *(p+i-1)='\0';
    return p;
}

char * alt_inject(char *p, int poz, char *str){
    int i,j;

    for(i=strlen(p)+strlen(str)-1;i>poz+strlen(str)-1;i--){
        *(p+i)=*(p+i-strlen(str));
    }
    for(i=poz;i<poz+strlen(str);i++){
        *(p+i)=*(str+i-poz);
    }
    return p;
}

void inlocuire(char *p){
    char init[31],after[31],
        *a;

    //citire
    printf("Ce cuvant doriti sa inlocuiti:\n");
    fgets(init,30,stdin);
    printf("Ce cuvant doriti sa-l inlocuiasca:\n");
    fgets(after,30,stdin);

    *(p+strlen(p)-1)='\0';
    *(init+strlen(init)-1)='\0'; //scoatem acel "\n" din stringuri
    *(after+strlen(after)-1)='\0';
    while(strstr(p,init)){
        a=strstr(p,init);
        inject(p,a-p,strlen(init));
        alt_inject(p,a-p,after);
    }
    printf("%s\n", p);
}

int main() {
    char s[201];

    printf("Introduceti un sir:\n");
    fgets(s,100,stdin);
    inlocuire(s);
    return 0;
}
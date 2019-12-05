//
// Created by Radu on 04/12/2019.
//

#include <stdio.h>
#include <stdlib.h>
//#/include <math.h>
#include <string.h>
#include <ctype.h>
//#/include <stdbool.h>

char * alt_inject(char *p, int poz, char *str){
    int i,j;

    *(str+strlen(str)-1)='\0'; //scoatem acel "\n" din string
    *(p+strlen(p)-1)='\0';

    for(i=strlen(p)+strlen(str)-1;i>poz+strlen(str)-1;i--){
        *(p+i)=*(p+i-strlen(str));
    }
    for(i=poz;i<poz+strlen(str);i++){
        *(p+i)=*(str+i-poz);
    }
    return p;
}

int main() {
    int i;
    char s[201],str[101];

    printf("Introduceti un sir:\n");
    fgets(s,100,stdin);
    printf("Pozitie: ");
    scanf("%d", &i);
    getchar();
    printf("Sirul inserat:\n");
    fgets(str,100,stdin);
    printf("%s\n", alt_inject(s,i,str));
    return 0;
}
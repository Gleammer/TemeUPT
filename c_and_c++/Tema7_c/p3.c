//
// Created by Radu on 04/12/2019.
//

#include <stdio.h>
#include <stdlib.h>
//#/include <math.h>
#include <string.h>
#include <ctype.h>
//#/include <stdbool.h>

char * inject(char *p, int poz, int lun){
    int i,j;

    for(i=poz;i<strlen(p)-lun;i++){
        *(p+i)=*(p+i+lun);
    }
    *(p+i-1)='\0';
    return p;
}

int main() {
    int i,j;
    char s[201];

    printf("Introduceti un sir:\n");
    fgets(s,100,stdin);
    printf("Pozitie: ");
    scanf("%d", &i);
    printf("Lungime: ");
    scanf("%d", &j);
    printf("%s\n", inject(s,i,j));
    return 0;
}
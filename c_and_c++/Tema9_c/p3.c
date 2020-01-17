//
// Created by Radu on 18/12/2019.
//

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
//#/include <math.h>
#include <string.h>
//#/include <stdbool.h>

struct dict{
    char litera;
    int valoare;
};

char *linie(){
    char *buf=NULL,
            *buf2, ch;
    size_t n =0;
    for(;;){
        n++;
        if((buf2=(char*)realloc(buf,n))==NULL){
            free(buf);
            printf("memorie insuficienta\n");
            exit(EXIT_FAILURE);
        }
        buf = buf2;
        ch=getchar();
        if(ch=='\n' || ch==' '){
            break;
        }
        *(buf+n-1)=ch;
    }
    *(buf+n-1)='\0';
    return buf;
}

int get_val(struct dict *x, char *p, int n){
    int rez=0,
        i,j;

    for(i=0;i<strlen(p);i++){
        for(j=0;j<n;j++){
            if(*(p+i)==x[j].litera){
                rez+=x[j].valoare;
                break;
            }
        }
    }
    return rez;
}

int main() {
    int i,n;
    char *p;
    struct dict dictionar[26];

    printf("n = ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        getchar();
        dictionar[i].litera = getchar();
        getchar();
        scanf("%d", &dictionar[i].valoare);
    }
    getchar();
    for(;;){
        p=linie();
        if (!strcmp(p,"gata")) {
            free(p);
            break;
        }
        printf("%s -> %d\n", p, get_val(dictionar, p, n));
    }
    return 0;
}
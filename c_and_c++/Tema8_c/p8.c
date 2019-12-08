//
// Created by Radu on 07/12/2019.
//

#include <stdio.h>
#include <stdlib.h>
//#/include <math.h>
#include <string.h>
//#/include <stdbool.h>

char **linii = NULL;
int nrLinii = 0;

void eliberare(){
    int i;

    for(i=0;i<nrLinii;i++){
        free(linii[i]);
    }
    free(linii);
    //printf("\n\n---A AVUT LOC ELIBERARE---\n\n");
    // for debug' :D
}

char *linie(){
    char *buf=NULL,
            *buf2, ch;
    size_t n =0;
    for(;;){
        n++;
        if((buf2=(char*)realloc(buf,n))==NULL){
            free(buf);
            eliberare();
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

void afisare(){
    int i,j;
    char voc[5]={'a','e','i','o','u'};

    for(i=0;i<nrLinii;i++){
        for(j=0;j<strlen(*(linii+i));j++){
            printf("%c", *(*(linii+i)+j));
            if(strchr(voc,*(*(linii+i)+j))==NULL && strchr(voc,*(*(linii+i)+j+1))==NULL){
                printf("-");
            }
        }
        printf(" ");
    }
    printf("\n");
}

int main() {
    char **linii2,
            *p;

    for (;;) {
        p = linie();
        if (!strcmp(p, "gata")) {
            free(p);
            break;
        }
        nrLinii++;
        if ((linii2 = (char **) realloc(linii, nrLinii * sizeof(char *))) == NULL) {
            eliberare();
            printf("memorie insuficienta\n");
            exit(EXIT_FAILURE);
        }
        linii = linii2;
        linii[nrLinii - 1] = p;
    }
    afisare();
    eliberare();
    return 0;
}
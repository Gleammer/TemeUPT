//
// Created by Radu on 08/12/2019.
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
        if(ch=='\n'){
            break;
        }
        *(buf+n-1)=ch;
    }
    *(buf+n-1)='\0';
    return buf;
}

void sort(){
    int i,v[nrLinii],lmax,j,j_max;

    for(i=0;i<nrLinii;i++){
        *(v+i)=strlen(*(linii+i));
    } //in this vector we save the strlwn of each string
    for(i=0;i<nrLinii;i++){
        lmax=0;
        for(j=0;j<nrLinii;j++){
            if(*(v+j)>lmax){
                lmax=*(v+j);
                j_max=j;
            }
        }
        *(v+j_max)=-1;
        printf("%s\n",*(linii+j_max));
    }
}

int main() {
    char **linii2,
            *p;

    for (;;) {
        p = linie();
        if (strlen(p)==0) {
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
    sort();
    eliberare();
    return 0;
}
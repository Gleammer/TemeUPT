//
// Created by Radu on 08/12/2019.
//

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
//#/include <math.h>
#include <string.h>

char **linii = NULL;
int nrLinii = 0;

void eliberare(){
    int i;

    for(i=0;i<nrLinii;i++){
        free(linii[i]);
    }
    free(linii);
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

void tradu(){
    int i;
    char lit[27];

    strcpy(lit,"abcdefghijklmnopqrstuvwxyz");

    for(i=0;i<nrLinii;i++){
        if(**(linii+i)==48){
            printf(" ");
        } else if(**(linii+i)<=55){
            printf("%c", *(lit+(**(linii+i)-50)*3-1+strlen(*(linii+i))));
        } else if(**(linii+i)<=57){
            printf("%c", *(lit+(**(linii+i)-50)*3+strlen(*(linii+i))));
        }
    } // examine each string, which represents a letter from the final outcome

}

int main() {
    char **linii2,
            *p;
    int i;

    //nrLinii=n;
    for(;;){
        p=linie();
        if (strlen(p)==0) {
            free(p);
            break;
        }
        nrLinii++;
        if((linii2=(char**)realloc(linii,nrLinii* sizeof(char*)))==NULL){
            eliberare();
            printf("memorie insuficienta\n");
            exit(EXIT_FAILURE);
        }
        linii=linii2;
        linii[nrLinii-1]=p;
    } // Citeste pana la linie vida (deoarece nu e specificat in conditie)
    tradu();
    /*
    for(i=0;i<nrLinii;i++){
        printf("%s\n",*(linii+i));
    }
    */
    eliberare();
    return 0;
}
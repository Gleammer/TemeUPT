//
// Created by Radu on 05/12/2019.
//

#include <ctype.h>
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

int comun(int x, int y){
    int com=0,i;

    for(i='A';i<='Z';i++){
        if((strchr(*(linii+x),i)!=NULL||strchr(*(linii+x),tolower(i)))&&
            (strchr(*(linii+y),i)!=NULL||strchr(*(linii+y),tolower(i)))){
            com++;
        }
    }
    return com;
}

void perechi(){
    int i,j,max,k,j_max;

    for(i=0;i<nrLinii;i++){
        max=0;
        for(j=0;j<nrLinii;j++){
            if(i!=j){
                k=comun(i,j);
                if(k>max){
                    j_max=j;
                    max=k;
                }
            }
        }
        printf("Pereche: %s - %s\n", *(linii+i), *(linii+j_max));
    }
}

int main() {
    char **linii2,
            *p;
    int i;

    for(;;){
        p=linie();
        if(!strcmp(p,"gata")){
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
    }
    perechi();
    /*
    for(i=0;i<nrLinii;i++){
        printf("%s\n",*(linii+i));
    }
    */
    eliberare();
    return 0;
}
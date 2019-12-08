//
// Created by Radu on 08/12/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//#/include <math.h>
#include <string.h>
//#/include <stdbool.h>

char **linii = NULL,
    *ini=NULL, *aft=NULL;
int nrLinii = 0;

void eliberare(){
    int i;

    for(i=0;i<nrLinii;i++){
        free(linii[i]);
    }
    free(ini);
    free(aft);
    free(linii);
    //printf("\n\n---A AVUT LOC ELIBERARE---\n\n");
    // for debug' :D
}

char *linie(){
    char *buf=NULL,
            *buf2, ch;
    size_t n=0;

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

void eject(char *p, int poz, int lun){
    int i,j;
    char *buf;

    for(i=poz;i<strlen(p)-lun;i++){
        *(p+i)=*(p+i+lun);
    }
    *(p+i)='\0';
    if((buf=(char*)realloc(p,strlen(p)+1))==NULL){
        eliberare();
        printf("Memorie insuficienta\n");
        exit(EXIT_FAILURE);
    }
    p=buf;
}

void inject(char *p, int poz){
    int i,j;
    char *buf;

    if((buf=(char*)realloc(p,strlen(p)+strlen(aft)))==NULL){
        eliberare();
        printf("Memorie insuficienta\n");
        exit(EXIT_FAILURE);
    }
    p=buf;
    for(i=strlen(p)+strlen(aft)-1;i>poz+strlen(aft)-1;i--){
        *(p+i)=*(p+i-strlen(aft));
    }
    for(i=poz;i<poz+strlen(aft);i++){
        *(p+i)=*(aft+i-poz);
    }
}

void changer(){
    int i;
    char *k;

    for(i=0;i<nrLinii;i++){
        while((k=strstr(*(linii+i),ini))!=NULL){
            eject(*(linii+i),k-*(linii+i),strlen(ini));
            inject(*(linii+i),k-*(linii+i));
        }
//        k=strstr(*(linii+i),ini);
//        if(k!=NULL){
//            eject(*(linii+i),k-*(linii+i),strlen(ini));
//            inject(*(linii+i),k-*(linii+i));
//        }
    }
}

int main() {
    char **linii2,
            *p;
    int i;

    for(;;){
        p=linie();
        if(strlen(p)==0){
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
    printf("Introduceti un sir ce necesita sa fie inlocuit:\n");
    ini=linie();
    printf("Ce sir il va inlocui:\n");
    aft=linie();
    changer();
    printf("\nRezultat:\n");
    for(i=0;i<nrLinii;i++){
        printf("%s\n",*(linii+i));
    }
    eliberare();
    return 0;
}
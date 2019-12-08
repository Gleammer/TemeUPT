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
        if(ch=='\n' || ch==' '){
            break;
        }
        *(buf+n-1)=ch;
    }
    *(buf+n-1)='\0';
    return buf;
}

int anagrama(char *s1, char *s2){
    int i,prim[26]={0},sec[26]={0};

    for(i=0;i<strlen(s1);i++){
        *(prim+*(s1+i)-'a')=*(prim+*(s1+i)-'a')+1;
    }
    for(i=0;i<strlen(s2);i++){
        *(sec+*(s2+i)-'a')=*(sec+*(s2+i)-'a')+1;
    }
    for(i=0;i<26;i++){
        if(*(prim+i)!=*(sec+i)){
            return 0;
        }
    }
    return 1;
}

int main() {
    char **linii2,
            *p;
    int i,s;

    for(;;){
        p=linie();
        if(!strcmp(p,"gata")){
            free(p);
            break;
        }
        // check if the word is an anagram
        s=0;
        for(i=0;i<nrLinii;i++){
            if(anagrama(*(linii+i),p)){
                s=1;
            }
        }
        if(s==0){
            nrLinii++;
            if((linii2=(char**)realloc(linii,nrLinii* sizeof(char*)))==NULL){
                eliberare();
                printf("memorie insuficienta\n");
                exit(EXIT_FAILURE);
            }
            linii=linii2;
            linii[nrLinii-1]=p;
        }
    }
    printf("\n");
    for(i=0;i<nrLinii;i++){
        printf("%s ",*(linii+i));
    }
    eliberare();
    return 0;
}
//
// Created by Radu on 08/12/2019.
//

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
//#/include <math.h>
#include <string.h>
#include <stdbool.h>

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

bool usor(char *p){
    char voc[5]={'a','e','i','o','u'};
    float k=0;
    int i;

    for(i=0;i<strlen(p);i++){
        if(strchr(voc,*(p+i))!=NULL){
            k+=1;
        }
    }
    if(k>=2*(float)strlen(p)/3){
        return true;
    }
    return false;
}

int main() {
    char **linii2,
            *p;
    int i,j,n;

    printf("n = ");
    scanf("%d", &n);
    getchar();
    //nrLinii=n;
    for(j=0;j<n;j++){
        p=linie();
        nrLinii++;
        if((linii2=(char**)realloc(linii,nrLinii* sizeof(char*)))==NULL){
            eliberare();
            printf("memorie insuficienta\n");
            exit(EXIT_FAILURE);
        }
        linii=linii2;
        linii[nrLinii-1]=p;
    }
    for(i=0;i<nrLinii;i++){
        if(usor(*(linii+i))){
            printf("%s\n",*(linii+i));
        }
    }
    /*
    for(i=0;i<nrLinii;i++){
        printf("%s\n",*(linii+i));
    }
    */
    eliberare();
    return 0;
}
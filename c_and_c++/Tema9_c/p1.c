//
// Created by Radu on 18/12/2019.
//

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
//#/include <math.h>
#include <string.h>
//#/include <stdbool.h>

struct distante {
    int *a;
    int n;
    char **loc;
};

struct distante dis;

void eliberare(){
    int i;

    for(i=0;i<dis.n;i++){
        free(dis.loc[i]);
    }
    free(dis.loc);
    free(dis.a);
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

void afisare(){
    int i,j;

    for(i=0;i<dis.n;i++){
        printf("\n%s",*(dis.loc+i));
        for(j=0;j<dis.n;j++){
            printf(" %d", *(dis.a+i*dis.n+j));
        }
    }
}

int main() {
    int i,j,x;
    char *p;

    printf("N = ");
    scanf("%d", &dis.n);

    if((dis.a=(int *)malloc(sizeof(int)*dis.n*dis.n))==NULL){
        printf("Memorie insuficienta.\n");
        exit(EXIT_FAILURE);
    } // creare matrice distante

    if((dis.loc=(char**)malloc(i*sizeof(char*)))==NULL){
        eliberare();
        printf("memorie insuficienta\n");
        exit(EXIT_FAILURE);
    } // creare vecotr de stringuri

    printf("Introduceti denumirea a N orase:\n");
    getchar();
    for(i=0;i<dis.n;i++){
        p=linie();
        dis.loc[i]=p;
    } // citire denumire orase

    for(i=0;i<dis.n-1;i++){
        for(j=i+1;j<dis.n;j++){
            printf("Distanta %s si %s = ", *(dis.loc+i), *(dis.loc+j));
            scanf("%d", &x);
            *(dis.a+i*dis.n+j)=x;
            *(dis.a+i*(dis.n+1))=0;
            *(dis.a+j*dis.n+i)=x;
        }
    } // completare matrice distante dintre orase

    afisare();
    eliberare();
    return 0;
}
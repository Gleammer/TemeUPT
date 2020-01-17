//
// Created by Radu on 18/12/2019.
//

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
//#/include <math.h>
#include <string.h>
#include <stdbool.h>

struct persoana{
    char *Nume;
    char *Prenume;
    char Sex;
    float Inaltime;
};

// Global Variables
struct persoana v[100];
int n;

void eliberare(){
    int i;

    for(i=0;i<n;i++){
        free(v[i].Nume);
        free(v[i].Prenume);
    }
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

int se_repeta(struct persoana aux, int i){
    int j;

    for(j=0;j<i;j++){
        if(!strcmp(aux.Nume,v[j].Nume)&&
        !strcmp(aux.Prenume,v[j].Prenume)&&
        aux.Sex == v[j].Sex &&
        aux.Inaltime == v[j].Inaltime){
            return 1;
        }
    }
    return 0;
}

int citire_pers(int i){
    struct persoana aux;

    printf("Nume persoana:\n");
    getchar();
    aux.Nume = linie();
    printf("Prenume persoana:\n");
    aux.Prenume = linie();
    printf("Sex persoana (M/S):\n");
    aux.Sex = getchar();
    printf("Inaltime persoana:\n");
    scanf("%f", &aux.Inaltime);
    if(!se_repeta(aux,i)){
        v[i].Nume = aux.Nume;
        v[i].Prenume = aux.Prenume;
        v[i].Sex = aux.Sex;
        v[i].Inaltime = aux.Inaltime;
        return 1;
    } else {
        return 0;
    }
}

void afisare_pers(int i){
    printf("\nPersoana %d:\nNume: %s\nPrenume: %s\nSex %c\nInaltime %g\n\n",
           i+1,v[i].Nume,v[i].Prenume,v[i].Sex,v[i].Inaltime);
}

int main() {
    int i;

    // Citire vector de persoane
    printf("N = ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        if(!citire_pers(i)){
            i--;
            n--;
        }
    }

    // Afisare vector de persoane
    for(i=0;i<n;i++){
        afisare_pers(i);
    }
    eliberare();
    return 0;
}
//
// Created by Radu on 12/12/2019.
//

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
//#/include <math.h>
#include <string.h>
//#/include <stdbool.h>

struct angajat{
    int id;
    char *nume;
    char *functie;
    float salariu;
};

struct angajat *angajati = NULL;
int g_id=0,
    nrAngajati=0;

void eliberare(){
    int i;

    for(i=0;i<=g_id;i++){
        free(angajati[i].nume);
        free(angajati[i].functie);
        free(&angajati[i]);
    }
    free(angajati);
}

char *linie(){
    char *buf=NULL,
            *buf2, ch;
    size_t n =0;
    getchar();
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

void adauga(){
    struct angajat *p;
    struct angajat inter;


    g_id++;nrAngajati++;
    inter.id = g_id;
    printf("\nNume:\n");
    inter.nume = linie();
    printf("\nFunctie:\n");
    inter.functie = linie();
    scanf("%f", &inter.salariu);
    if((p=(struct angajat *)realloc(angajati,g_id*sizeof(struct angajat)))==NULL){
        eliberare();
        printf("memorie insuficienta\n");
        exit(EXIT_FAILURE);
    }
    angajati=p;
    angajati[g_id]=inter;
}

void sterge(){
    int aux,i;

    printf("Introduceti ID-ul angajatului\n");
    scanf("%d", &aux);
    for(i=0;i<=g_id;i++){
        if(angajati[i].id == aux){
            free(angajati[i].nume);
            free(angajati[i].functie);
            free(&angajati[i]);
            nrAngajati--;
            break;
        }
    }
}

void listeaza(){
    int i;

    printf("Exista %d angajati:\n", nrAngajati);
    for(i=0;i<g_id;i++){
        if(&angajati[i] != NULL){
            printf("ID: %d\nNume: %s\nFunctie: %s\nSalariu: %f\n\n", angajati[i].id, angajati[i].nume, angajati[i].functie, angajati[i].salariu);
        }
    }
}

int main() {
    int x,s=0;

    for(;;){
        if(s==1){
            break;
        }
        printf("\n\nMeniu:\n1: Adaugam lucrator\n2: Stergem lucrator\n3: Listarea lucratorilor\n4: Iesire din program\n");
        scanf("%d", &x);
        switch (x){
            case 1: adauga();
                //printf("1");
                break;
            case 2: sterge();
                //printf("2");
                break;
            case 3: listeaza();
                //printf("3");
                break;
            default: s=1;
                break;
        }
    }
    eliberare();
    return 0;
}
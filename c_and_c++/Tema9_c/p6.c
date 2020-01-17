//
// Created by Radu on 18/12/2019.
//

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
//#/include <math.h>
#include <string.h>
//#/include <stdbool.h>

struct persoana{
    char Nume[31];
    char Prenume[31];
    char Sex;
    float Inaltime;
};

// Global Variables
struct persoana v[100];
int n;

void citire_pers(int i){
    printf("Nume persoana:\n");
    getchar();
    fgets(v[i].Nume,30,stdin);
    v[i].Nume[strlen(v[i].Nume)-1]='\0'; //eliminam '\n'
    printf("Prenume persoana:\n");
    fgets(v[i].Prenume,30,stdin);
    v[i].Prenume[strlen(v[i].Prenume)-1]='\0'; //eliminam '\n'
    printf("Sex persoana (M/S):\n");
    v[i].Sex = getchar();
    printf("Inaltime persoana:\n");
    scanf("%f", &v[i].Inaltime);
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
        citire_pers(i);
    }

    // Afisare vector de persoane
    for(i=0;i<n;i++){
        afisare_pers(i);
    }
    return 0;
}
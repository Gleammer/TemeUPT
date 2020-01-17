//
// Created by Radu on 18/12/2019.
//

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
//#/include <math.h>
#include <string.h>
//#/include <stdbool.h>

struct num_mare{
    int n;
    int a[1000];
};

void afisare(struct num_mare x){
    int i;

    if(*(x.a+x.n-1)==0){
        x.n--;
    }
    for(i=x.n-1;i>=0;i--){
        printf("%d",*(x.a+i));
    }
}

struct num_mare citire(){
    struct num_mare x;
    char str[1001];
    int i;

    scanf("%d", &x.n);
    getchar();
    fgets(str,1000,stdin);
    for(i=0;i<x.n;i++){
        *(x.a+x.n-i-1)=*(str+i)-'0';
    } // citire element

    return x;
}

struct num_mare adunare(struct num_mare x, struct num_mare y){
    struct num_mare sum;
    int i, i_max;

    if(x.n>y.n){
        sum.n = x.n+1;
    } else {
        sum.n = y.n+1;
    }
    for(i=0;i<sum.n;i++){
        *(sum.a+i)+=*(x.a+i)+*(y.a+i);
        *(sum.a+i+1)=*(sum.a+i)/10;
        *(sum.a+i)=*(sum.a+i)%10;
    }
    return sum;
}

int main() {
    char str[1001];
    struct num_mare prim,doi,suma;

    //Citire elemete
    prim = citire();
    doi = citire();

    //Adunare elemente
    suma = adunare(prim, doi);

    //Afisare elemente
    printf("Primul numar mare: ");
    afisare(prim);
    printf("\nAl doilea numar mare: ");
    afisare(doi);
    printf("\nSuma numerelor mari: ");
    afisare(suma);
    return 0;
}
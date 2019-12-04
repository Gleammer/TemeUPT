//
// Created by Radu on 04/12/2019.
//

#include <stdio.h>
#include <stdlib.h>
//#/include <math.h>
#include <string.h>
#include <ctype.h>
//#/include <stdbool.h>

void sumeaza(unsigned long long int *a, int j){
    int i;
    unsigned long long int sum=0;

    for(i=0;i<j;i++){
        printf("%llu ", *(a+i));
        sum+=*(a+i);
    }
    printf("\n%llu\n", sum);
}

void separa(char *p){
    int i=0,j=0;
    unsigned long long int x=0,a[100];

    while(*(p+i)){
        if(isdigit(*(p+i))){
            x*=10;
            x+=*(p+i)-48;
        } else if(!isdigit(*(p+i)) && isdigit(*(p+i-1))){
            *(a+j)=x;
            x=0;
            j++;
        }
        i++;
    }
    sumeaza(a,j);
}

int main() {
    char s[201],
        *p=s;

    printf("Introduceti un sir de caractere:\n");
    fgets(s,200,stdin);
    separa(p);
    return 0;
}
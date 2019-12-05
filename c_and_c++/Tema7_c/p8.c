//
// Created by Radu on 04/12/2019.
//

#include <stdio.h>
//#include <ctype.h>
#include <stdlib.h>
//#include <math.h>
#include <string.h>
//#include <stdbool.h>

void afisare(char *v,int max,int n){
    int i,j;

    for(i=0;i<n;i++){
        printf("\n");
        for(j=strlen(v+30*i)-1;j>=0;j--){
            printf("%c", *(v+30*i+j));
        }
    }
}

int main() {
    int n,i,j,max=0;
    char v[200][30],aux,
            *p=&v[0][0];

    printf("n = ");
    scanf("%d", &n);
    getchar();
    for(i=0;i<n;i++){
        fgets(p+30*i,30,stdin);
        *(p+30*i+strlen(p+30*i)-1)='\0';
        if(strlen(p+30*i)>max){
            max=strlen(p+30*i);
        }
    }
    //printf("%d\n",max);
    afisare(p,max,n);
    return 0;
}
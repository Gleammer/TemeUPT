//
// Created by Radu on 04/12/2019.
//

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
//#/include <math.h>
#include <string.h>
//#/include <stdbool.h>

void composition(char *str){
    int i,j,m=0,n=0,x[50];
    char v[50][30],aux[200],
        *p=&v[0][0];

    for(i=0;i<strlen(str);i++){
        if(isalpha(*(str+i))){
            *(p+30*m+n)=*(str+i);
            n++;
        } else if(!isalpha(*(str+i)) && isalpha(*(str+i-1))){
            *(p+30*m+n)='\0';
            m++;
            n=0;
        }
    } //decomposition

    for(i=0;i<m;i++){
        *(x+i)=1;
    } //initiere

    for(i=0;i<m;i++){
        if(*(p+30*i)!='\0'){
            for(j=i+1;j<m;j++){
                if(!strcmp(p+30*i,p+30*j)){
                    *(x+i)+=1;
                    *(x+j)=0;
                    *(p+30*j)='\0';
                }
            }
        }
    } //calcul
    for(i=0;i<m;i++){
        if(*(x+i)){
            printf("%s = %d\n",p+30*i,*(x+i));
        }
    }
}

int main(){
    char str[201];

    printf("Introduceti un sir de caractere:\n");
    fgets(str,200,stdin);
    composition(str);
    return 0;
}
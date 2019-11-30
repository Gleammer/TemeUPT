//
// Created by Radu on 28/11/2019.
//

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
//#/include <math.h>
#include <string.h>
//#/include <stdbool.h>

int main() {
    int n,i,j,v[10],k;
    char s[10][30];

    printf("n = ");
    scanf("%d", &n);
    getchar();
    for(i=0;i<n;i++){
        v[i]=1;
    }
    for(i=0;i<n;i++){
        fgets(s[i],29,stdin);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(!strcmp(s[i],s[j])){
                v[i]++;
                for(k=j;k<n-1;k++){
                    strcpy(s[k],s[k+1]);
                }
                j--;
                n--;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("Nume: %s->Se intalneste de %d ori\n\n", s[i], v[i]);
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[]){
    int i,j,
        lit[26];

    for(i=0;i<26;i++)
        lit[i]=0;
    for(i=1;i<argc;i++){
        for(j=0;j<strlen(argv[i]);j++){
            lit[toupper(argv[i][j])-65]++;
        }
    }
    for(i=0;i<26;i++){
        if(lit[i]>0)
            printf("Litera %c se intalneste de %d ori\n", i+65, lit[i]);
    }


    return 0;
}
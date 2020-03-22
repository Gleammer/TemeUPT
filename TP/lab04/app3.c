//
// Created by Radu on 22/03/2020.
//

#include <stdio.h>
#include <stdlib.h>
//#/include <math.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    int i;
    FILE *fr;
    char *linie = NULL;
    size_t len = 0;
    bool gasit;

    if((fr=fopen(argv[1],"r"))==NULL){
        printf("eroare deschidere fisier sau file inexistent\n");
        exit(EXIT_FAILURE);
    } // deschidem fisierul
    while(getline(&linie, &len, fr) != -1) {
        gasit=true;
        for(i=2;i<argc;i++){
            if(strstr(linie,argv[i])==NULL){
                gasit=false;
                break;
            }
        }
        if(gasit)
            printf("%s",linie);
    }

    free(linie);
    fclose(fr);
    return 0;
}
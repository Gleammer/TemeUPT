#include <stdio.h>
#include <stdlib.h>
//#/include <math.h>
//#/include <string.h>
//#/include <stdbool.h>

int main(int argc, char *argv[]) {
    FILE *f1, *f2;
    unsigned char buff[4096];
    size_t n,m;

    if((f1=fopen(argv[1],"r"))==NULL){
        printf("Nu se poate deschide fisierul sursa\n");
        exit(EXIT_FAILURE);
    }
    if((f2=fopen(argv[2],"w"))==NULL){
        fclose(f1);
        printf("Nu se poate deschide fisierul destinatie\n");
        exit(EXIT_FAILURE);
    }

    do{
        n=fread(buff,1,sizeof(buff),f1);
        if(n)
            m=fwrite(buff,1,n,f2);
        else
            m=0;
    }while((n>0)&&(n==m));

    fclose(f1);
    fclose(f2);
    return 0;
}
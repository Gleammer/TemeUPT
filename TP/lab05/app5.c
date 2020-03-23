#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#/include <math.h>
//#/include <stdbool.h>


// May the gods of StackOverflow be with me on this journey
void hexDump (char *desc, void *addr, int len) {
    int i;
    unsigned char buffLine[17];
    unsigned char *pc = (unsigned char*)addr;

    if (desc != NULL){

       printf ("%s:\n", desc);

    }


    for (i = 0; i < len; i++) {


        if ((i % 16) == 0) {

            if (i != 0)

                printf ("  %s\n", buffLine);
           // if (buffLine[i]== '\0') break;

            if (pc[i] == 0x00) exit(0);

            // Prints the ADDRESS
            printf ("  %07x ", i);
        }

        // Prints the HEXCODES that represent each chars.
        printf ("%02x", pc[i]);
        if ((i % 2) == 1) 
            printf (" "); 



        if ((pc[i] < 0x20) || (pc[i] > 0x7e)){
            buffLine[i % 16] = '.';
        }

        else{

           buffLine[i % 16] = pc[i];

        }    


        buffLine[(i % 16) + 1] = '\0'; //Clears the next array buffLine


    }



    while ((i % 16) != 0) {
        printf ("   ");
        i++;
    }


    printf ("  %s\n", buffLine);
}


int main(){
    FILE *fin,*fout;
    if((fin=fopen("1.txt","r"))==NULL){
        printf("eroare la deschidere");
        exit(EXIT_FAILURE);
    }
    if((fout=fopen("iesire.dat","w"))==NULL){
        printf("eroare la deschidere");
        exit(EXIT_FAILURE);
    }
    char buffer[100];
    while(fread(buffer,sizeof(char),100,fin)){
        //buffer[strlen(buffer)] = '\0';
        hexDump(buffer, &buffer, sizeof(buffer));
    }
}

//Thank you gods of StackOverflow
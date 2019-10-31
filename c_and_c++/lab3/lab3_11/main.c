#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void toBase32(unsigned int x){
    int r;
    char c,
        rez[100]="";

    while(x){
        r=x%32;
        if(r<26)
            c=r+65;
        else
            c=r+24;
        strcat(rez,&c);
        x=x/32;
    }
    for(int i=strlen(rez)-1;i>=0;i--)
        printf("%c",rez[i]);
    printf("\n");
}

int main(){
    unsigned a;
    printf("a = ");
    scanf("%u", &a);

    toBase32(a);
    return 0;
}

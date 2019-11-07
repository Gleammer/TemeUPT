//
// Created by Radu on 07/11/2019.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    float v[100],
        *p,x;
    int i,j,y,s=0;

    p=v;
    for(;;){
        printf("1. Citire\n2. Afisare\n3. Stergere\n4. Iesire\n");
        scanf("%d", &y);
        switch (y){
            case 1: printf("v[%ld]=", p-v);
                    scanf("%f", p);
                    p++;
                    printf("\n");
                break;
            case 2: printf("Afisare:\n");
                    for(i=0;i<p-v;i++){
                        printf("%g ", *(v+i));
                    }
                    printf("\n\n");
                break;
            case 3: printf("x = ");
                    scanf("%f", &x);
                    for(i=0;i<p-v;i++){
                        if(*(v+i)==x){
                            for(j=i;j<p-v-1;j++){
                                *(v+j)=*(v+j+1);
                            }
                            p--;
                            i--;
                        }
                    }
                    printf("\n");
                break;
            case 4: s=1;
                break;
        }
        if(s==1){
            break;
        }
    }
}
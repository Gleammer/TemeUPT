//
// Created by Radu on 25/11/2019.
//

#include <stdlib.h>
#include <stdio.h>

float maxFloat(float x1, float x2, float x3){
    if(x1>=x2 && x1>=x3){
        return x1;
    } else if(x2>=x1 && x2>=x3){
        return x2;
    } else {
        return x3;
    }
}

int main(){
    float f1,f2,f3;

    printf("Introduceti 3 numere de tip float:\n");
    scanf("%f%f%f", &f1,&f2,&f3);
    printf("%g\n", maxFloat(f1,f2,f3));
    return 0;
}
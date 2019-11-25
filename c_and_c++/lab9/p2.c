//
// Created by Radu on 25/11/2019.
//

#include <stdlib.h>
#include <stdio.h>

float maxDoua(float y1, float y2){
    if(y1 > y2){
        return y1;
    } else {
        return y2;
    }
} //In conditie nu e interzis :D ( imi pare a fi mai curat codul asa <3 )

float maxFloat(float x1, float x2, float x3){
    return maxDoua(maxDoua(x1,x2),x3);
}

int main(){
    float f1,f2,f3;

    printf("Introduceti 3 numere de tip float:\n");
    scanf("%f%f%f", &f1,&f2,&f3);
    printf("%g\n", maxFloat(f1,f2,f3));
    return 0;
}
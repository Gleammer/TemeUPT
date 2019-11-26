//
// Created by Radu on 25/11/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float get_angle(float x0, float y0, float x1, float y1){
    return atan((y1-y0)/(x1-x0)) * 180 / M_PI;
}

int main(){
    float x0,y0,x1,y1;

    printf("x0 = ");
    scanf("%f", &x0);
    printf("y0 = ");
    scanf("%f", &y0);
    printf("x1 = ");
    scanf("%f", &x1);
    printf("y1 = ");
    scanf("%f", &y1);
    printf("Unghiul format e de %g grade", get_angle(x0,y0,x1,y1));
    return 0;
}
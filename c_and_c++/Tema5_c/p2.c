//
// Created by Radu on 18/11/2019.
//

#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(){
    int n,m,i,j;
    float a[10][20],
        *p,ar,ge;

    p = &a[0][0];
    printf("n = ");
    scanf("%d", &n);
    printf("m = ");
    scanf("%d", &m);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%f", p+i*20+j);
        }
    }
    for(i=0;i<m;i++){
        ar=0;
        for(j=0;j<n;j++){
            ar+=*(p+i*20+j);
        }
        ar/=n;
        printf("Media aritmetica pe linia %d este = %.2f\n", i+1, ar);
    }
    for(j=0;j<n;j++){
        ge=1;
        for(i=0;i<m;i++){
            ge*=*(p+i*20+j);
        }
        ge=pow(ge,1/(double)m);
        printf("Media geometrica pe coloana %d este = %.2f\n", j+1, ge);
    }
    return 0;
}
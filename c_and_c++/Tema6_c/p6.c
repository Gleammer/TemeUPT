//
// Created by Radu on 30/11/2019.
//

#include <stdio.h>
#include <stdlib.h>
//#/include <math.h>
//#/include <string.h>
//#/include <stdbool.h>

void generate(int *p, int n){
    int i,j,k=1;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            *(p+10*i+j)=k++;
        }
    }
}

void printer(int *p, int n){
    int i,j;

    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("%d ", *(p+10*i+j));
        }
    }
}

void get_rez(int *p, int n, int i, int j){
    printf("\nElementul consumat este %d, iar matricea rezultată este:", *(p+10*i+j));
    *(p+10*i+j)=0;
    printer(p,n);
}

void cerc(int *p, int n, int k){
    int i,j;

    for(j=k;j<n-k;j++){
        get_rez(p,n,k,j);
    }
    j=n-k-1;
    for(i=k+1;i<n-k;i++){
        get_rez(p,n,i,j);
    }
    i=n-k-1;
    for(j=n-k-2;j>k;j--){
        get_rez(p,n,i,j);
    }
    j=k;
    for(i=n-k-1;i>k;i--){
        get_rez(p,n,i,j);
    }
}

void run_forrest(int *p, int n){
    generate(p,n);
    int i;
    for(i=0;i<n/2;i++){
        cerc(p,n,i);
    }
    if(n%2){
        get_rez(p,n,n/2,n/2);
    }
}

int main() {
    //FILE *fr;
    //fr = fopen("input.in", "rt");
    int i,j,n,a[10][10],
        *p=&a[0][0];

    printf("n = ");
    scanf("%d", &n);
    run_forrest(p,n);
    return 0;
}
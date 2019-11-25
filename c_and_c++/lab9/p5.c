//
// Created by Radu on 25/11/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int egal(float *v1, float *v2, int n){
    int i;

    for(i=0;i<n;i++){
        if(*(v1+i)!=*(v2+i)){
            return 0;
        }
    }
    return 1;
}

int main(){
    //FILE *fr;
    //fr = fopen("input.in", "rt");
    int m,n,k,i,j;
    bool s=false;
    float a[10][10],v[5],
        *p=&a[0][0];

    printf("m = ");
    scanf("%d", &m);
    //fscanf(fr,"%d", &m);
    printf("n = ");
    scanf("%d", &n);
    //fscanf(fr,"%d", &n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%f", p+i*10+j);
            //fscanf(fr,"%f", p+i*10+j);
        }
    }
    printf("k = ");
    scanf("%d", &k);
    //fscanf(fr,"%d",&k);
    for(i=0;i<k;i++){
        scanf("%f", v+i);
        //fscanf(fr,"%f",v+i);
    }
    for(i=0;i<m;i++){
        for(j=0;j<=n-k;j++){
            if(egal(p+i*10+j,v,k)){
                printf("(%d,%d)\n",i,j);
                s=true;
            }
        }
    }
    if(!s){
        printf("Nu a fost gasit.\n");
    }
    return 0;
}
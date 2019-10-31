#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool pozunit(int x){
    if(x>=0&&x<=9)
        return true;
    else
        return false;
}

int main(){
    int v[10],
        n,i,aux;
    bool s;

    printf("n = ");
    scanf("%d", &n);
    if(n==0){
        printf("Vector vid");
    } else {
        for(i=0;i<n;i++){
            printf("v[%d] = ", i);
            scanf("%d", &v[i]);
        }
        do{
            s=false;
            for(i=0;i<n-1;i++){
                if(!pozunit(v[i])&&pozunit(v[i+1])){
                    aux=v[i];
                    v[i]=v[i+1];
                    v[i+1]=aux;
                    s=true;
                }
            }
        } while(s);
        for(i=0;i<n;i++){
            printf("%d ", v[i]);
        }
    }
    return 0;
}

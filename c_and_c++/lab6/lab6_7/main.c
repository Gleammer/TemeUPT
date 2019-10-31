#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main(){
    int v[10],
        i,aux,n;
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
                if(abs(v[i])%2==0&&abs(v[i+1])%2==1){
                    aux=v[i];
                    v[i]=v[i+1];
                    v[i+1]=aux;
                    s=true;
                }
            }
        } while(s);
        for(i=0;i<n;i++)
            printf("%d ", v[i]);
    }
    return 0;
}

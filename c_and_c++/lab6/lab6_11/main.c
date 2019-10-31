#include <stdio.h>
#include <stdlib.h>

int main(){
    int v[10],
        n,i,j,k;

    printf("n = ");
    scanf("%d", &n);
    if(n==0){
        printf("Vector vid");
    } else {
        for(i=0;i<n;i++){
            printf("v[%d] = ", i);
            scanf("%d", &v[i]);
        }
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(v[i]==v[j]){
                    for(k=j;k<n;k++){
                        v[k]=v[k+1];
                    }
                    i--;
                    n--;
                }
            }
        }
        for(i=0;i<n;i++){
            printf("%d ", v[i]);
        }
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(){
    int v[60],
        i,j,n;

    printf("n = ");
    scanf("%d", &n);
    if(n==0){
        printf("Vector vid");
    } else {
        for(i=0;i<n;i++){
            printf("v[%d] = ", i);
            scanf("%d", &v[i]);
        }
        for(i=0;i<n;i++){
            if(v[i]==0){
                for(j=n;j>i;j--){
                    v[j]=v[j-1];
                }
                v[j+1]=1;
                i++;
                n++;
            }
        }
        for(i=0;i<n;i++){
            printf("%d ", v[i]);
        }
    }
    return 0;
}

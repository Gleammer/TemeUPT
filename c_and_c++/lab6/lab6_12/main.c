#include <stdio.h>
#include <stdlib.h>

int main(){
    int v[20],
        n,i,j;

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
            for(j=n;j>i+1;j--){
                v[j]=v[j-1];
            }
            v[j]=v[j-1]*v[j-1];
            n++;
            i++;
        }
        for(i=0;i<n;i++){
            printf("%d ", v[i]);
        }
    }
    return 0;
}

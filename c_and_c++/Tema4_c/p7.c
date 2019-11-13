//
// Created by Radu on 08/11/2019.
//

#include <stdlib.h>
#include <stdio.h>

int main(){
    int a[50],b[50],v[100],
        i,j,n,m, *n1=&n, *m1=&m, *p=v;

    printf("n = ");
    scanf("%d", n1);
    for(i=0;i<n;i++){
        printf("a[%d] = ", i);
        scanf("%d", a+i);
    }
    printf("m = ");
    scanf("%d", m1);
    for(i=0;i<m;i++){
        printf("b[%d] = ", i);
        scanf("%d", b+i);
    }
    i=0;j=0;
    while(i<n || j<m){
        if((*(a+i)<*(b+j) && i<n ) || j==m){
            *p=*(a+i);
            i++;
        } else {
            *p=*(b+j);
            j++;
        }
        p++;
    }
    for(i=0;i<n+m;i++){
        printf("%d ", *(v+i));
    }
    return 0;
}
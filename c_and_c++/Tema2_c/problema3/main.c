#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned int a;
    int n,p,i;

    printf("a = ");
    scanf("%u", &a);
    printf("n = ");
    scanf("%d", &n);
    printf("p = ");
    scanf("%d", &p);
    for(i=0;i<n;i++){
        a=a|(1<<p-i);
    }
    printf("%d\n", a);
    for(i=sizeof(a)+8-1;i>=0;i--){
        printf("%d", (a>>i)&1);
    }
    return 0;
}

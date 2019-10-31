#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned int a;
    int n,i;

    printf("a = ");
    scanf("%u", &a);
    printf("n = ");
    scanf("%d", &n);
    for(i=n-1;i>=0;i--){
        a=a|(1<<i);
    }
    printf("%d\n", a);
    for(i=sizeof(a)+8-1;i>=0;i--){
        printf("%d", (a>>i)&1);
    }
    return 0;
}

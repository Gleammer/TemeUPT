#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned int n;
    int i;

    printf("n = ");
    scanf("%u", &n);
    for(i=sizeof(n)*8-1;i>=0;i--){
        printf("%d", (n>>i)&1);
    }

    return 0;
}

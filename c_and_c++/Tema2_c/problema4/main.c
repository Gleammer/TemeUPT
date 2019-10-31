#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned int x;
    int i;

    printf("x = ");
    scanf("%u", &x);
    for(i=23;i>=16;i--){
        x=x^(1<<i);
    }
    printf("%d\n", x);
    return 0;
}

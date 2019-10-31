#include <stdio.h>
#include <stdlib.h>

void showBits(unsigned int x){
    for(int i=sizeof(x)-1;i>=0;i--){
        printf("%d", 1&(x>>i));
    }
    printf("\n");
}

int main()
{
    unsigned a,b,x;

    printf("a = ");
    scanf("%u", &a);
    printf("b = ");
    scanf("%u", &b);

    if(a>10||a<1||b>10||b<1){
        printf("Input gresit!\n");
    } else {
        x=a;
        for(int i=7;i>3;i--){

        }
    }
    return 0;
}

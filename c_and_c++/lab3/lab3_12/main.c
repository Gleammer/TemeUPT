#include <stdio.h>
#include <stdlib.h>

unsigned int countBits(unsigned x){
    unsigned num = 0;
    while (x){
        num++;
        x >>= 1;
    }
    if(num % 8 != 0)
        return (num/8)+1;
    else
        return num/8;
}

int main(){
    unsigned a;
    printf("a = ");
    scanf("%u", &a);

    int count=0;
    for(int i=countBits(a)*8-1;i>0;i--)
        if((1&(a>>i))!=(1&(a>>i-1)))
            count++;
    printf("%d", ++count);
    return 0;
}

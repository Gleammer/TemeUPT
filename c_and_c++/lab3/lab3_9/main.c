#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int a;
    int s=0;
    printf("a = ");
    scanf("%u", &a);


    for(int i = sizeof(a)*8-1;i>=0;i--)
        s+=(a>>i)&1;
    printf("%d", s);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>


void showBits(unsigned int x, int a){
    for(int i=a*4-1;i>=0;i--){
        printf("%d", 1&(x>>i));
    }
    printf("\n");
}


unsigned int countBits(unsigned int x)
{
   unsigned num = 0;
   while (x)
   {
        num++;
        x >>= 1;
    }
    if(num % 4 != 0)
        return (num/4)+1;
    else
        return num/4;
}

// a) returnează valoarea acestui număr cu ordinea inversă a nibble-urilor

void counterNibba(unsigned int x, int a){
    for(int i=1;i<=a;i++)
        for(int j=1;j<=4;j++)
            printf("%d", 1&(x>>(4*i-j)));
}

// b) returnează valoarea acestui număr cu biții din fiecare nibble în ordine inversă

void reverseNibba(unsigned int x, int a){
    for(int i=a-1;i>=0;i--)
        for(int j=0;j<4;j++)
            printf("%d", 1&(x>>(4*i+j)));
}

//i = sizeof(a)*8 - 1 // de la size pana la 0

int main()
{
    unsigned n;
    char c;

    printf("n = ");
    scanf("%u", &n);
    printf("A sau B ?\n");
    scanf(" %c", &c);

    // -- just for debugging --
    printf("The original binary code:\n");
    showBits(n,countBits(n));
    printf("The modified binary code:\n");
    if(c==65)
        counterNibba(n,countBits(n));
    else
        reverseNibba(n,countBits(n));

    return 0;
}

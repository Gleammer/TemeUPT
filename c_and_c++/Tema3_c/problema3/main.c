#include <stdio.h>
#include <stdlib.h>

int main(){
    int x;

    for(;;){
        printf("x = ");
        scanf("%d", &x);
        if(x==0){
            break;
        } else {
            if(x==(x|0x89)){
                printf("%d %d\n",x, x^0x89);
                // o alternativa a resetarii bitilor ar fi
                // x&0x76
                // insa deja stiu ca pe peozitiile 0 3 7 am biti de 1
                // deci x^0x89 indeplineste aceeasi functionalitate
            }
        }
    }
    //printf("Hello Mr Allen!\n");
    return 0;
}

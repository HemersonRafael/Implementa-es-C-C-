
#include "stdio.h"

int main(){
    int pro = 1, base, exp, i;
    printf("Informe a base: ");
    scanf("%d", &base);
    printf("\nInforme a expoente: ");
    scanf("%d", &exp);

    for(i=1; i<=exp; i++){
        pro = pro * base;
    }
    printf("\n%d^%d = %d\n", base, exp,pro);
    return 0;
}


#include "stdio.h"

int main(){
    int soma = 0, a, b, i;
    printf("Informe o valor de a: ");
    scanf("%d", &a);
    printf("\nInforme o valor de: ");
    scanf("%d", &b);

    for(i=1; i<=b; i++){
        soma = soma + a;
    }
    printf("\n%d*%d = %d\n", a, b, soma);
    return 0;
}

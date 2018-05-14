#include "stdio.h"

int main(){
    int n, cont = 0, soma =0;

    do{
        printf("Informe um valor inteiro: ");
        scanf("%d",&n);
        printf("\n");
        if(n>0){
            soma = soma + n;
            cont++;
        }

    }while(n>0);

    printf("Soma: %d\n", soma);
    printf("Quantos numeros: %d\n", cont);
}

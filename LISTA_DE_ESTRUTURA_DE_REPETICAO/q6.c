#include "stdio.h"

int main(){
    int n, cont = 0, soma = 0, media;

    do{
        printf("Informe um valor inteiro: ");
        scanf("%d",&n);
        printf("\n");
        if(n>0){
            soma = soma + n;
            cont++;
        }

    }while(n>0);
    media = soma/cont;
    printf("Media: %d\n", media);



}

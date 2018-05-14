#include "stdio.h"
#include "string.h"
int main(){
    char chave[] = "caio", nome [30];
    do{
        printf("Informe um nome: ");
        gets(nome);
        if(strcmp(chave,nome) != 0){
            printf("Voce errou tente novamente!\n");
        }
    }while(strcmp(chave,nome) != 0);
    printf("\nVoce acertou!\n");

    return 0;
}

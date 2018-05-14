#include "stdio.h"
#include "stdlib.h"

int main(){
    int chave, n;
    printf("Informe o numero secreto: ");
    scanf("%d",&chave);
    system("cls");
    do{
        printf("Qual e o seu palpite: ");
        scanf("%d",&n);
        if(chave != n){
            printf("\nvoce errou tente novamente!\n");
        }
    }while(chave != n);

    printf("\nvoce acertou!");


    return 0;
}

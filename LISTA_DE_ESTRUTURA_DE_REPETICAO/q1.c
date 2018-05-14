#include "stdio.h"

void ler(int n){
    int i, soma=0;
    for(i=1; i<=n; i++){
        soma = soma + i;
    }
    printf("Soma: %d",soma);
}


int main(){
    int n = 10;
    ler(n);
    return 0;
}

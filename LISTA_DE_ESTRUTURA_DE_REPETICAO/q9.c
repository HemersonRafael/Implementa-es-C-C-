#include "stdio.h"
int primo(int n){
    int i, cont = 0;
    if(n == 1){
        return 0;
    }
    else{
        for(i=1; i<=n; i++){
            if(n%i == 0){
                cont++;
            }
            if(cont > 2){
                return 0;
            }

        }
        return 1;
    }

}
int main(){
    int i, soma =0 ;
    for(i=1;i<=100;i++){
        if(primo(i) == 1){
            printf("%d ",i);
            soma = soma + i;
        }
    }
    printf("\nA soma dos 100 primeiros numeros primos = %d", soma);
    return 0;
}

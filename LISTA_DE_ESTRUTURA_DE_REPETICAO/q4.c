#include "stdio.h"

int quadrado(int x){
    return (x*x);
}
void imprimir(){
    int v[10];
    int i, aux;
    for(i=0; i<10; i++){
        printf("Informe o valor  v[%d]: ", i+1);
        scanf("%d",&v[i]);
    }

    for(i=0; i<10; i++){
        aux = quadrado(v[i]);
        printf("Quadrado v[%d] = %d \n",i , aux);
    }

}

int main(){
    imprimir();

    return 0;
}

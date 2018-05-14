#include "stdio.h"

int main(){
    int a, i;
    printf("Informe o valor de a: ");
    scanf("%d", &a);

    printf("Divisores de %d = ",a);
    for(i=1; i<=a; i++){
       if(a%i == 0){
        printf("%d ", i);
       }
    }

    return 0;
}

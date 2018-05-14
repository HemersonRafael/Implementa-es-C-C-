#include "stdio.h"

int main(){
    int pro = 1 ,a, i;
    printf("Informe o valor de a: ");
    scanf("%d", &a);

    printf("Multiplos de %d = ",a);
    for(i=1; i<=20; i++){
       pro = i * a;
       printf("%d ", pro);
    }

    return 0;
}

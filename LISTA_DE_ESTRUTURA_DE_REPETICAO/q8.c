#include "stdio.h"
int fat(int n){
    int i, pro = 1;
    if(n == 0 || n == 1){
        return 1;
    }
    else{
        for(i=1; i<=n; i++){
            pro = pro * i;
        }
            return pro;
    }
}
int main(){
    int n;
    do{
        printf("Informe um valor inteiro: ");
        scanf("%d",&n);
        if(n != -1){
            printf("Fatorial de %d = %d\n", n,fat(n));
        }
    }while(n != -1);

    return 0;
}

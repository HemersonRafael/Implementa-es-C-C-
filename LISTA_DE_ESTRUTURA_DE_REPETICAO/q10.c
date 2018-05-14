
#include <stdio.h>
main(){
    int a,b,aux,i,mmc;

    printf("\n\nInforme o primeiro numero\n\n");
    scanf("%i",&a);

    printf("\n\nInforme o segundo numero\n\n");
    scanf("%i",&b);
    if (b>a){
        aux=a;
        a=b;
        b=aux;
    }
    if ((a%b)==0){
        mmc=a;
    }
    else{
        for (i=2; i<=b; i++){
            aux=a*i;
            if ((aux%b)==0){
                mmc=aux;
                i=b+1;
            }
        }
    }
    printf("\nO MMC entre %d e %d e igual a %d\n\n",a,b,mmc);

}

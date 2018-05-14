#include "stdio.h"

int main(){
    int teste, contm = 0, contf = 0;
    float total, pm, pf ;
    do{
        printf("Informe o sexo 1 - Masculino , 2 - Feminino e 0 - Sair: ");
        scanf("%d", &teste);
        switch (teste){
        case 1:
            contm++;
            break;

        case 2:
            contf++;
            break;
        default:
            break;

        }

    }while(teste != 0);

    printf("Numero de pessoas do sexo masculino: %d\n", contm);
    printf("Numero de pessoas do sexo feminino: %d\n", contf);
    total = contf + contm;
    pm = (contm/total)*100;
    pf = (contf/total)*100;
    printf("Percentual de pessoas do sexo masculino: %3.2f%%\n", pm);
    printf("Percentual de pessoas do sexo feminino: %3.2f%%\n",pf);



    return 0;
}

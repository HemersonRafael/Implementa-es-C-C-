#include "stdio.h"
void npares(){
    int i=0, cont = 0;
    while(cont<=100){
        if((i%2) == 0){
            printf("par %d = %d\n", cont, i);
            cont++;
        }
        i++;
    }
}
int main(){

    npares();
}


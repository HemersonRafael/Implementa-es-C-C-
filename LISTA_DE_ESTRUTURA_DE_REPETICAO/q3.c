#include "stdio.h"
void npares(int n){
    int i;
    for(i=1; i<=n; i++){
        if((i%2) == 0){
            printf("%d ", i);
        }
    }
}
int main(){
    int n = 100;
    npares(n);
}

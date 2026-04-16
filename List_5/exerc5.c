#include <stdio.h>

void alter(int *n){
    *n = 1000;
}
int main(){

    int num;
    scanf("%d", &num);
    printf("Valor da variável ANTES da função alterar [ %d ]\n", num);
    alter(&num);
    printf("Valor da variável DEPOIS da função alterar [ %d ]\n", num);
    return 0;
}
#include <stdio.h>

int main(){

    int a;
    scanf("%d", &a);
    printf("Valor definido para a variável no escopo global: [ %d ]\n", a);

    if(1){
        a = a + 2;
        printf("Valor definido para a variável no escopo do If (Local): [ %d ]\n", a);
    }

    return 0;
}
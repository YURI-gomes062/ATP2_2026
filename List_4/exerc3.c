#include <stdio.h>
void t(int *b);

int main(){

    int a;
    scanf("%d", &a);
    printf("%d\n", a);
    t(&a);
    
    return 0;
}
void t(int *b){// Passagem por refêrencia, a função vai no endereço da variavel e altera seu valor original, mantendo a mesma variavel.
    printf("%d",*b);
}
#include <stdio.h>

// Declarand as funções...
void result(int par_soma);
int addition(int *c, int *d);


int main(){
    
    int a,b;
    scanf("%i %i", &a ,&b);
    addition(&a, &b);
    return 0;
}
int addition(int *c, int *d){ // função respopnsável por fazer a adição dos valores lidos...

    int soma = *c + *d;
    result(soma);

    return 0;
}
void result(int par_soma){ // função responsável por apresentar os resultados...

    printf("O resultado é %i\n",par_soma);
}
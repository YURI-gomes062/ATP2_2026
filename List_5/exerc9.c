#include <stdio.h>
int alter_var(int *nu);
int alter_varr(int *nu);


int main(){

    int num;
    scanf("%d", &num);
    alter_var(&num);
    printf("%d\n",num);
    alter_varr(&num);
    printf("%d\n",num);

    return 0;
}
int alter_var(int *nu){ // funcao recursiva que aumenta o valor do número.

    if(*nu >= 15){ // condicao para parar a funcao recursiva.
        return 0;
    }
    return (*nu) + alter_var(nu + 1); // A funcao aumenta *nu + *nu  até *nu == 10.
}
int alter_varr(int *nu){ // funcao interativa que aumenta o valor do número por meio de estrutura de repetição.

    while(*nu < 20 ){
        (*nu)++;
    }
    return *nu;
}
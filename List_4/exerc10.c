#include <stdio.h>
int value2(int *value11);
int value1(int *value22);

void main(){

    int value;
    printf("Algoritmo de alternancia de valores de variável por meio de funções com passagem de refêrencia:\n");
    scanf("%d", &value);
    printf("-- Primeiro valor lido, definido pelo user. [ %d ]\n", value); // -- Primeiro valor lido, definido pelo user.

    value = value1(&value);
    printf("-- Segundo valor, alterado por passagem de refêrencia pela função value1. [ %d ]\n", value); // -- Segundo valor, alterado por passagem de refêrencia pela função value1.

    value = value2(&value);
    printf("-- terceiro valor, alterado por passagem de refêrencia pela função value2. [ %d ]\n", value); // -- terceiro valor, alterado por passagem de refêrencia pela função value2.


}
int value1(int *value11){ // A primeira função é responsável por adicionar +10 ao valor da variável.

    return *value11 = *value11 + 10;
}
int value2(int *value22){ // a segunda função consiste em adicionar +20 ao valor da variável. 

    return *value22 = *value22 + 20; 
}
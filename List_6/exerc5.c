#include <stdio.h>
int greater_value(int h[]);

int main(){
    int g[10] = {1,2,3,4,5,6,77,8,9,5};
    printf("%d\n", greater_value(g));

    return 0;
}
int greater_value(int h[]){ //funcao retorna maior valor

    int greatest_value = 0; // variavel que vai receber o valor do maior indice
    for(int i = 0; i <= 10;i++){
        if(*(h + i) >= greatest_value){// se o valor do indice do ponteiro for maior que o valor da variavel, então a variavel armazena esse valor.
            greatest_value = *(h + i);
        }
    }
    return greatest_value; // retorna o maior valor do vetor.
}
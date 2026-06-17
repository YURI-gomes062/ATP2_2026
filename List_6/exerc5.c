#include <stdio.h>
int greater_value(int tamanho,int h[]);


int main(){
    int g[10] = {1,2,3,4,5,6,77,8,9,5};
    printf("%d\n", greater_value(10,g)); // inserir tamanho e o vetor que estamos trabalhando

    return 0;
}
int greater_value(int tamanho,int h[]){ // Function that returns the largest value

    int large_number = 0; // variavel que recebera o maior número do array.

    for(int i = 0; i <= tamanho; i++){ // lupin para rodar o número de vezes do tamanho do vetor.
        if(large_number < h[i]){
            large_number = h[i];
        }
    }

    return large_number;
}
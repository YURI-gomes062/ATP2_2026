#include <stdio.h>

int main() {
    int vetor[5] = {1, 2, 3, 4, 5}; // vetor de números inteiros.
    int *p = vetor; // ponteiro usado para percorrer o vetor *(p+1)    OBS: Seu valor *p = vetor[0] = 1;

    printf("Valores originais:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d \n", vetor[i]);
    }
    printf("Valores alterados:\n");
    for(int i = 0; i < 5; i++) {
        *(p + i) = *(p + i) * 2; 
        printf("%d \n", vetor[i]);
    }

    return 0;
}
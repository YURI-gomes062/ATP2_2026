#include <stdio.h>

int main() {
    int vetor[5] = {1, 2, 3, 4, 5};
    
    int *p = vetor; 

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
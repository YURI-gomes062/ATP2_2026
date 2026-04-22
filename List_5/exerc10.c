#include <stdio.h>

int alter_value(int *point, int size);

int main() {
    int nums[5] = {1, 2, 3, 4, 5};
    int *p = nums;

    alter_value(p, 5);

    printf("\nPrimeiro elemento apos a funcao: %d\n", nums[0]);

    return 0;
}

int alter_value(int *point, int size) {
    for (int i = 0; i < size; i++) {
        
        *(point + i) = *(point + i) * 10; // point[i] = point[i] * 10;
        printf("Processando indice %d: valor alterado para %d\n", i, *(point + i));
    }
    return 0;
}    
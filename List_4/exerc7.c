#include <stdio.h>
int incrementer(int *num1);

int main(){ // Incrementar uma variável significa, de forma bem simples, somar 1 ao valor atual dela, resposta do gemini <- ...

    int num;
    scanf("%d", &num);
    printf("Valor da variável antes do incremento: [ %d ]", num);
    printf("%d", incrementer(&num));

    return 0;
}
int incrementer(int *num1){

    return *num1 += 1;
}

// x = x + 1; (A forma mais matemática)

// x += 1; (Forma abreviada)

// x++; (O famoso operador de incremento)

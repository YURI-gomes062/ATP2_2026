#include <stdio.h>
void reference(int *num);
int value(int num);

int main(){

    int num;
    scanf("%d", &num);
    printf("Valor da variável na função MAIN [ %d ]\n", num);
    printf("Valor da variável na função por valor [ %d ]\n", value(num));
    reference(&num);
    printf("Valor da variável na função por refêrencia [ %d ]\n", num);

    return 0;
}
void reference(int *num){

    *num = *num + 1000;
}
int value(int num){

    return  num + 500;
}

#include <stdio.h>
void t(int b);

int main(){

    int a;
    scanf("%d", &a);
    printf("%d\n", a);
    t(a);
    
    return 0;
}
void t(int b){// valor por refêrencia, a função copia o valor da variavel na main e atribue a outra variavel com escopo local.
    b = b * 2;
    printf("%d",b);
}
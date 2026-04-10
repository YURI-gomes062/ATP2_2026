#include <stdio.h>
void t(int *c, int *d);

int main(){

    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d %d\n", a, b);
    t(&a,&b);
    printf("%d %d\n", a, b);

    return 0;
}
void t(int *c, int *d){ //função que troca valores

    // Valores de teste de lógica : c = 5 // d = 6
    *c = *c + *d; // 11
    *d = *c - *d; // 5
    *c = *c - *d; // 6
}
#include <stdio.h>

int expon(int n, int ex){

    // uma potência é uma x * x de N vezes.
    if(ex == 0){
        return 1;
    }
    return n * expon(n ,ex -1); 
    // explicação do return: 
    // ex: n = 5 , considere o expoente "ex" como sendo um contador, toda vez que ele chama a função, ele retira 1
}
int main(){

    int num,expo;
    printf("Digite o primeiro valor para a base e o segundo para o expoente:\n");
    scanf("%d %d", &num, &expo);
    expon(num,expo);
    printf("%d\n", expon(num,expo));

    return 0;
}
#include <stdio.h>

int count(int n){

    if(n > 0){
        return n + 1;
    }   
    return n - 1;
}
int main(){

    int num;
    scanf("%d", &num);
    printf("%d",count(num));

    return 0;
} // O jeito mais facil seria pegar o valor de entrada dos números e somar  + 1.
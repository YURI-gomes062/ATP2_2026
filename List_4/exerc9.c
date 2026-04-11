#include <stdio.h>
void presentation();

int counter = 0;

int main(){

    int a = 5;
    while(a <= 7){
        presentation();
        a++;
    }
    printf("O contador marcou [ %d ]\n",counter );
    return 0;
}
void presentation(){

    printf("Seja bem vindo!!\n");
    counter += 1;
}
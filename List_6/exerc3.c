#include <stdio.h>
int show_values(char veet[]);

int main(){

    char vet[5] = {'a','b','c','d','e'};
    show_values(vet);

    return 0;
}
int show_values(char veet[]){

    for(int i = 0; i <= 4; i++){
        printf("%c\n", veet[i]);
    }

    return 0;
}
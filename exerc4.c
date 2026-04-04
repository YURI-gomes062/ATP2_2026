#include <stdio.h>

void presentation(char* name){
    
    printf("Olá %s\n", name);
}

int main(){

    char name[48] = {0x00};
    scanf("%47s", name);
    presentation(name);
    return 0;
}
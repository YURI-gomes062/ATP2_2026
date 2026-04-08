#include <stdio.h>

int checker(int n){
    return ((n&1)!= 0); // Operação Bitwaise end, compara os valores binários de " N " e " 1 " e retorna 1 ou 0 para a função main(verdadeiro ou falso).
}
int main(){
    int num;

    if(checker(num)){
        printf("aprovado\n");
    }else{
        printf("reprovado\n");
    }

    return 0;
}

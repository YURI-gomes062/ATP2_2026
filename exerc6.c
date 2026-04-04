#include <stdio.h>

void approved (float nota){
    if(nota >= 6){
        printf("Aprovado\n");
    }else{
        printf("Reprovado\n");
    }
}

float media(float n1,float n2,float n3){

    return (n1 + n2 + n3 ) / 3;
}

int main(){

    float no1,no2,no3,media1;
    scanf("%f %f %f", &no1, &no2, &no3);

    media1 = media(no1, no2, no3);
    approved(media1);


    return 0;
}
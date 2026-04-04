#include <stdio.h>

float media(float n1,float n2,float n3){

    return (n1 + n2 + n3 ) / 3;
}


int main(){

    float no1,no2,no3,media1;
    scanf("%f %f %f", &no1, &no2, &no3);

    media1 = media(no1, no2, no3);
    printf("%.2f\n",media1);

    return 0;
}

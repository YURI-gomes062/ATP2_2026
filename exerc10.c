#include <stdio.h>
int addition(int *c, int *d, int *e);
float average(int *e, int *f, int *g);
int largest_number(int *c, int *d, int *e);

int main(){ // função principal...

    int a,b,c; // v
    scanf("%i %i %i", &a, &b, &c); // v
    printf("A soma é  %i\n", addition(&a, &b, &c));

    printf("A media é %.2lf\n", average(&a, &b, &c));
    printf("O maior número é %i\n",largest_number(&a, &b, &c));

    return 0;
}
int addition(int *c, int *d, int *e){ // função responsável por fazer a adição dos valores lidos...

    int soma = *c + *d + *e;

    return soma;
}
float average(int *c, int *d, int *e){ // função média...
    
    float media = (*c + *d + *e) / 3;

    return media;
}
int largest_number(int *c, int *d, int *e){

    if(*c >= *d && *c >= *e){
        return *c;
    } else if(*d >= *c && *d >= *e){
        return *d;
    }else{
        return *e;
    }
}
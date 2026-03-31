#include <stdio.h>
int dobro(int *a);

int main(){

int num;
scanf("%i",&num);

dobro(&num);
printf("%i", num);

    return 0;
} 
int dobro(int *a){

    *a = (*a *2);
    return 0;
}
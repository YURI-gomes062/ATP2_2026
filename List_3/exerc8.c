#include <stdio.h>
void square(int *num1);

int main(){

    int num;

    scanf("%i",&num);
    square(&num);
    printf("%i\n",num);

    return 0;
}
void square(int *num1){

    *num1 = *num1 * *num1;
}
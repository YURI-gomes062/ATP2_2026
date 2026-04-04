#include <stdio.h>


int soma(int c,int d){
    int soma2 = c + d;
    
    return soma2;
}

int main(){

    int a,b,soma1;
    scanf("%d %d", &a, &b);

    

soma1 = soma(a,b);
printf("%d\n",soma1);
    return 0;
}


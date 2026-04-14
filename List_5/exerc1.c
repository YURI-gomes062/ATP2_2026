#include <stdio.h>


int fatorial(int nu){

    if(nu == 1 || nu == 0){
        return 1;
    }

    return nu * fatorial(nu - 1);
}
int main(){

    int num;
    scanf("%d",&num);
    fatorial(num);
    printf("%d\n",fatorial(num));
    return 0;
}
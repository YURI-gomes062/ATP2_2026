#include <stdio.h>

int soma(int num){

    if(num == 0){
        return 0;
    }
    return num + soma(num-1);
}
int main(){

    int n;
    scanf("%d",&n);
    printf("%d",soma(n));

    return 0;
}
#include <stdio.h>
void t(int b);

int main(){

    int a;
    scanf("%d", &a);
    printf("%d\n", a);
    t(a);
    
    return 0;
}
void t(int b){
    b = b * 2;
    printf("%d",b);
}
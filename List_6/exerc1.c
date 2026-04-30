#include <stdio.h>

int main(){

    int g[5] = {1,2,3,4,5};
    g[0] = 2; // valores alterados manualmente
    printf("%d\n", g[0]);
    g[2] = 4; // valores alterados manualmente
    printf("%d\n", g[2]);
    return 0;
}
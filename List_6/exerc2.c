#include <stdio.h>
void show_values(int g[]);

int main(){

    int h[5];
    for(int i = 0; i <= 4; i++){
        scanf("%d", &h[i]);
    }
    show_values(h);
    return 0;
}
void show_values(int g[]){
    int i; //contador;
    while(i <= 4){
        printf("\n%d\n", g[i]);
        i++;
    }
}
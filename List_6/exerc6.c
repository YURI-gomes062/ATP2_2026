#include <stdio.h>
int pairs_cont(int t, int g[]);

int main(){

    int g[10] = {1,2,3,4,5,6,7,8,9,10};

    printf("%d", pairs_cont(10,g));

    return 0;
}
int pairs_cont(int t, int g[]){

    int count = 0; // variavel contador
    for(int i = 0; i < t; i++){
        if(g[i] % 2 == 0){
            count++;
        }
    }

    return count;

}
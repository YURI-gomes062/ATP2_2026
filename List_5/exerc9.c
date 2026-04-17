#include <stdio.h>
int recursive(int *nu);
int interactive(int *nu);

int main(){

    int num;
    scanf("%i", &num);
    interactive(int *nu);
    recursive(int *nu);

    return ;
}
int interactive(int *nu){

    int result = 1;
    
    for(int i = 1; i <= *nu ;i++){
        result = result + 1;
    }
    return result;
}
int recursive(int *nu){

    if(*nu = 1 || *nu == 0){
        return 0;
    }
    return ((*nu) * recursive(*nu - 1));
}

#include <stdio.h>
int alter_value(int *point, int size);

int main(){

    int nums[5] = {1, 2, 3, 4, 5}; // vetor
    int *p = nums;
    alter_value(p,4);
    printf("%d", *p);

    return 0;
}
int alter_value(int *point, int size){

    for(int i = 0; i < size; i++){
    
        printf("%d\n", *point);
        *(point + i) = *(point + i + 1);
    }
    return 0;
}

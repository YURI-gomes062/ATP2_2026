#include <stdio.h>
int soma_elements(int g[]);

int main(){

    int h[5] = {10,20,30,40,50};
    printf("%d\n", soma_elements(h));
    return 0;
}
int soma_elements(int g[]){ // funcao soma indices;

  int result_ind = 0;
  for(int i = 0; i <= 4; i++){
    result_ind += g[i];
  }

  return result_ind;
}
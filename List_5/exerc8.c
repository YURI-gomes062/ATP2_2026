#include <stdio.h>
void alter_char(char *beeble);

int main(){

    char word[10];
    char *p = word;
    printf("Digite uma palavra de até 9 digitos:\n");
    scanf("%s", p);
    alter_char(p);
    printf("Alteração da primeira letra = %s\n", word);

    return 0;
}
void alter_char(char *beeble){

   *beeble = 'x';

}
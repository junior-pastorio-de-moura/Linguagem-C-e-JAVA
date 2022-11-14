#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<locale.h>
/*STRLEN = Retorna o tamanho de uma string de acordo com o
caractere final de string.*/

/*Na função abaixo contamos quantos caracteres existem
na frase digitada pelo usuário.*/
int main(){
    system("clear");
    char frase[256];
    printf("Digite uma frase: ");
    gets(frase);
    printf("A frase que você digitou tem %d caracteres.\n", (int) strlen(frase));
    return 0;
}
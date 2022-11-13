#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<locale.h>
/*
STRCAT = Adiciona o conteúdo da string origem ao final da string destino.
*/
int main(){
    system("clear");
    char str[80];
    strcpy(str, "Essas ");
    strcat(str, "strings ");
    strcat(str, "estão ");
    strcat(str, "concatenadas.");
    puts(str);
    return 0;
}
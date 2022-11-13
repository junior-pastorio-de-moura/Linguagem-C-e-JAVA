#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<locale.h>
/*
STRCPY = Essa função copia o conteúdo da string origem
para a string destino.
*/
int main(){
    system("clear");
    char str1[] = "Exemplo";
    char str2[40];
    char str3[40];
    //Copia str1 para str2
    strcpy(str2, str1);
    //Copia "cópia realizada com sucesso para str3":
    strcpy(str3, "cópia realizada com sucesso");
    printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
    return 0;
}
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<locale.h>
/*STRSTR = Localiza uma substring e retorna um ponteiros
para a primeira ocorrência de str2 em str1*/
int main(){
    system("clear");
    char str[] = "Umas string simples!";
    char * pch;
    puts(str);
    pch = strstr(str, "simples");
    printf("Encontrado na posição [%ld]\n", pch-str);
    strncpy(pch, "legal!!", 7);
    puts(str);
    return 0;
}
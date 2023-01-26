#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(void){
    char frase[45] = "Suco de limão";
    char outra[45] = "..";
    char palavra1[45];
    char palavra2[45];
    puts(frase);
    puts(outra);
    printf("\nCopiando string\n");

    strcpy(outra, frase);
    /*Copia a string "frase" e passa para a variável "outra", substituindo o valor dela*/
    puts(frase);
    puts(outra);

    printf("Digite uma palavra: ");
    fgets(palavra1, 45, stdin);

    printf("Digite outra palavra: ");
    fgets(palavra2, 45, stdin);

    /*Comparando duas strings*/
    int a = strcmp(palavra1, palavra2);
    if (a == 0)
    {
        printf("\nAs strings são iguais!\n");   
    } else{
        printf("\nAs strings são diferentes!\n");   
    }
    return 0;
}
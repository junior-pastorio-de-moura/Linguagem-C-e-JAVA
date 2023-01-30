#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
//Este código deixa a palavra que o usuário digita em maiúscula
#define NOME_TAM 30

int main(void){
    char nome[NOME_TAM];
    int i;
    system("clear");
    printf("Digite o nome do aluno: ");
    fgets(nome, NOME_TAM, stdin);
    printf("\nO nome antes da mudança: %s", nome);

    for (int i = 0; i < NOME_TAM; i++)
    {
        nome[i] = toupper(nome[i]);
    }
    printf("\nO nome depois da mudança: %s", nome);   
    return 0;
}
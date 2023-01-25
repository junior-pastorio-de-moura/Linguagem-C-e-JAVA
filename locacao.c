#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<math.h>

#define TAM_NOME_CLIENTE 100

struct cliente
{
    char nome[TAM_NOME_CLIENTE];
    int idade;
};

struct filme
{
    int classificacao_filme;
    int esta_disponivel;
};

int main(void){
    struct cliente cli;
    struct filme fi;

    /*Fazendo a leitura dos dados*/
    printf("\nInforme o nome do cliente: ");
    fflush(stdin);
    fgets(cli.nome, TAM_NOME_CLIENTE, stdin);

    printf("\nInforme a idade do cliente: ");
    scanf("%d", &cli.idade);

    printf("\nInforme a classificação do filme: ");
    scanf("%d", &fi.classificacao_filme);

    printf("\nInforme (0) se o filme não está disponível ou (1) caso esteja: ");
    scanf("%d", &fi.esta_disponivel);

    /*Mostrando os dados*/
    printf("\nCliente %s", cli.nome);
    printf("\nIdade: %d anos", cli.idade);
    printf("\nClassificação do filme: %d anos", fi.classificacao_filme);
    printf("\nEstá disponível: %d", fi.esta_disponivel);
    printf("\nFilme pode ser locado pelo cliente: %d", (fi.esta_disponivel) && (cli.idade >= fi.classificacao_filme));
    printf("\nAnos restantes: %d", (cli.idade < fi.classificacao_filme) * (fi.classificacao_filme - cli.idade));

    return 0;
}
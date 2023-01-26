#include<stdlib.h>
#include<stdio.h>
#include<string.h>

struct matematica
{
    float prova1;
    float prova2;
    float media;
};

struct fisica
{
    float prova1;
    float prova2;
    float media;
};

struct quimica
{
    float prova1;
    float prova2;
    float media;
};

struct aluno
{
    char nome[25];
};


int main(void){
    struct aluno aluno1;
    struct quimica quim;
    struct matematica mat;
    struct fisica fis;
    system("clear");
    printf("Digite o nome do aluno: ");

    //Lendo dados da estrutura aluno nomeada como aluno1
    scanf("%s", aluno1.nome);
    //Mostrando os dados da estrutura
    system("clear");
    printf("Nome do aluno: ");
    puts(aluno1.nome);

    //Lendo os dados e realizando os cálculos das médias das provas das 3 matérias
    printf("Digite a nota da primeira prova de matematica: ");
    scanf("%f", &mat.prova1);

    printf("Digite a nota da segunda prova de matematica: ");
    scanf("%f", &mat.prova2);

    mat.media = ((mat.prova1 + mat.prova2) / 2);

    printf("Digite a nota da primeira prova de física: ");
    scanf("%f", &fis.prova1);

    printf("Digite a nota da segunda prova de física: ");
    scanf("%f", &fis.prova2);

    fis.media = ((fis.prova1 + fis.prova2) / 2);

    printf("Digite a nota da primeira prova de química: ");
    scanf("%f", &quim.prova1);

    printf("Digite a nota da segunda prova de química: ");
    scanf("%f", &quim.prova2);

    quim.media = ((quim.prova1 + quim.prova2) / 2);

    printf("\nMédia das provas:\n");
    printf("\nFísica: %.1f pontos\n", quim.media);
    printf("\nMatemática: %.1f pontos\n", mat.media);
    printf("\nFísica: %.1f pontos\n", fis.media);
    return 0;
}
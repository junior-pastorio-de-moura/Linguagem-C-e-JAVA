#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>    
#include <locale.h>
#include<conio.h>
#include<time.h>

int main(){
    int nAlunos, nNotas;
    int x = 1, i = 1;
    float notas[i][x];
    printf("Quantos alunos tem na sala: ");
    scanf("%d", &nAlunos);
    printf("Quantas avaliacoes vao ser realizadas? ");
    scanf("%d", &nNotas);
    for (; i <= nAlunos; i++)
    {
        system("cls");
        for (; x <= nNotas; x++)
        {
            printf("%d.o aluno:\n", i);
            printf("%d.a avaliacao: ", x);
            scanf("%f" &notas[i][x]);
        }
        x = 1;
    }
    
    system("pause");
    return 0;
}

/*
Criar um programa que pergunte quantos alunos tem na sala, e quantas avaliações, receba as
notas das avaliações dos n alunos, e mostre uma lista com as notas de cada avaliação de cada 
aluno, suas respectivas médias, e diga se estão aprovados, reprovados, ou em recuperação;
*/
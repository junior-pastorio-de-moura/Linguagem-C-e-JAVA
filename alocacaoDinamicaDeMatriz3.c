#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<locale.h>

int main(){
    system("clear");
    int i, linhas, colunas;
    //p é um ponteiro para um ponteiro
    int **p;
    printf("Digite a quantidade de linhas e colunas\n");
    scanf("%d%d", &linhas, &colunas);

    //Aloca um array de ponteiros, um para cada linha
    p = (int *) malloc (linhas * sizeof(int *));
    //Cada um dos ponteiros receberá um array de inteiros.
    for (i = 0; i < linhas; ++i)
    {
        p[i] = (int *) malloc (colunas * sizeof(int));
    }
    return 0;
}
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

#define LINHAS 2
#define COLUNAS 4

void imprimir_matriz(int a[][COLUNAS], int linhas, int colunas){
    int linha, coluna;
    for (linha = 0; linha < linhas; linha++)
    {
        for (coluna = 0; coluna < colunas; coluna++)
        {
            printf("%d ", a[linha][coluna]);
        }
        printf("\n");
    }
}

int main (){
    system("clear");
    int numeros[LINHAS][COLUNAS] = {
        {3, 6, 2, 53},
        {5, 4, 7, 82}
    };
    imprimir_matriz(numeros, LINHAS, COLUNAS);
    return 0;
}
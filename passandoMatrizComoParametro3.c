#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<locale.h>
//Exemplo de passagem de uma matriz dinâmica como parâmetro
int main(){
    system("clear");
    int **p;
    //Aloca um array de ponteiros, um para cada linha.
    p = (int **) malloc(linhas * sizeof(int *));
    //Cada um dos ponteiros receberá um array de inteiros.
    int i;
    for (i= 0; i < linhas; ++i)
    {
        p[i] = (int **) malloc(colunas * sizeof(int));
    }
    matriz_dinamica(p);
    return 0;
}
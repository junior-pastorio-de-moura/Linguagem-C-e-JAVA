#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<locale.h>
/*
Pode-se alocar variáveis na heap durante a execução do programa
com o uso das funções malloc e calloc nos arquivos de cabeçalhos
da biblioteca stdlib.h
*/

void* malloc(int tamanho); 
/*A função acima aloca ne heap o tamanho máximo de bytes definida pelo 
parâmetro tamanho e retorna um ponteiro para a primeira posição dessa memória.*/
int main(){
    system("clear");
    //Alocando memória para um único ponteiro
    int *p;
    p = (int *) malloc (sizeof(int));
    /*A função sizeof retornará a quantidade de bytes 
    utilizada pelo tipo inteiro e essa quantidade é utilizada pelo malloc
    para alocar a memória*/

    /*(int *) = converte áreas de memórias para o tipo inteiro.*/

    return 0;
}
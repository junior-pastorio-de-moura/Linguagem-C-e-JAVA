#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<string.h>
#include<math.h>

int main(){
    system("clear");
    //Aloca um endereço de memória para uma variável dinâmica
    int *p = malloc(sizeof(int));
    //Destroi essa variável
    free(p);

    int n;
    int v[9]; //Vetor estático com tamanho constante
    int *w = malloc(n *sizeof(int)); //Vetor dinâmico com tamanho variável

    return 0;
}
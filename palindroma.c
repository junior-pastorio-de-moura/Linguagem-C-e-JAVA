#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include"./ed/pilha.h"//Pilha de char
#include"./ed/fila.h"//Fila de char

//Função para criação de fila
Fila fila(int m){
    Fila F = malloc(sizeof(struct fila));
    F -> max = m;
    F -> total = 0;
    F -> inicio = 0;
    F -> final = 0;
    F -> item = malloc(m*sizeof(Itemf));
    return F;
}

//Função para teste de fila vazia
int vaziaf(Fila F){
    return (F-> total == 0);
}

//Função para teste de fila cheia
int cheiaf(Fila F){
    return (F-> total == F->max);
}

//Função para inserção em fila
void enfileira(Itemf x, Fila F){
    if(cheiaf(F)){
        puts("Fila cheia!");
        abort();
    }
    F->item[F->final] = x;
    avanca(F->final);
    F->total++;
}

//Função para remoção em fila
Itemf desenfileira(Fila F){
    if(vaziaf(F)){
        puts("Fila vazia!");
        abort();
    }
    Itemf x = F->item[F->inicio];
    avanca(F->inicio);
    F->total--;
    return x;
}

//Função para destruição de fila
void destroif(Fila *G){
    free((*G)->item);
    free(*G);
    *G = NULL;
}

int main(void){
    system("clear");

    char e[256];
    Fila F = fila(256);
    Pilha P = pilha(256);
    printf("\nFrase? ");
    gets(s);
    
    for(int i = 0; s[i]; i++)
    {
        if(isalpha(s[i])){
            enfileira(s[i], F);
            empilha(s[i], P);
        }
    }
    while(!vaziaf(F) && desenfileira(F) == desempilha(p));

    if(!vaziaf(F)){
        puts("A frase é palindroma");
    } else{
        puts("A frase não é palindroma");
    }
    destroif(&F);
    destroip(&P);
    return 0;
}
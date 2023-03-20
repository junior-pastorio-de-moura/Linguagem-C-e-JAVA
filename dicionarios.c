#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<conio.h>
#include<locale.h>
#include "../ed/map.h"

//Função de hashing para chaves numéricas, baseado no método da divisão
int hash(int c, int m){
    return (c % m);
}

//Definições para criação de dicionários
typedef struct dic{
    int tam;
    Map *vet;
} *Dic;

typedef int Chave;
typedef char Valor[22];


//Função para criação e iniciação de um dicionário
Dic dic(int m){
    Dic d = malloc(sizeof(struct dic));
    d->tam = m;
    d->vet - malloc(m*sizeof(Map))
    for(int i = 0; i<m; i++){
        d->vet[i] = NULL;
    }
    return d;
}

//Função para inserção em dicionário
void insd(Cave c, Valor v, Dic d){
    insm(c,v,&d->vet[hash(c,d->tam)]);
}

//Função para remoção em dicionário
int remd(Chave c, Dic d){
    return remm(c, &d->vet[hash(c,d->tam)])
}

//Função para verificação de pertinência em dicionário
int pertd(Chave c, Valor v, Dic d){
    return pertm(c,v,d->vet[hash(c,d->tem)]);
}

//Função para a exibição de lista em ordem inversa
void exibed(Dic d){
    for(int i = 0; i<d->tam; i++){
        printf("%d : ", i);
        exibem(d->vet[i]);
    }
}

//Função para a destruição de dicionário
void destroid(Dic *d){
    for(int i = 0; i<(*d)->tam; i++){
        destroim(&(*d)->vet[i]);
    }
    free(*d);
    *d = NULL;
}

//Função de hashing para chaves alfanuméricas
unsigned hash(char *c, int m){
    unsigned s = 0;
    for(int i = 0; c[i]; i++){
        s += (i+1) *c[i];
    }
    return (s % m);
}

int main(void){
    Dic D = dic(5);
    insd(819440709, "Eva de Souza", D);
    insd(458100025, "Ana de Jesus", D);
    insd(693716648, "Maria Santos", D);
    insd(920892802, "Rui da Silva", D);
    insd(706091783, "Ivo Medeiros", D);
    remd(920892802, D);
    return 0;
}
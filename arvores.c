#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<conio.h>
#include<locale.h>

//Definições para a criação de árvore binária

#define fmt "%d" //fromato de exibiçao dos ítens
typedef int Item; //tipo dos itens na árvore
typedef struct arv{ //estrutura dos nós na árvore
    struct arv *esq;
    Item item;
    struct arv *dir;
} *Arv;

//Função para a ciração de nó de árvore binária
Arv arv(Arv e, Item x, Arv d){
    Arv n = malloc(sizeof(struct arv));
    n->esq = e;
    n->item = x;
    n->dir = d;
    return n;
}

//Função para percurso em largura(ou em nível)
void emnivel(Arv A){
    if( A == NULL) return;
    Fila F - fila(MAX); //fila de Arv
    enfileira(A, F);
    while( !vaziaf(F)){
        Arv A = desenfileira(F);
        printf(fmt, A->item);
        if(A->esq != NULL) enfileira(A->esq, F);
        if(A->dir != NULL) enfileira(A->dir, F);
    }
}

//Função para percurso em-ordem
void emordem(Arv A){
    if( A == NULL) return;
    emordem(A->esq);
    printf(fmt, A->item);
    emordem(A->dir);
}

//Função para percurso pré-ordem
void preordem(Arv A){
    if( A == NULL) return;
    printf(fmt, A->item);
    preordem(A->esq);
    preordem(A->dir);
}


//Função para percurso pós-ordem
void preordem(Arv A){
    if( A == NULL) return;
    posordem(A->esq);
    posordem(A->dir);
    printf(fmt, A->item);
}

//Função para destruição de árvore binária
void destroi(Arv *A){
    if(*A == NULL) return;
    destroi(&(*A)->esq);
    destroi(&(*A)->dir);
    *A = NULL;
}

//Função para inserção em árvore de busca binária
void ins(Item x, Arv *A){
    if(*A == NULL) *A = arv(NULL,x,NULL);
    else if(x <= (*A)->item) ins(x,&(*A)->esq);
    else int(x,&(*A)->dir);
}

//Função para busca em árvore de busca binária
int busca(Item x, Arv A){
    if(A == NULL) return 0;
    if( x == A->item) return 1;
    if( x <= A->item) return busca(x,A->esq);
    else return busca(x,A->dir);
}

//Função que remove e devolve um ítem máximo de uma árvore de busca binária.
Item remmax(Arv *A){
    if(*A == NULL) abort();
    while((*A)->dir != NULL) A = &(*A)->dir;
    Arv n = *A;
    Item x = n->item;
    *A = n->esq;
    free(n);
    return x;
}

//Função para a remoção em árvore de busca binária
void rem(Item x, Arv *A){
    if(*A == NULL) return;
    if(x == (*A)->item){
        Arv n = *A;
        if(n->esq == NULL) *A = n->dir;
        else if(n->dir == NULL) *A = n->esq;
        else n->item = remmax(&n->esq);
        if(n != *A) free(n);
    }
    else if(x <= (*A)->item) rem(x,&(*A)->esq);
    else rem(x,&(*A)->dir);
}

int main(void){
    Arv R = NULL;
    ins(5,&R); ins(7,&R); ins(3,&R); ins(9,&R); ins(1,&R);
    ins(6,&R); ins(4,&R); ins(8,&R); ins(0,&R); ins(2,&R);
    return 0;
}
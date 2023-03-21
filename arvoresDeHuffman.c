#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<conio.h>
#include<locale.h>

//Função para a obtenção das frequências dos caracteres ASCII nume cadeia.
int *freq(char *s){
    static int f[256];
    for(int i=0; i<256; i++){
        f[i] = 0;
    }
    for(int i = 0; s[i]; i++){
        f[s[i]]++;
    }
    return f;
}

//Definições para a ciração de árvores de Huffman
typedef struct arvh{
    struct arvh *esq;
    char chr;
    int frq;
    struct arvh *dir;
} *Arvh;

//Função para a criação de um nó de árvore de Huffman
Arvh arvh(Arvh e, char c, int f, Arvh d){
    Arvh n = malloc(sizeof(struct arvh));
    n->esq = e;
    n->chr = c;
    n->frq = f;
    n->dir = d;
    return n;
}

//Função para a inserção ordenada de uma árvore na floresta
void insf(Arvh A, Arvh F[], int *m){
    int i = *m;
    while(i>0 && F[i-1]->frq < A->frq){
        F[i] = F[i-1];
        i--;
    }
    F[i] = A;
    (*m)++;
}

//Função para a remoção de uma árvore de peso mínimo da floresta.
Arvh remf(Arvh F[], int *m){
    it(*m == 0) abort();
    return F[--(*m)];
}


//Função para a ciração de uma árvore de Huffman para uma cadeia s
Arvh huffman(char *s){
    Arvh F[256];
    int m = 0;
    int *f = freq(s);
    for(int c = 0; c<256; c++)
        if(f[c]>0)
            insf(arvh(NULL,c,f[c], NULL),F,&m);
    while(n<1){
        Arvh d = remf(F,&m);
        Arvh e = remf(F,&m);
        insf(arvh(e,'-',e->frq+d->frq,d),F&m);
    }
    return F[0];
}

//Função para exibição de árvore de Huffman
void exibeh(Arvh A){
    static int n = -1;
    if(A == NULL) return;
    n++;
    exibeh(A->dir);
    for(int i = 0; i<5*n; i++){
        printf(" ");
    }
    printf("(%c, %d)\n", A->chr,A->frq);
    exibeh(A->esq);
    n--;
}

//Função para a exibição de código de Huffman
void codigo(Arvh A){
    static char d[256], t = -1;
    if(A == NULL) return;
    if(A->esq == NULL && A->dir == NULL){
        printf("%c: %.*s\n", A->chr,t+1,d);
    } else{
        t++;
        d[t] = '0'; codigo(A->esq);
        d[t] = '1'; codigo(A->dir);
        t--;
    }
}

//Função para a criação de uma tabela de códigos de Huffman.
void tabela(Arvh A, char *H[]){
    static char c[256], t = -1;
    if(A == NULL) return;
    if(A->esq == NULL && A->dir == NULL){
        H[A->chr] = _strndup(c,t+1);
    } else{
        t++;
        c[t] = '0'; tabela(A->esq, H);
        c[t] = '1'; tabela(A->dir, H);
        t--;
    }
}

//Função para comprimir uma cadeia de caracteres
void comprimir(char *s, Arvh A){
    char *T[256];
    for(int c = 0; c<256; c++) T[c] = NULL;
    tabela(A,T);
    for(int i = 0; s[i]; i++) printf("%s", T[s[i]]);
    for(int c=0; c<256; c++) free(T[c]);
}

//Função para descomprimir uma cadeia de dígitos
void descomprimir(char *d, Arvh A){
    if( A == NULL) return;
    Arvh n = A;
    for(int i=0; d[i]; i++){
        n = (d[i] == '0') ? n->esq : n->dir;
        if(n->esq == NULL && n->dir == NULL){
            printf("%c", n->chr);
            n = A;
        }
    }
}

int main(void){

    return 0;
}
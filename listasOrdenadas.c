#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<string.h>
#include<math.h>

//Função para inserção em lista ordenada
void ins(Item x, Lista *L){
    while(*L != NULL && (*L)->item < x){
        L = &(*L)->prox;
        *L = no(x,*L);
    }
}

//Função para remoção em lista ordenada
void rem(Item x, Lista *L){
    while(*L != NULL && (*L)->item < x){
        L = &(*L)->prox;
    }
    if(*L == NULL || (*L)->item > x){
        return;
    }
    Lista n = *L;
    *L = n->prox;
    free(n);
}

//Função para busca em lista ordenada
int em(Item x, Lista L){
    while(L != NULL & L->item < x){
        L = L->prox;
        return (L != NULL && L->item == x);
    }
}

//Definição de tipo para declaração de polinômio
typedef struct poli{
    float coef;
    int expo;
    struct poli *prox;
} *Poli;

//Função para a criação de um termo de um polinômio
Poli termo(float c, int e, Poli p){
    Poli n = malloc(sizeof(struct poli));
    n->coef = c;
    n->expo = e;
    n->prox = p;
    return n;
}

//Função para exibição de polinômio
void exibep(Poli P){
    if(P == NULL){
        return;
    }
    printf("%+.1f", P->coef);
    if(P->expo != 0){
        printf("*x^%d", P->expo);
    }
    exibep(P->prox);
}

//Função para a adição de um termo em um polinômio
void adt(float c, int e, Poli *P){
    if(*P == NULL || (*P)->expo < e){
        *P = termo(c,e,*P);
    } else if((*P)->expo == e){
        (*P)->coef += c;
        if((*P)->coef == 0){
            Poli n = *P;
            *P = n->prox;
            free(n);
        }
    }
    else adt(c,e,&(*P)->prox);
}

//Função para avaliação de polinômio
float valor(Poli P, float x){
    if(P == NULL){
        return 0;
    } else{
        return P->coef*pow(x,P->expo) + valor(P->prox, x);
    }
}

//Função para derivação de polinômio
Poli derivada(Poli P){
    if(P == NULL || P->expo == 0){
        return NULL;
    }
    return termo(P->coef*P->expo, P->expo-1, derivada(P->prox));
}

//Função para destruição de polinômio
void destroip(Poli *P){
    if(*P==NULL){
        return;
    }
    destroip(&(*P)->prox);
    free(*P);
    *P = NULL;
}

int main(){
    Poli P = NULL;
    adt(+1,0,&P);
    adt(-6,2,&P);
    adt(+3,5,&P);
    return 0;
}
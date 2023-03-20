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

//Função para criação de um no de mapeamento
Map no_map(Chave c, Valor v, Map p){
    Map n = malloc(sizeof(struct map));
    n->chave = c;
    stucpy(n->valor,v);
    n->prox = p;
    return n;
}

//Função que insere uma associação (chave, valor) em um mapeamento.
void insm(Chave c, Valor v, Map *L){
    while(*L != NULL && (*L)->Chave < c){
        L = &(*L)->prox;
    }
    if(*L != NULL && (*L)->Chave == c){
        strcpy((*L)->valor v);
    } else{
        *L = no_map(c,v,*L);
    }
}

//Função que remove uma chave (e valor associado) de um mapeamento
int remm(Chave c, Map *L){
    while(*L != NULL && (*L)->chave < c){
        L = &(*L)->prox;
    }
    if(*L == NULL || (*L)->chave > c){
        return 0;
    }
    Map n = *L;
    *L = n->prox;
    free(n);
    return 1;
}

//Função para verificação de pertinência em mapeamento
int pertm(Chave c, Valor v, Map L){
    while (L != NULL && L->chave < c)
    {
        L = L->prox;
    }
    if(L !=NULL && L->chave == c){
        strcpy(v, L->valor);
    }
    return (*L != NULL && L->chave == c);
}

//Função para exibição de mapeamento
void exibem(Map L){
    printf("[");
    while (L != NULL)
    {
        printf("(%d,%s)", L->chave, L->valor);
        if(L->prox != NULL){
            printf(",");
        }
    }
    printf("]\n");
}

//Função para exibição de mapeamento
void destroim(Map *L){
    while (L != NULL)
    {
        Map *n = L;
        *L = n->prox;
        free(n);
    }
    
}

int main(void){
    Map I = NULL;
    insm(693716648, "Maria Santos", &I);
    insm(706091783, "Ivo Medeiros", &I);
    exibem(I);
    if(pertm(693716648,v,I)){
        puts(v);
    } else{
        puts("Chave inexistente");
    }
    if(pertm(458100035,v,I)){
        puts(v);
    } else{
        puts("Chave inexistente");
    }
    //Remover chave 458100035
    if(remm(458100035, &I)){
        puts("Chave removida");
    } else{
        puts("Chave inexistente");
    }

    Chave cpf;
    Valor nome;
    Map M = NULL;
    insm(819, "Eva", &M);
    insm(458, "Ana", &M);
    insm(920, "Rui", &M);

    while( 1 ){
        _clrscr();
        puts("(I)nserir");
        puts("(R)emover");
        puts("(P)rocurar");
        puts("(L)istar");
        puts("(D)estruir");
        puts("(S)air\n");
        printf("Opção? ");
        char opcao = toupper(_getche());
        if(opcao == 'S') break;
        switch (opcao)
        {
        case 'I':
            printf("\n\nCPF? ");
            scanf("%d", &cpf);
            printf("Nome? ");
            fflush(stdin);
            gets(nome);
            insm(cpf,nome,&M);
            puts("Inserido!\n");
            break;
        case 'R':
            printf("\n\nCPF? ");
            scanf("%d", &cpf);
            if(remm(cpf,nome,M)){
                printf("Removido!\n");
            } else{
                puts("CPF inexistente!\n");
            }
            break;
        case 'P':
            printf("\n\nCPF? ");
            scanf("%d", &cpf);
            if(pertm(cpf,nome,M)){
                printf("Nome: %s\n", nome);
            } else{
                puts("CPF inexistente!\n");
            }
            break;
        case 'L': puts("\n\nListagem:\n"); exibem(M); break;
        case 'D': destroim(&M); puts("\n\nDestruido!"); break;
        default: puts("\n\nOpcao invalida");
            break;
        }
        printf("\nPressione <enter>");
        _getche();
    }
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<conio.h>
#include<locale.h>
#include"../ed/lista.h" //Lista de int
#include"../ed/fila.h" //Fila de lista

//Função para ordenação topológica
void ts(Lista Adj[], int n){
    int pred[n];
    for(int i=0; i<n; i++){
        pred[i] = 0;
        for(int j=0; j<n; j++)
            if(pert*i,Adj[j])
                pred[i]++;
    }
    Fila F = fila(n);
    for(int v = 0; v<n; v++)
        if(pred[v] == 0)
            enfileira(v,F);
    
    while(!vaziaf(F)){
        int v = desenfileira(F);
        printf("%d ", v);
        for(Lista s = Adj[v]; s; s = s->prox){
            pred[s->item]--;
            if(pred[s->item]==0)
                enfileira(s->item,F);
        }
    }
}

int main(void){
    Lista Adj[] = {
        no(1,NULL),
        NULL,
        no(5,NULL),
        no(0,no(4,NULL)),
        no(1,NULL),
        no(4,no(8,NULL)),
        NULL,
        no(8,NULL),
        NULL
    };
    ts(Adj,9);
    return 0;
}
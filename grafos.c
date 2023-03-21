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

//Função apra busca em largura
void bfs(int v, int w, Lista Adj[]){
    Fila F = fila(100); //temanho da fila depende do grafo!
    enfileira(no(v,NULL),F);
    while (!vaziaf(F))
    {
        Lista c = desenfileira(F);
        if(c->item==w){
            exibe_inv(c);
            puts(" ");
        } else{
            for(Lista s = Adj[c->item]; s; s = s->prox)
                if(!pert(s->item,c)) enfileira(no(s->item,clone(c)),F);
            destroi(&c);
        }
        destroi(&F);
    }
}

int main(void){

    Lista Adj[] = {
        no(1,NULL),
        no(2,no(3,no(4,NULL))),
        no(4,NULL),
        no(0,no(4,NULL)),
        no(2,no(3,NULL))
    };
    bfs(0,2,Adj);
    return 0;
}
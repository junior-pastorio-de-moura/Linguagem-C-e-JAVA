#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<string.h>
#include<math.h>
#include"./ed/pilha.h"//Pilha de int

int main(void){
    system("clear");

    Pilha P = pilha(100);
    empilha(8,P);
    
    while (topo(P) > 0)
    {
        empilha(topo(P)/2, P);
    }
    
    while (!vazia(P))
    {
        printf("%f\n", desempilha(P));
    }

    return 0;
}
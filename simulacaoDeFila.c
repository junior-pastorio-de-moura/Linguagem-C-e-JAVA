#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include"./ed/pilha.h"//Pilha de char
#include"./ed/fila.h"//Fila de char

int main(void){
    system("clear");

    Fila F = fila(5);

    enfileira(1,F);
    enfileira(2,F);
    enfileira(3,F);
    
    enfileira(desenfileira(F), F);
    enfileira(desenfileira(F), F);

    printf("%d\n", desenfileira(F));
    return 0;
}
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
    for(int i = 0; i <=3; i++){
        enfileira('A'+i, F);
    }
    while (!vaziaf(F))
    {
        printf("%c\n", desenfileira(F));
    }
    destroif(F);
    return 0;
}
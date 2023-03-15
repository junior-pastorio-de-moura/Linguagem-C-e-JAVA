#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include"./ed/pilha.h"//Pilha de char
#include"./ed/fila.h"//Fila de char
#define tempo 3 //Tempo máximo de uso da CPU

int main(void){
    system("clear");

    Fila F = fila(5);
    enfileira(17,F);
    enfileira(25,F);
    enfileira(39,F);
    enfileira(46,F);
    
    while (!vaziaf(F))
    {
        int x = desenfileira(F);
        int p = x/10;
        int t = x%10;
        if(t>3){
            enfileira(p*10+(t-tempo), F);
        } else{
            printf("Processo %d concluído\n", p);
        }
    }
    destroif(&F);
    return 0;
}
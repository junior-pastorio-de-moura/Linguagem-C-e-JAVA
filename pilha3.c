#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<string.h>
#include<math.h>
#include"./ed/pilha.h"//Pilha de int

int main(void){
    system("clear");

    Pilha P = pilha(5);
    char s[11];

    
    for(int i = 1; i <= 3; i++){
        printf("? ");
        gets(s);
        empilha(s,P);
    }

    while (!vazia(P))
    {
        puts(desempilha(P));
    }
    

    return 0;
}
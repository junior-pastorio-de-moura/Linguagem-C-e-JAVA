#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<string.h>
#include<math.h>
#include"./ed/pilha.h"//Pilha de int

int main(){
    system("clear");

    Pilha P = pilha(3);
    empilha(1,P);
    empilha(2,P);
    
    printf("%d\n", desempilha(P));
    printf("%d\n", desempilha(P));
    printf("%d\n", desempilha(P));

    return 0;
}
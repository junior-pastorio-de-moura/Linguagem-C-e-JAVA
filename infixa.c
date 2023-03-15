#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include"./ed/pilha.h"//Pilha de int

char *posfixa(char *e){
    static char s[256];
    int j = 0;
    Pilha P = pilha(256);

    for(int i = 0; e[i]; i++){
        if(isdigit(e[i])){
            s[j++] = e[i];
        } else if(strchr("+*-/", e[i])){
            empilha(e[i], P);
        } else if(e[i] == ')'){
            s[j++] = desempilha(P);
        }
    }
    s[j] = '\0';
    destroip(&P);
    return s;
}

//Função que retorna a prioridade de um operador
int piro(char o){
    switch (o)
    {
    case '(':
        return 0;
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    }
    return -1;
}

int main(void){
    system("clear");

    char e[256];
    printf("Infixa? ");
    gets(e);
    printf("Posfixa: %s\n\n", posfixa(e));

    return 0;
}
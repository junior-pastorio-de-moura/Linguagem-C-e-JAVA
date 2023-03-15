#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include"./ed/pilha.h"//Pilha de int

//Função para converção de infixa em posfixa
char *posfixa(char *e){
    static char s[256];
    int j = 0;
    Pilha P = pilha(256);

    for(int i = 0; e[i]; i++){
        if(e[i] == '('){
            empilha('(',P);
        } else if(isdigit(e[i])){
            s[j++] = e[i];
        } else if(strchr("+-/*", e[i])){
            while (!vaziap(P) && prio(topo(P)) >= piro(e[i]))
            {
                s[j++] = desempilha(P);    
                empilha(e[i], P);
            }
            
        } else if(e[i] == ')'){
            while (topo(P) != '(')
            {
                s[j++] = desempilha(P);
            }
            desempilha(P);
        }
    }
    while (!vaziap(P))
    {
        s[j++] = desempilha(P);
    }
    s[j] = '\0';
    destroip(&P);
    return s;
}

//Função para converção de infixa em posfixa com operandos reais de vários dígitos
char *posfixa2(char *e){
    static char s[256];
    int j = 0;
    Pilha P = pilha(256);

    for(int i = 0; e[i]; i++){
        if(e[i] == '('){
            empilha('(',P);
        } else if(isdigit(e[i]) || e[i] == '.'){
            s[j++] = e[i];
        } else if(strchr("+-/*", e[i])){
            s[j++] = " ";
            while (!vaziap(P) && prio(topo(P)) >= piro(e[i]))
            {
                s[j++] = desempilha(P);    
            }
            empilha(e[i], P);
            
        } else if(e[i] == ')'){
            while (topo(P) != '(')
            {
                s[j++] = desempilha(P);
            }
            desempilha(P);
        }
    }
    while (!vaziap(P))
    {
        s[j++] = desempilha(P);
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

//Função que avalia a forma posfixa
int valor(char *e){
    Pilha P = pilha(256);

    for(int i = 0; e[i]; i++){
        if(isdigit(e[i])){
            empilha(e[i] - '0', P);
        } else{
            int y = desempilha(P);
            int x = desempilha(P);
            switch (e[i])
            {
                case '+': empilha(x+y,P);
                case '-': empilha(x-y,P);
                case '*': empilha(x*y,P);
                case '/': empilha(x/y,P);
            }
        }
    }
    int z = desempilha(P);
    destroip(&P);
    return z;
}

//Função para avaliação da forma posfixa
float valor(char *e){
    Pilha P = pilha(256);

    for(int i = 0; e[i]; i++){
        if(isdigit(e[i])){
            empilha(atof(e+i), P);
        } else if(strchr("+*-/", e[i])){
            float y = desempilha(P);
            float x = desempilha(P);
            switch (e[i])
            {
                case '+': empilha(x+y,P); break;
                case '-': empilha(x-y,P); break;
                case '*': empilha(x*y,P); break;
                case '/': empilha(x/y,P); break;
            }
        }
    }
    int z = desempilha(P);
    destroip(&P);
    return z;
}
int main(void){
    system("clear");

    char e[256];
    printf("Infixa? ");
    gets(e);
    printf("Posfixa: %s\n\n", posfixa(e));

    return 0;
}
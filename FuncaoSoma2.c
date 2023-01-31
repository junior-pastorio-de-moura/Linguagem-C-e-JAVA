#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int somar(){
    return 2 + 3;
}

int main(void){
    int resultado = 0;
    resultado = somar();//Armazenando em uma variável o retorno da função
    printf("\nO resultado da soma é = %d\n", resultado);
    return 0;
}
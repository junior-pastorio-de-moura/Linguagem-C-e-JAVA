#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<string.h>
#include<math.h>
#include "../ed/fila.h" //Fila de int

//Função recursiva para cálculo de fatorial
int fat(int n){
    if(n == 0){
        return 1;
    } else{
        return n*fat(n-1);
    }
}

//Função recursiva para exibição de binários
void bin(int n){
    if(n<2){
        printf("%d", n);
    } else{
        bin(n/2);
        printf("%d", n%2);
    }
}

//Função recursiva para as torres de Hanói
void hanoi(int n, int origem, int auxiliar, int destino){
    if(n==1){
        printf("mova da torre %d para a torre %d\n", origem, destino);
    } else{
        hanoi(n-1,origem,destino,auxiliar);
        printf("mova da torre %d para a torre %d\n", origem, destino);
        hanoi(n-1,auxiliar,origem,destino);
    }
}

//Função recursiva que exibe uma contagem regressiva a partir de n
void regressiva(int n){
    if(n<0){
        return 0;
    }
    printf("%d\n", n);
    regressiva(n-1);
}

//Função arecursiva que devolve o enésimo elemento da sequência de Fibonacci.
int fib(int n){
    if(n<3){
        return 1;
    } else{
        return fib(n-1) + fib(n-2);
    } 
}

//Função arecursiva que calcula o resto da divisão
int resto(int m, int n){
    if(m<n){
        return m;
    } else{
        return resto(m-n, n);
    }
}

//Recursão redundante
int r(int m, int n){
    if(m==0){
        return n;
    }
    if(n==0){
        return m;
    }
    return r(m-1,n) + r(m,n-1);
}

int main(void){
    
    return 0;
}
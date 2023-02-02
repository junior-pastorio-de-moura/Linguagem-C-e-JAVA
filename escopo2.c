#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

int x = 10;

int testar()[
    return 2*x;
]

int main (void){ 
    printf("\nValor de x na global = %d", x);
    printf("\nValor de x global alterado na função testar() = %d", testar());
    return 0;
}
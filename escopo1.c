#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

int x = 22;

int outro(){
    printf("\n%d\n", x);
}

int testar(){
    int x = 10;
    return x;
}

int main (void){ 
    printf("\nX = %d\n", x);
    int x = 14;
    printf("\nValor de x na função main = %d", x);
    printf("\nValor de x na função testar = %d", testar());
    {
        int x = 7;
        printf("\nValor de x no subescopo da função main = %d\n", x);
    };
    return 0;
}
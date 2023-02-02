#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

int somar(int a, int b){
    return a + b;
}

int main (void){ 
    system("clear");
    int result;
    result = somar(10, 15);
    printf("Resultado da soma = %d\n", result);
    return 0;
}
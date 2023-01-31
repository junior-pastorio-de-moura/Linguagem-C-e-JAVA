#include<stdlib.h>
#include<stdio.h>
#include<string.h>

float calcular(){
    float num;
    printf("\nDigite um número: ");
    scanf("%f", &num);
    return num * num;
}

int main(void){
    float resultado = 0;
    resultado = calcular();
    printf("O quadrado do número digitado é %.2f\n", resultado);
    return 0;
}
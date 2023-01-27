#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(void){
    float metragem1 = 0, metragem2 = 0, resultado = 0;
    int resp;
    printf("\nCÁLCULO DE MÉTROS QUADRADOS\n");
    do{
        printf("\nDigite a primeira metragem do terreno: ");
        scanf("%f", &metragem1);

        printf("\nDigite a segunda metragem do terreno: ");
        scanf("%f", &metragem2);

        resultado = metragem1 * metragem2;
        printf("\n\nO terreno tem = %.2f m²", resultado);
        printf("\nDigite 1 para continuar ou 2 para sair: ");
        scanf("%d", &resp);
    } while(resp == 1);
    return 0;
}
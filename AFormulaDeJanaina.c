    /*
    Calcular o resultado de x ao quadrado menos quatro x mais cinco de
    n valores digitados.
    */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    system("clear");
    int n;
    float x[n], resultado[n];
    printf("Quantos valores deseja calcular? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Qual o primeiro valor a ser inserido? ");
        scanf("%f", &x[i]);        
        resultado[i] = ((x[i]*x[i]) - (4*x[i]) + 5);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Cálculo 1: %.2f\n", resultado[i]);
    }
    
    return 0;
}
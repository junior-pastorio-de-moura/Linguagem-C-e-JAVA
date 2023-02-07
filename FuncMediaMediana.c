#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define VET_TAM 6

float calcularMedia(float conjunto[], int tam){
    float soma = 0.0, resultado = 0.0;
    for (int i = 0; i < tam; i++)
    {
        soma += conjunto[i];
    }
    resultado = soma / (float) tam;
    return resultado;
}

float calcularMediana(float conjunto[], int tam){
    float resultado = 0.0;
     if (tam % 2 != 0)
    {
        resultado = conjunto[tam / 2];
    } else{
        resultado = (conjunto[tam / 2] + conjunto[tam / 2 -1] / 2);
    }
}

int main (void){ 
    float vet[VET_TAM] = {1, 2, 3, 4, 5, 6};
    float media = calcularMedia(vet, VET_TAM);
    float mediana = calcularMediana(vet, VET_TAM);

    printf("Média = %.2f", media);
    printf("Médiana = %.2f", mediana);
    return 0;
}